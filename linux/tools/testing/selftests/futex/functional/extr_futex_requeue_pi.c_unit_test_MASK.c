
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
struct timespec {long tv_nsec; long tv_sec; } ;
struct thread_arg {int id; long lock; int ret; struct timespec* timeout; } ;
typedef int pthread_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread_arg VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ,struct timespec*) ;
 scalar_t__ FUNC_3 (int *,void* (*) (void*),void*,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,void**) ;
 void* FUNC_7 (void*) ;
 void* FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 int VAR_7 ;

int FUNC_10(int VAR_8, long VAR_9, int VAR_10, long VAR_11)
{
 void *(*VAR_12)(void *) = FUNC_7;
 struct thread_arg VAR_13 = VAR_4;
 struct thread_arg VAR_14 = VAR_4;
 pthread_t VAR_15[VAR_5], VAR_16, VAR_17;
 struct timespec VAR_18, *VAR_19 = ((void*)0);
 struct thread_arg VAR_20[VAR_5];
 int *VAR_21;
 int VAR_22, VAR_23 = VAR_2;

 if (VAR_11) {
  time_t VAR_24;

  FUNC_5("timeout_ns = %ld\n", VAR_11);
  VAR_23 = FUNC_2(VAR_0, &VAR_18);
  VAR_24 = (VAR_18.tv_nsec + VAR_11) / 1000000000;
  VAR_18.tv_nsec = ((int64_t)VAR_18.tv_nsec + VAR_11) % 1000000000;
  VAR_18.tv_sec += VAR_24;
  FUNC_5("ts.tv_sec  = %ld\n", VAR_18.tv_sec);
  FUNC_5("ts.tv_nsec = %ld\n", VAR_18.tv_nsec);
  VAR_19 = &VAR_18;
 }

 if (VAR_8)
  VAR_12 = FUNC_1;

 if (VAR_10) {
  if (FUNC_3(&VAR_17, FUNC_8,
         (void *)&VAR_13, VAR_3, 1)) {
   FUNC_4("Creating third party blocker thread failed\n",
         VAR_6);
   VAR_23 = VAR_1;
   goto out;
  }
 }

 FUNC_0(&VAR_7, 0);
 for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
  VAR_20[VAR_22].id = VAR_22;
  VAR_20[VAR_22].timeout = VAR_19;
  FUNC_5("Starting thread %d\n", VAR_22);
  if (FUNC_3(&VAR_15[VAR_22], FUNC_9, (void *)&VAR_20[VAR_22],
         VAR_3, 1)) {
   FUNC_4("Creating waiting thread failed\n", VAR_6);
   VAR_23 = VAR_1;
   goto out;
  }
 }
 VAR_14.lock = VAR_9;
 if (FUNC_3(&VAR_16, VAR_12, (void *)&VAR_14,
        VAR_3, 1)) {
  FUNC_4("Creating waker thread failed\n", VAR_6);
  VAR_23 = VAR_1;
  goto out;
 }



 VAR_21 = &VAR_20[0].ret;
 for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++)
  FUNC_6(VAR_15[VAR_22],
        *VAR_21 ? ((void*)0) : (void **)&VAR_21);

 if (VAR_10)
  FUNC_6(VAR_17, ((void*)0));
 FUNC_6(VAR_16, ((void*)0));

out:
 if (!VAR_23) {
  if (*VAR_21)
   VAR_23 = *VAR_21;
  else if (VAR_14.ret < 0)
   VAR_23 = VAR_14.ret;
  else if (VAR_13.ret)
   VAR_23 = VAR_13.ret;
 }

 return VAR_23;
}
