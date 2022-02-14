
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_child_flags; scalar_t__* PMChildFlags; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool
FUNC_1(int VAR_3)
{
 bool VAR_4;

 FUNC_0(VAR_3 > 0 && VAR_3 <= VAR_0->num_child_flags);
 VAR_3--;






 VAR_4 = (VAR_0->PMChildFlags[VAR_3] == VAR_1);
 VAR_0->PMChildFlags[VAR_3] = VAR_2;
 return VAR_4;
}
