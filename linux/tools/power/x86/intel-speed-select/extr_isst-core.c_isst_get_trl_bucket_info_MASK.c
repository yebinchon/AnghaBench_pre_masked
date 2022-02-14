
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int,int ,unsigned long long*) ;

int FUNC_2(int VAR_0, unsigned long long *VAR_1)
{
 int VAR_2;

 FUNC_0("cpu:%d bucket info via MSR\n", VAR_0);

 *VAR_1 = 0;

 VAR_2 = FUNC_1(VAR_0, 0x1ae, 0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0("cpu:%d bucket info via MSR successful 0x%llx\n", VAR_0,
       *VAR_1);

 return 0;
}
