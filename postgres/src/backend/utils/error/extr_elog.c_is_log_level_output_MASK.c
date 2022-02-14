
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_0(int VAR_4, int VAR_5)
{
 if (VAR_4 == VAR_2 || VAR_4 == VAR_3)
 {
  if (VAR_5 == VAR_2 || VAR_5 <= VAR_0)
   return 1;
 }
 else if (VAR_5 == VAR_2)
 {

  if (VAR_4 >= VAR_1)
   return 1;
 }

 else if (VAR_4 >= VAR_5)
  return 1;

 return 0;
}
