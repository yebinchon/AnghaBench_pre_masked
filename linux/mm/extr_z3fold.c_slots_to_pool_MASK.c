
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int dummy; } ;
struct z3fold_buddy_slots {int pool; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct z3fold_pool *FUNC_0(struct z3fold_buddy_slots *VAR_1)
{
 return (struct z3fold_pool *)(VAR_1->pool & ~VAR_0);
}
