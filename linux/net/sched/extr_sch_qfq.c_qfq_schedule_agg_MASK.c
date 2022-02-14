
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct qfq_sched {void* V; int * bitmaps; int * in_serv_agg; } ;
struct qfq_group {unsigned long long slot_shift; void* S; int index; void* F; scalar_t__ full_slots; } ;
struct qfq_aggregate {scalar_t__ F; void* S; struct qfq_group* grp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,int ,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_3 (struct qfq_sched*,struct qfq_group*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 void* FUNC_5 (void*,unsigned long long) ;
 int FUNC_6 (struct qfq_group*,struct qfq_aggregate*,void*) ;
 int FUNC_7 (struct qfq_group*,void*) ;

__attribute__((used)) static void FUNC_8(struct qfq_sched *VAR_3, struct qfq_aggregate *VAR_4)
{
 struct qfq_group *VAR_5 = VAR_4->grp;
 u64 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4->S, VAR_5->slot_shift);
 if (VAR_5->full_slots) {
  if (!FUNC_4(VAR_5->S, VAR_4->S))
   goto skip_update;


  FUNC_7(VAR_5, VAR_6);

  FUNC_0(VAR_5->index, &VAR_3->bitmaps[VAR_2]);
  FUNC_0(VAR_5->index, &VAR_3->bitmaps[VAR_1]);
 } else if (!VAR_3->bitmaps[VAR_0] && FUNC_4(VAR_6, VAR_3->V) &&
     VAR_3->in_serv_agg == ((void*)0))
  VAR_3->V = VAR_6;

 VAR_5->S = VAR_6;
 VAR_5->F = VAR_6 + (2ULL << VAR_5->slot_shift);
 VAR_7 = FUNC_3(VAR_3, VAR_5);
 FUNC_1(VAR_5->index, &VAR_3->bitmaps[VAR_7]);

 FUNC_2("qfq enqueue: new state %d %#lx S %lld F %lld V %lld\n",
   VAR_7, VAR_3->bitmaps[VAR_7],
   (unsigned long long) VAR_4->S,
   (unsigned long long) VAR_4->F,
   (unsigned long long) VAR_3->V);

skip_update:
 FUNC_6(VAR_5, VAR_4, VAR_6);
}
