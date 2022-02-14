
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qfq_sched {int * bitmaps; int V; int oldV; } ;
struct qfq_group {scalar_t__ F; unsigned long long slot_shift; scalar_t__ S; int index; } ;
struct qfq_aggregate {int S; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 unsigned int FUNC_2 (struct qfq_sched*,struct qfq_group*) ;
 struct qfq_group* FUNC_3 (struct qfq_sched*,int ) ;
 int FUNC_4 (struct qfq_group*) ;
 scalar_t__ FUNC_5 (int ,unsigned long long) ;
 struct qfq_aggregate* FUNC_6 (struct qfq_group*) ;
 struct qfq_aggregate* FUNC_7 (struct qfq_group*) ;
 int FUNC_8 (struct qfq_sched*,int ,scalar_t__) ;
 int FUNC_9 (struct qfq_sched*) ;

__attribute__((used)) static struct qfq_aggregate *FUNC_10(struct qfq_sched *VAR_1)
{
 struct qfq_group *VAR_2;
 struct qfq_aggregate *VAR_3, *VAR_4;
 u64 VAR_5;

 FUNC_9(VAR_1);
 VAR_1->oldV = VAR_1->V;

 if (!VAR_1->bitmaps[VAR_0])
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_1, VAR_1->bitmaps[VAR_0]);
 VAR_5 = VAR_2->F;

 VAR_3 = FUNC_6(VAR_2);


 FUNC_4(VAR_2);

 VAR_4 = FUNC_7(VAR_2);

 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_2->index, &VAR_1->bitmaps[VAR_0]);
 else {
  u64 VAR_6 = FUNC_5(VAR_4->S,
           VAR_2->slot_shift);
  unsigned int VAR_7;

  if (VAR_2->S == VAR_6)
   return VAR_3;
  VAR_2->S = VAR_6;
  VAR_2->F = VAR_6 + (2ULL << VAR_2->slot_shift);
  FUNC_0(VAR_2->index, &VAR_1->bitmaps[VAR_0]);
  VAR_7 = FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_2->index, &VAR_1->bitmaps[VAR_7]);
 }

 FUNC_8(VAR_1, VAR_2->index, VAR_5);

 return VAR_3;
}
