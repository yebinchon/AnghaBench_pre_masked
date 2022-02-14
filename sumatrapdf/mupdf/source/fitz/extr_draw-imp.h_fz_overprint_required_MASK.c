
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* mask; } ;
typedef TYPE_1__ fz_overprint ;


 int VAR_0 ;

__attribute__((used)) static int inline FUNC_0(const fz_overprint *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;

 for (VAR_2 = 0; VAR_2 < (VAR_0+31)/32; VAR_2++)
  if (VAR_1->mask[VAR_2] != 0)
   return 1;

 return 0;
}
