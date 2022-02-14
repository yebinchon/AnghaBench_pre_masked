
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_10__ {int style; int* pattern; int yorigin; int xorigin; } ;
struct TYPE_8__ {int gc; } ;
struct TYPE_9__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef int HGLYPH ;
typedef TYPE_3__ BRUSH ;


 int FUNC_0 (int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*,int,int,int*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (char*,int) ;

void
FUNC_11(RDPCLIENT * VAR_3, uint8 VAR_4,
               uint8 VAR_5,
               int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                BRUSH * VAR_10, int VAR_11, int VAR_12)
{
 uint8 VAR_13, VAR_14, VAR_15[8];
 Pixmap VAR_16;

 FUNC_4(VAR_4);

 if (VAR_10)
  VAR_13 = VAR_10->style;
 else
  VAR_13 = 0;

 switch (VAR_13)
 {
  case 0:
   FUNC_3(VAR_12);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
   break;

  case 2:
   VAR_16 = (Pixmap) FUNC_8(VAR_3, 8, 8,
       VAR_2 + VAR_10->pattern[0] * 8);
   FUNC_3(VAR_12);
   FUNC_2(VAR_11);
   FUNC_5(VAR_3->display, VAR_3->xwin.gc, VAR_0);
   FUNC_6(VAR_3->display, VAR_3->xwin.gc, VAR_16);
   FUNC_7(VAR_3->display, VAR_3->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
   FUNC_5(VAR_3->display, VAR_3->xwin.gc, VAR_1);
   FUNC_7(VAR_3->display, VAR_3->xwin.gc, 0, 0);
   FUNC_9(VAR_3, (HGLYPH) VAR_16);
   break;

  case 3:
   for (VAR_14 = 0; VAR_14 != 8; VAR_14++)
    VAR_15[7 - VAR_14] = VAR_10->pattern[VAR_14];
   VAR_16 = (Pixmap) FUNC_8(VAR_3, 8, 8, VAR_15);
   FUNC_3(VAR_11);
   FUNC_2(VAR_12);
   FUNC_5(VAR_3->display, VAR_3->xwin.gc, VAR_0);
   FUNC_6(VAR_3->display, VAR_3->xwin.gc, VAR_16);
   FUNC_7(VAR_3->display, VAR_3->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
   FUNC_5(VAR_3->display, VAR_3->xwin.gc, VAR_1);
   FUNC_7(VAR_3->display, VAR_3->xwin.gc, 0, 0);
   FUNC_9(VAR_3, (HGLYPH) VAR_16);
   break;

  default:
   FUNC_10("brush %d\n", VAR_10->style);
 }

 FUNC_1(VAR_4);
}
