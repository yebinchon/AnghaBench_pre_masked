
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_12__ {scalar_t__ yoffset; scalar_t__ xoffset; int wnd; } ;
struct TYPE_11__ {int style; int* pattern; int yorigin; int xorigin; } ;
struct TYPE_9__ {int gc; int backstore; } ;
struct TYPE_10__ {TYPE_1__ xwin; int wnd; scalar_t__ ownbackstore; int display; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef int HGLYPH ;
typedef TYPE_3__ BRUSH ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int (*) (int ,int ,int ,int ,int,int,int,int,int,int),int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int FUNC_10 (TYPE_2__*,int,int,int*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (char*,int) ;

void
FUNC_13(RDPCLIENT * VAR_4, uint8 VAR_5,
              int VAR_6, int VAR_7, int VAR_8, int VAR_9,
               BRUSH * VAR_10, int VAR_11, int VAR_12)
{
 Pixmap VAR_13;
 uint8 VAR_14, VAR_15[8];

 FUNC_5(VAR_5);

 switch (VAR_10->style)
 {
  case 0:
   FUNC_4(VAR_12);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
   break;

  case 2:
   VAR_13 = (Pixmap) FUNC_10(VAR_4, 8, 8,
       VAR_2 + VAR_10->pattern[0] * 8);
   FUNC_4(VAR_12);
   FUNC_3(VAR_11);
   FUNC_7(VAR_4->display, VAR_4->xwin.gc, VAR_0);
   FUNC_8(VAR_4->display, VAR_4->xwin.gc, VAR_13);
   FUNC_9(VAR_4->display, VAR_4->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_7(VAR_4->display, VAR_4->xwin.gc, VAR_1);
   FUNC_9(VAR_4->display, VAR_4->xwin.gc, 0, 0);
   FUNC_11(VAR_4, (HGLYPH) VAR_13);
   break;

  case 3:
   for (VAR_14 = 0; VAR_14 != 8; VAR_14++)
    VAR_15[7 - VAR_14] = VAR_10->pattern[VAR_14];
   VAR_13 = (Pixmap) FUNC_10(VAR_4, 8, 8, VAR_15);
   FUNC_4(VAR_11);
   FUNC_3(VAR_12);
   FUNC_7(VAR_4->display, VAR_4->xwin.gc, VAR_0);
   FUNC_8(VAR_4->display, VAR_4->xwin.gc, VAR_13);
   FUNC_9(VAR_4->display, VAR_4->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
   FUNC_7(VAR_4->display, VAR_4->xwin.gc, VAR_1);
   FUNC_9(VAR_4->display, VAR_4->xwin.gc, 0, 0);
   FUNC_11(VAR_4, (HGLYPH) VAR_13);
   break;

  default:
   FUNC_12("brush %d\n", VAR_10->style);
 }

 FUNC_2(VAR_5);

 if (VAR_4->ownbackstore)
  FUNC_6(VAR_4->display, VAR_4->xwin.backstore, VAR_4->wnd, VAR_4->xwin.gc, VAR_6, VAR_7, VAR_8, VAR_9, VAR_6, VAR_7);
 FUNC_1(FUNC_6,
    (VAR_4->display, VAR_4->ownbackstore ? VAR_4->xwin.backstore : VAR_4->wnd, VAR_3->wnd, VAR_4->xwin.gc,
     VAR_6, VAR_7, VAR_8, VAR_9, VAR_6 - VAR_3->xoffset, VAR_7 - VAR_3->yoffset));
}
