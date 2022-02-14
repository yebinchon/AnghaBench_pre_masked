
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (float,float) ;
 void* FUNC_1 (float,float) ;
 float FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;

fz_rect
FUNC_4(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (!FUNC_3(VAR_1, VAR_2))
  return VAR_0;
 else
 {
  float VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
  float VAR_4 = FUNC_2(VAR_1, VAR_2, 1);
  float VAR_5 = FUNC_2(VAR_1, VAR_2, 2);
  float VAR_6 = FUNC_2(VAR_1, VAR_2, 3);
  fz_rect VAR_7;
  VAR_7.x0 = FUNC_1(VAR_3, VAR_5);
  VAR_7.y0 = FUNC_1(VAR_4, VAR_6);
  VAR_7.x1 = FUNC_0(VAR_3, VAR_5);
  VAR_7.y1 = FUNC_0(VAR_4, VAR_6);
  return VAR_7;
 }
}
