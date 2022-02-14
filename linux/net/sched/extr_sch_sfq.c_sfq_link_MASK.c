
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t next; size_t prev; } ;
struct sfq_slot {int qlen; TYPE_1__ dep; } ;
struct sfq_sched_data {TYPE_2__* dep; struct sfq_slot* slots; } ;
typedef size_t sfq_index ;
struct TYPE_6__ {size_t prev; } ;
struct TYPE_5__ {size_t next; } ;


 size_t VAR_0 ;
 TYPE_3__* FUNC_0 (struct sfq_sched_data*,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct sfq_sched_data *VAR_1, sfq_index VAR_2)
{
 sfq_index VAR_3, VAR_4;
 struct sfq_slot *VAR_5 = &VAR_1->slots[VAR_2];
 int VAR_6 = VAR_5->qlen;

 VAR_3 = VAR_6 + VAR_0;
 VAR_4 = VAR_1->dep[VAR_6].next;

 VAR_5->dep.next = VAR_4;
 VAR_5->dep.prev = VAR_3;

 VAR_1->dep[VAR_6].next = VAR_2;
 FUNC_0(VAR_1, VAR_4)->prev = VAR_2;
}
