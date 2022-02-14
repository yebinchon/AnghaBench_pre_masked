
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_11__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 void* FUNC_4 (int,int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (float,float) ;
 TYPE_1__ FUNC_8 (TYPE_1__,int ) ;
 int FUNC_9 (int,int) ;
 TYPE_1__ VAR_4 ;
 int * FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ) ;
 float FUNC_14 (int *,int *) ;
 TYPE_1__ FUNC_15 (int *,int ) ;

void
FUNC_16(fz_context *VAR_5, pdf_obj *VAR_6, fz_rect *VAR_7, fz_matrix *VAR_8)
{
 pdf_obj *VAR_9;
 fz_rect VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14 = 1;
 int VAR_15;

 if (!VAR_7)
  VAR_7 = &VAR_13;

 VAR_9 = FUNC_10(VAR_5, VAR_6, FUNC_0(VAR_3));
 if (FUNC_12(VAR_5, VAR_9))
  VAR_14 = FUNC_14(VAR_5, VAR_9);

 VAR_10 = FUNC_15(VAR_5, FUNC_11(VAR_5, VAR_6, FUNC_0(VAR_1)));
 if (FUNC_3(VAR_10))
 {
  VAR_10.x0 = 0;
  VAR_10.y0 = 0;
  VAR_10.x1 = 612;
  VAR_10.y1 = 792;
 }

 VAR_11 = FUNC_15(VAR_5, FUNC_11(VAR_5, VAR_6, FUNC_0(VAR_0)));
 if (!FUNC_3(VAR_11))
  VAR_10 = FUNC_2(VAR_10, VAR_11);

 VAR_7->x0 = FUNC_5(VAR_10.x0, VAR_10.x1);
 VAR_7->y0 = FUNC_5(VAR_10.y0, VAR_10.y1);
 VAR_7->x1 = FUNC_4(VAR_10.x0, VAR_10.x1);
 VAR_7->y1 = FUNC_4(VAR_10.y0, VAR_10.y1);

 if (VAR_7->x1 - VAR_7->x0 < 1 || VAR_7->y1 - VAR_7->y0 < 1)
  *VAR_7 = VAR_4;

 VAR_15 = FUNC_13(VAR_5, FUNC_11(VAR_5, VAR_6, FUNC_0(VAR_2)));


 if (VAR_15 < 0)
  VAR_15 = 360 - ((-VAR_15) % 360);
 if (VAR_15 >= 360)
  VAR_15 = VAR_15 % 360;
 VAR_15 = 90*((VAR_15 + 45)/90);
 if (VAR_15 >= 360)
  VAR_15 = 0;





 *VAR_8 = FUNC_7(VAR_14, -VAR_14);


 *VAR_8 = FUNC_6(*VAR_8, -VAR_15);


 VAR_12 = FUNC_8(*VAR_7, *VAR_8);
 *VAR_8 = FUNC_1(*VAR_8, FUNC_9(-VAR_12.x0, -VAR_12.y0));
}
