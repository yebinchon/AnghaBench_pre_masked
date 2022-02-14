
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_sched_data {scalar_t__ now; scalar_t__ toplevel; } ;
struct TYPE_2__ {int overlimits; } ;
struct cbq_class {scalar_t__ undertime; scalar_t__ level; scalar_t__ delayed; TYPE_1__ qstats; struct cbq_class* borrow; int * tparent; int qdisc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (int ) ;

__attribute__((used)) static inline struct cbq_class *
FUNC_2(struct cbq_class *VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_1(VAR_1->qdisc);
 struct cbq_class *VAR_3 = VAR_1;

 if (VAR_1->tparent == ((void*)0))
  return VAR_1;

 if (VAR_1->undertime == VAR_0 || VAR_2->now >= VAR_1->undertime) {
  VAR_1->delayed = 0;
  return VAR_1;
 }

 do {
  VAR_1 = VAR_1->borrow;
  if (!VAR_1) {
   VAR_3->qstats.overlimits++;
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  if (VAR_1->level > VAR_2->toplevel)
   return ((void*)0);
 } while (VAR_1->undertime != VAR_0 && VAR_2->now < VAR_1->undertime);

 VAR_1->delayed = 0;
 return VAR_1;
}
