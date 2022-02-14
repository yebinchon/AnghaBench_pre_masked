
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {int * tails; } ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct rcu_segcblist *VAR_0, int VAR_1)
{
 return !FUNC_0(*FUNC_0(VAR_0->tails[VAR_1]));
}
