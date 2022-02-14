
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,unsigned long long*) ;

int FUNC_2(int VAR_0)
{
 unsigned long long VAR_1 = 0;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0x64b, 0, &VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = !!(VAR_1 & FUNC_0(31));

 return VAR_2;
}
