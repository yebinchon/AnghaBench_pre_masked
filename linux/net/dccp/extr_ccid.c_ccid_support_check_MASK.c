
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int * FUNC_0 (size_t const) ;

bool FUNC_1(u8 const *VAR_0, u8 VAR_1)
{
 while (VAR_1 > 0)
  if (FUNC_0(VAR_0[--VAR_1]) == ((void*)0))
   return 0;
 return 1;
}
