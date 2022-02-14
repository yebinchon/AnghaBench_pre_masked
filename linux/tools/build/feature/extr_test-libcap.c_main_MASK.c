
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_t ;
typedef int cap_flag_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 cap_flag_value_t VAR_2;
 cap_t VAR_3 = FUNC_2();

 if (!VAR_3)
  return 1;

 if (FUNC_1(VAR_3, VAR_1, VAR_0, &VAR_2) != 0)
  return 1;

 if (FUNC_0(VAR_3) != 0)
  return 1;

 return 0;
}
