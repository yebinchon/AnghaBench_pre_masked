
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gred_sched {TYPE_1__** tab; scalar_t__ red_flags; } ;
struct TYPE_2__ {scalar_t__ red_flags; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct gred_sched *VAR_1)
{
 unsigned int VAR_2;


 if (VAR_1->red_flags)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->tab[VAR_2] && VAR_1->tab[VAR_2]->red_flags)
   return 1;
 return 0;
}
