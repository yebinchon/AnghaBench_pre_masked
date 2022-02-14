
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {int (* func ) (struct rcu_head*) ;} ;
typedef int (* rcu_callback_t ) (struct rcu_head*) ;


 int FUNC_0 (int (*) (struct rcu_head*),int (*) (struct rcu_head*)) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,struct rcu_head*) ;
 int FUNC_6 (char const*,struct rcu_head*,unsigned long) ;

__attribute__((used)) static inline bool FUNC_7(const char *VAR_1, struct rcu_head *VAR_2)
{
 rcu_callback_t VAR_3;
 unsigned long VAR_4 = (unsigned long)VAR_2->func;

 FUNC_3(&VAR_0);
 if (FUNC_1(VAR_4)) {
  FUNC_6(VAR_1, VAR_2, VAR_4);
  FUNC_2((void *)VAR_2 - VAR_4);
  FUNC_4(&VAR_0);
  return 1;
 } else {
  FUNC_5(VAR_1, VAR_2);
  VAR_3 = VAR_2->func;
  FUNC_0(VAR_2->func, (rcu_callback_t)0L);
  VAR_3(VAR_2);
  FUNC_4(&VAR_0);
  return 0;
 }
}
