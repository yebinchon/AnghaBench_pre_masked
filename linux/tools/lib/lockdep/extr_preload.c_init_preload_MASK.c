
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) __attribute__((constructor)) static void FUNC_1(void)
{
 if (VAR_1 == VAR_2)
  return;


 VAR_1 = VAR_15;

 VAR_4 = FUNC_0(VAR_0, "pthread_mutex_init");
 VAR_5 = FUNC_0(VAR_0, "pthread_mutex_lock");
 VAR_6 = FUNC_0(VAR_0, "pthread_mutex_trylock");
 VAR_7 = FUNC_0(VAR_0, "pthread_mutex_unlock");
 VAR_3 = FUNC_0(VAR_0, "pthread_mutex_destroy");

 VAR_9 = FUNC_0(VAR_0, "pthread_rwlock_init");
 VAR_8 = FUNC_0(VAR_0, "pthread_rwlock_destroy");
 VAR_10 = FUNC_0(VAR_0, "pthread_rwlock_rdlock");
 VAR_11 = FUNC_0(VAR_0, "pthread_rwlock_tryrdlock");
 VAR_14 = FUNC_0(VAR_0, "pthread_rwlock_wrlock");
 VAR_12 = FUNC_0(VAR_0, "pthread_rwlock_trywrlock");
 VAR_13 = FUNC_0(VAR_0, "pthread_rwlock_unlock");


 VAR_1 = VAR_2;
}
