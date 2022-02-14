
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_12__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_9__ {int gc; int backstore; } ;
struct TYPE_10__ {int width; TYPE_1__ xwin; int display; int wnd; scalar_t__ ownbackstore; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int FONTGLYPH ;
typedef TYPE_3__ DATABLOB ;
typedef int BRUSH ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int (*) (int ,int ,int ,int ,int,int,int,int,int,int),int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int,int*,int) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_10 (char*) ;

void
FUNC_11(RDPCLIENT * VAR_7, uint8 VAR_8, uint8 VAR_9, uint8 VAR_10, int VAR_11, int VAR_12, int VAR_13,
      int VAR_14, int VAR_15, int VAR_16, int VAR_17,
      int VAR_18, int VAR_19, int VAR_20, int VAR_21, BRUSH * VAR_22,
      int VAR_23, int VAR_24, uint8 * VAR_25, uint8 VAR_26)
{


 FONTGLYPH *VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 DATABLOB *VAR_33;

 FUNC_4(VAR_23);




 if (VAR_18 + VAR_20 > VAR_7->width)
  VAR_20 = VAR_7->width - VAR_18;

 if (VAR_20 > 1)
 {
  FUNC_1(VAR_18, VAR_19, VAR_20, VAR_21);
 }
 else if (VAR_11 == VAR_2)
 {
  FUNC_1(VAR_14, VAR_15, VAR_16, VAR_17);
 }

 FUNC_4(VAR_24);
 FUNC_3(VAR_23);
 FUNC_6(VAR_7->display, VAR_7->xwin.gc, VAR_1);


 for (VAR_28 = 0; VAR_28 < VAR_26;)
 {
  switch (VAR_25[VAR_28])
  {
   case 0xff:

    if (VAR_28 + 3 > VAR_26)
    {
     FUNC_10("Skipping short 0xff command:");
     for (VAR_29 = 0; VAR_29 < VAR_26; VAR_29++)
      FUNC_9(VAR_5, "%02x ", VAR_25[VAR_29]);
     FUNC_9(VAR_5, "\n");
     VAR_28 = VAR_26 = 0;
     break;
    }
    FUNC_8(VAR_7, VAR_25[VAR_28 + 1], VAR_25, VAR_25[VAR_28 + 2]);
    VAR_28 += 3;
    VAR_26 -= VAR_28;

    VAR_25 = &(VAR_25[VAR_28]);
    VAR_28 = 0;
    break;

   case 0xfe:

    if (VAR_28 + 2 > VAR_26)
    {
     FUNC_10("Skipping short 0xfe command:");
     for (VAR_29 = 0; VAR_29 < VAR_26; VAR_29++)
      FUNC_9(VAR_5, "%02x ", VAR_25[VAR_29]);
     FUNC_9(VAR_5, "\n");
     VAR_28 = VAR_26 = 0;
     break;
    }
    VAR_33 = FUNC_7(VAR_7, VAR_25[VAR_28 + 1]);
    if (VAR_33->data != ((void*)0))
    {
     if ((((uint8 *) (VAR_33->data))[1] == 0)
         && (!(VAR_9 & VAR_3)) && (VAR_28 + 2 < VAR_26))
     {
      if (VAR_9 & VAR_4)
       VAR_13 += VAR_25[VAR_28 + 2];
      else
       VAR_12 += VAR_25[VAR_28 + 2];
     }
     for (VAR_29 = 0; VAR_29 < VAR_33->size; VAR_29++)
      FUNC_0(((uint8 *) (VAR_33->data)), VAR_29);
    }
    if (VAR_28 + 2 < VAR_26)
     VAR_28 += 3;
    else
     VAR_28 += 2;
    VAR_26 -= VAR_28;

    VAR_25 = &(VAR_25[VAR_28]);
    VAR_28 = 0;
    break;

   default:
    FUNC_0(VAR_25, VAR_28);
    VAR_28++;
    break;
  }
 }

 FUNC_6(VAR_7->display, VAR_7->xwin.gc, VAR_0);

 if (VAR_7->ownbackstore)
 {
  if (VAR_20 > 1)
  {
   FUNC_5(VAR_7->display, VAR_7->xwin.backstore, VAR_7->wnd, VAR_7->xwin.gc, VAR_18,
      VAR_19, VAR_20, VAR_21, VAR_18, VAR_19);
   FUNC_2(FUNC_5,
      (VAR_7->display, VAR_7->xwin.backstore, VAR_6->wnd, VAR_7->xwin.gc,
       VAR_18, VAR_19,
       VAR_20, VAR_21,
       VAR_18 - VAR_6->xoffset, VAR_19 - VAR_6->yoffset));
  }
  else
  {
   FUNC_5(VAR_7->display, VAR_7->xwin.backstore, VAR_7->wnd, VAR_7->xwin.gc, VAR_14,
      VAR_15, VAR_16, VAR_17, VAR_14, VAR_15);
   FUNC_2(FUNC_5,
      (VAR_7->display, VAR_7->xwin.backstore, VAR_6->wnd, VAR_7->xwin.gc,
       VAR_14, VAR_15,
       VAR_16, VAR_17, VAR_14 - VAR_6->xoffset,
       VAR_15 - VAR_6->yoffset));
  }
 }
}
