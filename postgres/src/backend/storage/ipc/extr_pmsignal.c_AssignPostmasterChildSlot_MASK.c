
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_child_flag; int num_child_flags; scalar_t__* PMChildFlags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;

int
FUNC_1(void)
{
 int VAR_4 = VAR_1->next_child_flag;
 int VAR_5;





 for (VAR_5 = VAR_1->num_child_flags; VAR_5 > 0; VAR_5--)
 {
  if (--VAR_4 < 0)
   VAR_4 = VAR_1->num_child_flags - 1;
  if (VAR_1->PMChildFlags[VAR_4] == VAR_3)
  {
   VAR_1->PMChildFlags[VAR_4] = VAR_2;
   VAR_1->next_child_flag = VAR_4;
   return VAR_4 + 1;
  }
 }


 FUNC_0(VAR_0, "no free slots in PMChildFlags array");
 return 0;
}
