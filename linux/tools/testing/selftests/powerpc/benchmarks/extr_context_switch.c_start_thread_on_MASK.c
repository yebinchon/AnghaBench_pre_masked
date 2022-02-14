
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;


 int FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int *,void* (*) (void*),void*) ;

__attribute__((used)) static void FUNC_7(void *(*VAR_1)(void *), void *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 pthread_t VAR_5;
 cpu_set_t VAR_6;
 pthread_attr_t VAR_7;

 FUNC_1(&VAR_6);
 FUNC_0(VAR_3, &VAR_6);

 VAR_4 = FUNC_4(&VAR_7);
 if (VAR_4) {
  VAR_0 = VAR_4;
  FUNC_3("pthread_attr_init");
  FUNC_2(1);
 }

 VAR_4 = FUNC_5(&VAR_7, sizeof(cpu_set_t), &VAR_6);
 if (VAR_4) {
  VAR_0 = VAR_4;
  FUNC_3("pthread_attr_setaffinity_np");
  FUNC_2(1);
 }

 VAR_4 = FUNC_6(&VAR_5, &VAR_7, VAR_1, VAR_2);
 if (VAR_4) {
  VAR_0 = VAR_4;
  FUNC_3("pthread_create");
  FUNC_2(1);
 }
}
