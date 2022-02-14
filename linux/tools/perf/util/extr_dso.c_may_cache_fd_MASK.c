
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rlim_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void)
{
 if (!VAR_2)
  VAR_2 = FUNC_0();

 if (VAR_2 == VAR_0)
  return 1;

 return VAR_2 > (rlim_t) VAR_1;
}
