
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int,char*,int,unsigned long long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long long*,int,scalar_t__) ;

int FUNC_3(int VAR_0, off_t VAR_1, unsigned long long *VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_0), VAR_2, sizeof(*VAR_2), VAR_1);

 if (VAR_3 != sizeof *VAR_2)
  FUNC_0(-1, "cpu%d: msr offset 0x%llx read failed", VAR_0, (unsigned long long)VAR_1);

 return 0;
}
