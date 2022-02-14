
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

bool FUNC_1(bool VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (!VAR_3 || (VAR_3 == VAR_4))
  return 1;
 if (!VAR_2)
  return 0;
 if (VAR_3 == FUNC_0(VAR_4))
  return 1;
 if (VAR_3 == (VAR_4 & VAR_0))
  return 1;
 if (VAR_3 == (VAR_4 & VAR_1))
  return 1;
 return 0;
}
