
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,unsigned long long*) ;
 int FUNC_1 (char*,int,unsigned int,int) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ VAR_1 ;

int FUNC_3(int VAR_2)
{
 unsigned long long VAR_3;

 FUNC_0(VAR_2, VAR_0, &VAR_3);
 FUNC_2(VAR_2, VAR_0, 1);

 if (VAR_1)
  FUNC_1("cpu%d: MSR_PM_ENABLE old: %d new: %d\n", VAR_2, (unsigned int) VAR_3, 1);

 return 0;
}
