
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;
typedef int cs ;
typedef int cpu_set_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int *) ;

int FUNC_3(void)
{
 int VAR_0 = 0;
 pthread_attr_t VAR_1;
 cpu_set_t VAR_2;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2);

 VAR_0 = FUNC_2(&VAR_1, sizeof(VAR_2), &VAR_2);

 return VAR_0;
}
