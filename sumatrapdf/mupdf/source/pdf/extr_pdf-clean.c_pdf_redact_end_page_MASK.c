
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pdf_page ;
typedef int pdf_obj ;
struct TYPE_17__ {int obj; } ;
typedef TYPE_5__ pdf_annot ;
struct TYPE_18__ {int y1; int x0; int x1; int y0; } ;
typedef TYPE_6__ fz_rect ;
struct TYPE_16__ {int y; int x; } ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_19__ {TYPE_4__ ul; TYPE_3__ ur; TYPE_2__ lr; TYPE_1__ ll; } ;
typedef TYPE_7__ fz_quad ;
typedef int fz_context ;
typedef int fz_buffer ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 TYPE_6__ FUNC_5 (int *,int ,int *) ;
 TYPE_5__* FUNC_6 (int *,int *) ;
 TYPE_5__* FUNC_7 (int *,TYPE_5__*) ;
 TYPE_7__ FUNC_8 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_4, fz_buffer *VAR_5, pdf_obj *VAR_6, void *VAR_7)
{
 pdf_page *VAR_8 = VAR_7;
 pdf_annot *VAR_9;
 pdf_obj *VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(VAR_4, VAR_5, "0 g\n");

 for (VAR_9 = FUNC_6(VAR_4, VAR_8); VAR_9; VAR_9 = FUNC_7(VAR_4, VAR_9))
 {
  if (FUNC_4(VAR_4, VAR_9->obj, FUNC_0(VAR_3)) == FUNC_0(VAR_2))
  {
   VAR_10 = FUNC_4(VAR_4, VAR_9->obj, FUNC_0(VAR_0));
   VAR_12 = FUNC_3(VAR_4, VAR_10);
   if (VAR_12 > 0)
   {
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += 8)
    {
     fz_quad VAR_13 = FUNC_8(VAR_4, VAR_10, VAR_11);
     FUNC_1(VAR_4, VAR_5, "%g %g m\n", VAR_13.ll.x, VAR_13.ll.y);
     FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_13.lr.x, VAR_13.lr.y);
     FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_13.ur.x, VAR_13.ur.y);
     FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_13.ul.x, VAR_13.ul.y);
     FUNC_2(VAR_4, VAR_5, "f\n");
    }
   }
   else
   {
    fz_rect VAR_14 = FUNC_5(VAR_4, VAR_9->obj, FUNC_0(VAR_1));
    FUNC_1(VAR_4, VAR_5, "%g %g m\n", VAR_14.x0, VAR_14.y0);
    FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_14.x1, VAR_14.y0);
    FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_14.x1, VAR_14.y1);
    FUNC_1(VAR_4, VAR_5, "%g %g l\n", VAR_14.x0, VAR_14.y1);
    FUNC_2(VAR_4, VAR_5, "f\n");
   }
  }
 }
}
