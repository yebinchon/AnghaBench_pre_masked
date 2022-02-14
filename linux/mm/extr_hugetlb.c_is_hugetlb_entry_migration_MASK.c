
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
typedef int pte_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(pte_t VAR_0)
{
 swp_entry_t VAR_1;

 if (FUNC_0(VAR_0) || FUNC_3(VAR_0))
  return 0;
 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_2(VAR_1) && FUNC_1(VAR_1))
  return 1;
 else
  return 0;
}
