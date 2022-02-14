
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_separations; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, const fz_separations *VAR_1)
{
 if (!VAR_1)
  return 0;
 return VAR_1->num_separations;
}
