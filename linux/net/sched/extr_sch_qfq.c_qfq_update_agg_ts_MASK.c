
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qfq_sched {int dummy; } ;
struct qfq_aggregate {int inv_w; scalar_t__ budgetmax; scalar_t__ S; scalar_t__ F; } ;
typedef enum update_reason { ____Placeholder_update_reason } update_reason ;


 int FUNC_0 (struct qfq_sched*,struct qfq_aggregate*) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct qfq_sched *VAR_1,
      struct qfq_aggregate *VAR_2, enum update_reason VAR_3)
{
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  VAR_2->S = VAR_2->F;

 VAR_2->F = VAR_2->S + (u64)VAR_2->budgetmax * VAR_2->inv_w;
}
