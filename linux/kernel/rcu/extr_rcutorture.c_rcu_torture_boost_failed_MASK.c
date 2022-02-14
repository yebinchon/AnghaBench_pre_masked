
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_3, unsigned long VAR_4)
{
 if (VAR_4 - VAR_3 > VAR_2 * VAR_0 - VAR_0 / 2) {
  FUNC_0("rcu_torture_boost boosting failed");
  VAR_1++;

  return 1;
 }

 return 0;
}
