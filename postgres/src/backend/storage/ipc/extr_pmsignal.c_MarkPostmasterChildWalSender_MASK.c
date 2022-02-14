
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_child_flags; scalar_t__* PMChildFlags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void
FUNC_1(void)
{
 int VAR_5 = VAR_0;

 FUNC_0(VAR_4);

 FUNC_0(VAR_5 > 0 && VAR_5 <= VAR_1->num_child_flags);
 VAR_5--;
 FUNC_0(VAR_1->PMChildFlags[VAR_5] == VAR_2);
 VAR_1->PMChildFlags[VAR_5] = VAR_3;
}
