
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_8__ {scalar_t__ allocated; scalar_t__ resident; int mapped; int n_thp; int auto_thp_switched; TYPE_2__* blocks; int mtx; int extent_sn_next; int pind_last; } ;
typedef TYPE_1__ base_t ;
struct TYPE_9__ {int extent; scalar_t__ size; struct TYPE_9__* next; } ;
typedef TYPE_2__ base_block_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *,TYPE_1__*,int *,int ,int *,int *,size_t,size_t) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static extent_t *
FUNC_10(tsdn_t *VAR_4, base_t *VAR_5, size_t VAR_6, size_t VAR_7) {
 FUNC_6(VAR_4, &VAR_5->mtx);

 extent_hooks_t *VAR_8 = FUNC_4(VAR_5);




 FUNC_8(VAR_4, &VAR_5->mtx);
 base_block_t *VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8,
     FUNC_5(VAR_5), &VAR_5->pind_last, &VAR_5->extent_sn_next, VAR_6,
     VAR_7);
 FUNC_7(VAR_4, &VAR_5->mtx);
 if (VAR_9 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_9->next = VAR_5->blocks;
 VAR_5->blocks = VAR_9;
 if (VAR_1) {
  VAR_5->allocated += sizeof(base_block_t);
  VAR_5->resident += FUNC_1(sizeof(base_block_t));
  VAR_5->mapped += VAR_9->size;
  if (FUNC_9() &&
      !(VAR_3 == VAR_2
        && !VAR_5->auto_thp_switched)) {
   FUNC_2(VAR_5->n_thp > 0);
   VAR_5->n_thp += FUNC_0(sizeof(base_block_t)) >>
       VAR_0;
  }
  FUNC_2(VAR_5->allocated <= VAR_5->resident);
  FUNC_2(VAR_5->resident <= VAR_5->mapped);
  FUNC_2(VAR_5->n_thp << VAR_0 <= VAR_5->mapped);
 }
 return &VAR_9->extent;
}
