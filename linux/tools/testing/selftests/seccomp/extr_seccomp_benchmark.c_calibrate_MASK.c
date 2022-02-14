
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long long FUNC_1 (int ,unsigned long long) ;

unsigned long long FUNC_2(void)
{
 unsigned long long VAR_1;

 FUNC_0("Calibrating reasonable sample size...\n");

 for (VAR_1 = 5; ; VAR_1++) {
  unsigned long long VAR_2 = 1 << VAR_1;


  if (FUNC_1(VAR_0, VAR_2) / 1000000000ULL > 5)
   return VAR_2;
 }
}
