
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_arg {scalar_t__ ret; scalar_t__ id; scalar_t__ timeout; } ;
typedef int futex_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *,scalar_t__,int ) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (void*) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;

void *FUNC_9(void *VAR_8)
{
 struct thread_arg *VAR_9 = (struct thread_arg *)VAR_8;
 futex_t VAR_10;

 FUNC_5("Waiter %ld: running\n", VAR_9->id);



 FUNC_8(1000 * (long)VAR_9->id);

 VAR_10 = VAR_4;
 FUNC_0(&VAR_6);
 FUNC_5("Calling futex_wait_requeue_pi: %p (%u) -> %p\n",
      &VAR_4, VAR_4, &VAR_5);
 VAR_9->ret = FUNC_4(&VAR_4, VAR_10, &VAR_5, VAR_9->timeout,
       VAR_1);

 FUNC_5("waiter %ld woke with %d %s\n", VAR_9->id, VAR_9->ret,
      VAR_9->ret < 0 ? FUNC_7(VAR_3) : "");
 FUNC_0(&VAR_7);
 if (VAR_9->ret < 0) {
  if (VAR_9->timeout && VAR_3 == VAR_0)
   VAR_9->ret = 0;
  else {
   VAR_9->ret = VAR_2;
   FUNC_1("futex_wait_requeue_pi\n", VAR_3);
  }
  FUNC_2(&VAR_5, ((void*)0), 0, VAR_1);
 }
 FUNC_3(&VAR_5, VAR_1);

 FUNC_5("Waiter %ld: exiting with %d\n", VAR_9->id, VAR_9->ret);
 FUNC_6((void *)&VAR_9->ret);
}
