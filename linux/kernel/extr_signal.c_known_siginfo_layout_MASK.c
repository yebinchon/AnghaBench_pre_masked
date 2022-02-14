
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_6, int VAR_7)
{
 if (VAR_7 == VAR_3)
  return 1;
 else if ((VAR_7 > VAR_4)) {
  if (FUNC_0(VAR_6)) {
   if (VAR_7 <= VAR_5[VAR_6].limit)
    return 1;
  }
  else if (VAR_7 <= VAR_0)
   return 1;
 }
 else if (VAR_7 >= VAR_2)
  return 1;
 else if (VAR_7 == VAR_1)
  return 1;
 return 0;
}
