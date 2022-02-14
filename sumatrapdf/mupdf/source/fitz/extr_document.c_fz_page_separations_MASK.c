
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_separations ;
struct TYPE_4__ {int * (* separations ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_page ;
typedef int fz_context ;


 int * FUNC_0 (int *,TYPE_1__*) ;

fz_separations *
FUNC_1(fz_context *VAR_0, fz_page *VAR_1)
{
 if (VAR_1 && VAR_1->separations)
  return VAR_1->separations(VAR_0, VAR_1);
 return ((void*)0);
}
