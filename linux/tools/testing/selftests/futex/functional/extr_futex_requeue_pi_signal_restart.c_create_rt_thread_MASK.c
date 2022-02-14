
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int schedp ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sched_param*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct sched_param*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,void* (*) (void*),void*) ;

int FUNC_7(pthread_t *VAR_1, void*(*VAR_2)(void *), void *VAR_3,
       int VAR_4, int VAR_5)
{
 struct sched_param VAR_6;
 pthread_attr_t VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7);
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_8 = FUNC_3(&VAR_7, VAR_0);
 if (VAR_8) {
  FUNC_0("pthread_attr_setinheritsched\n", VAR_8);
  return -1;
 }

 VAR_8 = FUNC_5(&VAR_7, VAR_4);
 if (VAR_8) {
  FUNC_0("pthread_attr_setschedpolicy\n", VAR_8);
  return -1;
 }

 VAR_6.sched_priority = VAR_5;
 VAR_8 = FUNC_4(&VAR_7, &VAR_6);
 if (VAR_8) {
  FUNC_0("pthread_attr_setschedparam\n", VAR_8);
  return -1;
 }

 VAR_8 = FUNC_6(VAR_1, &VAR_7, VAR_2, VAR_3);
 if (VAR_8) {
  FUNC_0("pthread_create\n", VAR_8);
  return -1;
 }
 return 0;
}
