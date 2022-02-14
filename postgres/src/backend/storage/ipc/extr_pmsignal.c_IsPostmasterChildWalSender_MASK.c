
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_child_flags; scalar_t__* PMChildFlags; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_1(int VAR_2)
{
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_0->num_child_flags);
 VAR_2--;

 if (VAR_0->PMChildFlags[VAR_2] == VAR_1)
  return 1;
 else
  return 0;
}
