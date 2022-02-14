
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;

int_fast32_t FUNC_1(int_fast32_t VAR_2, int *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -1;

 if (*VAR_3 == -1) {
  if (FUNC_0(VAR_2, VAR_0, VAR_3) < 0)
   return -1;
 } else {
  if (FUNC_0(VAR_2, VAR_1, VAR_3) < 0)
   return -1;
 }

 return 0;
}
