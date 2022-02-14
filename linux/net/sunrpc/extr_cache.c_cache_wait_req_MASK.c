
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_deferred_req {int hash; int revisit; } ;
struct thread_deferred_req {int completion; struct cache_deferred_req handle; } ;
struct cache_req {int thread_wait; } ;
struct cache_head {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cache_deferred_req*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cache_deferred_req*,struct cache_head*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct cache_req *VAR_3, struct cache_head *VAR_4)
{
 struct thread_deferred_req VAR_5;
 struct cache_deferred_req *VAR_6 = &VAR_5.handle;

 VAR_5.completion = FUNC_0(VAR_5.completion);
 VAR_6->revisit = VAR_2;

 FUNC_3(VAR_6, VAR_4, 0);

 if (!FUNC_6(VAR_0, &VAR_4->flags) ||
     FUNC_8(
      &VAR_5.completion, VAR_3->thread_wait) <= 0) {



  FUNC_4(&VAR_1);
  if (!FUNC_2(&VAR_5.handle.hash)) {
   FUNC_1(&VAR_5.handle);
   FUNC_5(&VAR_1);
  } else {





   FUNC_5(&VAR_1);
   FUNC_7(&VAR_5.completion);
  }
 }
}
