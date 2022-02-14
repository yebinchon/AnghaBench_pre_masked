
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct qfq_sched {int dummy; } ;
struct qfq_group {unsigned int slot_shift; unsigned int S; unsigned int front; int full_slots; int * slots; } ;
struct qfq_aggregate {int next; int S; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct qfq_sched *VAR_1, struct qfq_group *VAR_2,
       struct qfq_aggregate *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 u64 VAR_6;

 VAR_6 = FUNC_3(VAR_3->S, VAR_2->slot_shift);
 VAR_5 = (VAR_6 - VAR_2->S) >> VAR_2->slot_shift;

 VAR_4 = (VAR_2->front + VAR_5) % VAR_0;

 FUNC_1(&VAR_3->next);
 if (FUNC_2(&VAR_2->slots[VAR_4]))
  FUNC_0(VAR_5, &VAR_2->full_slots);
}
