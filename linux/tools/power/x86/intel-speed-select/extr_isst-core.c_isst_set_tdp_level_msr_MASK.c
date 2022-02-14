
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int,int,unsigned long long*) ;

int FUNC_3(int VAR_0, int VAR_1)
{
 unsigned long long VAR_2 = VAR_1;
 int VAR_3;

 FUNC_0("cpu: tdp_level via MSR %d\n", VAR_0, VAR_1);

 if (FUNC_1(VAR_0)) {
  FUNC_0("cpu: tdp_locked %d\n", VAR_0);
  return -1;
 }

 if (VAR_1 > 2)
  return -1;

 VAR_3 = FUNC_2(VAR_0, 0x64b, 1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0("cpu: tdp_level via MSR successful %d\n", VAR_0, VAR_1);

 return 0;
}
