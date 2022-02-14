
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mask ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int,int *) ;

int FUNC_4(int VAR_0)
{
 cpu_set_t VAR_1;

 FUNC_2("Binding to cpu %d\n", VAR_0);

 FUNC_1(&VAR_1);
 FUNC_0(VAR_0, &VAR_1);

 return FUNC_3(0, sizeof(VAR_1), &VAR_1);
}
