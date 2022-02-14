
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {long len_lazy; } ;


 long FUNC_0 (struct rcu_segcblist*) ;

__attribute__((used)) static inline long FUNC_1(struct rcu_segcblist *VAR_0)
{
 return FUNC_0(VAR_0) - VAR_0->len_lazy;
}
