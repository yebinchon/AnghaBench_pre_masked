
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* colors; } ;
typedef TYPE_1__ TrgmPrefix ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(TrgmPrefix *VAR_1, TrgmPrefix *VAR_2)
{
 if (VAR_1->colors[1] == VAR_0)
 {

  return 1;
 }
 else if (VAR_1->colors[0] == VAR_0)
 {




  if (VAR_1->colors[1] == VAR_2->colors[1])
   return 1;
  else
   return 0;
 }
 else
 {

  if (VAR_1->colors[0] == VAR_2->colors[0] &&
   VAR_1->colors[1] == VAR_2->colors[1])
   return 1;
  else
   return 0;
 }
}
