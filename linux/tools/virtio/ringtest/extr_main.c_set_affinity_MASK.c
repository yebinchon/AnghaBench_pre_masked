
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpu_set_t ;


 int FUNC_0 (long,int *) ;
 long VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int *) ;
 long FUNC_5 (char const*,char**,int ) ;

void FUNC_6(const char *VAR_1)
{
 cpu_set_t VAR_2;
 int VAR_3;
 pthread_t VAR_4;
 long int VAR_5;
 char *VAR_6;

 if (!VAR_1)
  return;

 VAR_5 = FUNC_5(VAR_1, &VAR_6, 0);
 FUNC_2(!*VAR_6);

 FUNC_2(VAR_5 >= 0 && VAR_5 < VAR_0);

 VAR_4 = FUNC_3();
 FUNC_1(&VAR_2);
 FUNC_0(VAR_5, &VAR_2);

 VAR_3 = FUNC_4(VAR_4, sizeof(cpu_set_t), &VAR_2);
 FUNC_2(!VAR_3);
}
