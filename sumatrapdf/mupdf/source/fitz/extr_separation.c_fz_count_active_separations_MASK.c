
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_separations; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int) ;

int FUNC_1(fz_context *VAR_1, const fz_separations *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_2)
  return 0;
 VAR_4 = VAR_2->num_separations;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (FUNC_0(VAR_2, VAR_3) == VAR_0)
   VAR_5++;
 return VAR_5;
}
