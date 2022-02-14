
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_req {struct cache_deferred_req* (* defer ) (struct cache_req*) ;scalar_t__ thread_wait; } ;
struct cache_head {int flags; } ;
struct cache_deferred_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cache_head*) ;
 int FUNC_2 (struct cache_req*,struct cache_head*) ;
 int FUNC_3 (struct cache_deferred_req*,struct cache_head*,int) ;
 struct cache_deferred_req* FUNC_4 (struct cache_req*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct cache_req *VAR_1, struct cache_head *VAR_2)
{
 struct cache_deferred_req *VAR_3;

 if (VAR_1->thread_wait) {
  FUNC_2(VAR_1, VAR_2);
  if (!FUNC_5(VAR_0, &VAR_2->flags))
   return 0;
 }
 VAR_3 = VAR_1->defer(VAR_1);
 if (VAR_3 == ((void*)0))
  return 0;
 FUNC_3(VAR_3, VAR_2, 1);
 if (!FUNC_5(VAR_0, &VAR_2->flags))



  FUNC_1(VAR_2);

 FUNC_0();
 return 1;
}
