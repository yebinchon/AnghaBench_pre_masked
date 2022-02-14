
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_buddy_slots {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct z3fold_buddy_slots *FUNC_0(unsigned long VAR_1)
{
 return (struct z3fold_buddy_slots *)(VAR_1 & ~(VAR_0 - 1));
}
