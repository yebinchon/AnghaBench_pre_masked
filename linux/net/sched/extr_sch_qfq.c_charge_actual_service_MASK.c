
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct qfq_aggregate {int inv_w; scalar_t__ S; scalar_t__ F; scalar_t__ budget; scalar_t__ initial_budget; int budgetmax; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct qfq_aggregate *VAR_0)
{





 u32 VAR_1 = FUNC_0(VAR_0->budgetmax,
       VAR_0->initial_budget - VAR_0->budget);

 VAR_0->F = VAR_0->S + (u64)VAR_1 * VAR_0->inv_w;
}
