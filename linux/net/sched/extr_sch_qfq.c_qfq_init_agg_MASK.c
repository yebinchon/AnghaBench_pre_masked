
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct qfq_sched {int nonfull_aggs; } ;
struct qfq_aggregate {void* class_weight; void* lmax; int nonfull_next; int active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct qfq_sched *VAR_0, struct qfq_aggregate *VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 FUNC_0(&VAR_1->active);
 FUNC_1(&VAR_1->nonfull_next, &VAR_0->nonfull_aggs);

 VAR_1->lmax = VAR_2;
 VAR_1->class_weight = VAR_3;
}
