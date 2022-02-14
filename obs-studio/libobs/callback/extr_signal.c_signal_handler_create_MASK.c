
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_handler {int refs; int mutex; int global_callbacks_mutex; int * first; } ;
typedef struct signal_handler signal_handler_t ;
typedef int pthread_mutexattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct signal_handler*) ;
 int FUNC_1 (int ,char*) ;
 struct signal_handler* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

signal_handler_t *FUNC_7(void)
{
 struct signal_handler *VAR_2 = FUNC_2(sizeof(struct signal_handler));
 VAR_2->first = ((void*)0);
 VAR_2->refs = 1;

 pthread_mutexattr_t VAR_3;
 if (FUNC_5(&VAR_3) != 0)
  return ((void*)0);
 if (FUNC_6(&VAR_3, VAR_1) != 0)
  return ((void*)0);

 if (FUNC_4(&VAR_2->mutex, ((void*)0)) != 0) {
  FUNC_1(VAR_0, "Couldn't create signal handler mutex!");
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 if (FUNC_4(&VAR_2->global_callbacks_mutex, &VAR_3) != 0) {
  FUNC_1(VAR_0, "Couldn't create signal handler global "
    "callbacks mutex!");
  FUNC_3(&VAR_2->mutex);
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
