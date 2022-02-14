
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;
typedef int __u32 ;


 int FUNC_0 (int,char*,char*,int,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, void *VAR_2, __u32 VAR_3)
{
 int VAR_4 = *(int *)VAR_2, VAR_5 = 0;
 cpu_set_t *VAR_6 = VAR_0;

 if (VAR_4 != VAR_1)
  FUNC_0(VAR_4 != VAR_1, "check_cpu_data",
        "cpu_data %d != cpu %d\n", VAR_4, VAR_1);

 FUNC_1(VAR_1, VAR_6);
}
