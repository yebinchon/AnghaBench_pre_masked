
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_transition ;
struct TYPE_4__ {int * (* page_presentation ) (int *,TYPE_1__*,int *,float*) ;} ;
typedef TYPE_1__ fz_page ;
typedef int fz_context ;


 int * FUNC_0 (int *,TYPE_1__*,int *,float*) ;

fz_transition *
FUNC_1(fz_context *VAR_0, fz_page *VAR_1, fz_transition *VAR_2, float *VAR_3)
{
 float VAR_4;
 if (VAR_3)
  *VAR_3 = 0;
 else
  VAR_3 = &VAR_4;
 if (VAR_1 && VAR_1->page_presentation && VAR_1)
  return VAR_1->page_presentation(VAR_0, VAR_1, VAR_2, VAR_3);
 return ((void*)0);
}
