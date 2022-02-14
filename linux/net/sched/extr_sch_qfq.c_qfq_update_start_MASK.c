
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qfq_sched {scalar_t__ V; int * bitmaps; } ;
struct qfq_group {scalar_t__ F; } ;
struct qfq_aggregate {scalar_t__ F; scalar_t__ S; TYPE_1__* grp; } ;
struct TYPE_2__ {int slot_shift; int index; } ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 struct qfq_group* FUNC_1 (struct qfq_sched*,unsigned long) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct qfq_sched *VAR_1, struct qfq_aggregate *VAR_2)
{
 unsigned long VAR_3;
 u64 VAR_4, VAR_5;
 int VAR_6 = VAR_2->grp->slot_shift;

 VAR_5 = FUNC_3(VAR_2->F, VAR_6);
 VAR_4 = FUNC_3(VAR_1->V, VAR_6) + (1ULL << VAR_6);

 if (!FUNC_2(VAR_2->F, VAR_1->V) || FUNC_2(VAR_5, VAR_4)) {

  VAR_3 = FUNC_0(VAR_1->bitmaps[VAR_0], VAR_2->grp->index);
  if (VAR_3) {
   struct qfq_group *VAR_7 = FUNC_1(VAR_1, VAR_3);
   if (FUNC_2(VAR_5, VAR_7->F)) {
    if (FUNC_2(VAR_4, VAR_7->F))
     VAR_2->S = VAR_7->F;
    else
     VAR_2->S = VAR_4;
    return;
   }
  }
  VAR_2->S = VAR_1->V;
 } else
  VAR_2->S = VAR_2->F;
}
