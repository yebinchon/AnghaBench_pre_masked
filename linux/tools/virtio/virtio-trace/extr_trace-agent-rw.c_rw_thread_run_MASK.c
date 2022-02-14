
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_thread_info {int cpu_num; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *,int ,struct rw_thread_info*) ;
 int VAR_1 ;

pthread_t FUNC_3(struct rw_thread_info *VAR_2)
{
 int VAR_3;
 pthread_t VAR_4;

 VAR_3 = FUNC_2(&VAR_4, ((void*)0), VAR_1, VAR_2);
 if (VAR_3 != 0) {
  FUNC_1("Could not create a rw thread(%d)\n", VAR_2->cpu_num);
  FUNC_0(VAR_0);
 }

 return VAR_4;
}
