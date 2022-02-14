
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(Oid VAR_2)
{
 int VAR_3 = 0,
    VAR_4 = VAR_1 - 1;

 while (VAR_3 <= VAR_4)
 {
  int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;

  if (VAR_0[VAR_5] == VAR_2)
   return 1;
  if (VAR_0[VAR_5] < VAR_2)
   VAR_3 = VAR_5 + 1;
  else
   VAR_4 = VAR_5 - 1;
 }

 return 0;
}
