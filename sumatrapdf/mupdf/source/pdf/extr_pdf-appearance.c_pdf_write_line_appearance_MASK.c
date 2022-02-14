
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_12__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_13__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_2__ fz_rect ;
struct TYPE_14__ {int x; int y; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char*,int,int,int,int) ;
 TYPE_2__ FUNC_2 (TYPE_2__,void*) ;
 void* FUNC_3 (int,float) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 void* FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int ,int ) ;
 float FUNC_10 (int *,TYPE_1__*,int *) ;
 int FUNC_11 (int *,TYPE_1__*,int *) ;
 int FUNC_12 (int *,int *,TYPE_2__*,float,float,float,float,float,int,int,int ) ;
 int FUNC_13 (int *,TYPE_1__*,int *) ;
 float FUNC_14 (float) ;

__attribute__((used)) static void
FUNC_15(fz_context *VAR_2, pdf_annot *VAR_3, fz_buffer *VAR_4, fz_rect *VAR_5)
{
 pdf_obj *VAR_6, *VAR_7;
 fz_point VAR_8, VAR_9;
 float VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_10(VAR_2, VAR_3, VAR_4);
 VAR_11 = FUNC_13(VAR_2, VAR_3, VAR_4);
 VAR_12 = FUNC_11(VAR_2, VAR_3, VAR_4);

 VAR_6 = FUNC_9(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 VAR_8.x = FUNC_7(VAR_2, VAR_6, 0);
 VAR_8.y = FUNC_7(VAR_2, VAR_6, 1);
 VAR_9.x = FUNC_7(VAR_2, VAR_6, 2);
 VAR_9.y = FUNC_7(VAR_2, VAR_6, 3);

 FUNC_1(VAR_2, VAR_4, "%g %g m\n%g %g l\n", VAR_8.x, VAR_8.y, VAR_9.x, VAR_9.y);
 FUNC_5(VAR_2, VAR_4, VAR_11);

 VAR_5->x0 = FUNC_4(VAR_8.x, VAR_9.x);
 VAR_5->y0 = FUNC_4(VAR_8.y, VAR_9.y);
 VAR_5->x1 = FUNC_3(VAR_8.x, VAR_9.x);
 VAR_5->y1 = FUNC_3(VAR_8.y, VAR_9.y);

 VAR_7 = FUNC_9(VAR_2, VAR_3->obj, FUNC_0(VAR_1));
 if (FUNC_8(VAR_2, VAR_7) == 2)
 {
  float VAR_13 = VAR_9.x - VAR_8.x;
  float VAR_14 = VAR_9.y - VAR_8.y;
  float VAR_15 = FUNC_14(VAR_13*VAR_13 + VAR_14*VAR_14);
  FUNC_12(VAR_2, VAR_4, VAR_5, VAR_8.x, VAR_8.y, VAR_13/VAR_15, VAR_14/VAR_15, VAR_10, VAR_11, VAR_12, FUNC_6(VAR_2, VAR_7, 0));
  FUNC_12(VAR_2, VAR_4, VAR_5, VAR_9.x, VAR_9.y, -VAR_13/VAR_15, -VAR_14/VAR_15, VAR_10, VAR_11, VAR_12, FUNC_6(VAR_2, VAR_7, 1));
 }
 *VAR_5 = FUNC_2(*VAR_5, FUNC_3(1, VAR_10));
}
