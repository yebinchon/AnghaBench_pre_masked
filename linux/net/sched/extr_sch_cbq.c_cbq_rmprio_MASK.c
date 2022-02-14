
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {int * quanta; int * nclasses; } ;
struct cbq_class {size_t priority; scalar_t__ weight; } ;


 int FUNC_0 (struct cbq_sched_data*,size_t) ;

__attribute__((used)) static void FUNC_1(struct cbq_sched_data *VAR_0, struct cbq_class *VAR_1)
{
 VAR_0->nclasses[VAR_1->priority]--;
 VAR_0->quanta[VAR_1->priority] -= VAR_1->weight;
 FUNC_0(VAR_0, VAR_1->priority);
}
