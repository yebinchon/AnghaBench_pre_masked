
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int XPoint ;
struct TYPE_10__ {int style; int* pattern; int yorigin; int xorigin; } ;
struct TYPE_8__ {int gc; } ;
struct TYPE_9__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef int POINT ;
typedef int HGLYPH ;
typedef TYPE_3__ BRUSH ;



 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

 int VAR_3 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int,int,int*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (char*,int) ;

void
FUNC_12(RDPCLIENT * VAR_5, uint8 VAR_6,
               uint8 VAR_7,
               POINT * VAR_8, int VAR_9,
                BRUSH * VAR_10, int VAR_11, int VAR_12)
{
 uint8 VAR_13, VAR_14, VAR_15[8];
 Pixmap VAR_16;

 FUNC_4(VAR_6);

 switch (VAR_7)
 {
  case 129:
   FUNC_5(VAR_5->display, VAR_5->xwin.gc, VAR_0);
   break;
  case 128:
   FUNC_5(VAR_5->display, VAR_5->xwin.gc, VAR_3);
   break;
  default:
   FUNC_11("fill mode %d\n", VAR_7);
 }

 if (VAR_10)
  VAR_13 = VAR_10->style;
 else
  VAR_13 = 0;

 switch (VAR_13)
 {
  case 0:
   FUNC_3(VAR_12);
   FUNC_0((XPoint *) VAR_8, VAR_9);
   break;

  case 2:
   VAR_16 = (Pixmap) FUNC_9(VAR_5, 8, 8,
       VAR_4 + VAR_10->pattern[0] * 8);
   FUNC_3(VAR_12);
   FUNC_2(VAR_11);
   FUNC_6(VAR_5->display, VAR_5->xwin.gc, VAR_1);
   FUNC_7(VAR_5->display, VAR_5->xwin.gc, VAR_16);
   FUNC_8(VAR_5->display, VAR_5->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0((XPoint *) VAR_8, VAR_9);
   FUNC_6(VAR_5->display, VAR_5->xwin.gc, VAR_2);
   FUNC_8(VAR_5->display, VAR_5->xwin.gc, 0, 0);
   FUNC_10(VAR_5, (HGLYPH) VAR_16);
   break;

  case 3:
   for (VAR_14 = 0; VAR_14 != 8; VAR_14++)
    VAR_15[7 - VAR_14] = VAR_10->pattern[VAR_14];
   VAR_16 = (Pixmap) FUNC_9(VAR_5, 8, 8, VAR_15);
   FUNC_3(VAR_11);
   FUNC_2(VAR_12);
   FUNC_6(VAR_5->display, VAR_5->xwin.gc, VAR_1);
   FUNC_7(VAR_5->display, VAR_5->xwin.gc, VAR_16);
   FUNC_8(VAR_5->display, VAR_5->xwin.gc, VAR_10->xorigin, VAR_10->yorigin);
   FUNC_0((XPoint *) VAR_8, VAR_9);
   FUNC_6(VAR_5->display, VAR_5->xwin.gc, VAR_2);
   FUNC_8(VAR_5->display, VAR_5->xwin.gc, 0, 0);
   FUNC_10(VAR_5, (HGLYPH) VAR_16);
   break;

  default:
   FUNC_11("brush %d\n", VAR_10->style);
 }

 FUNC_1(VAR_6);
}
