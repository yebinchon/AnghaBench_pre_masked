
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_sched_data {int clhash; } ;
struct cbq_class {struct cbq_class* sibling; TYPE_1__* tparent; int common; int qdisc; } ;
struct TYPE_2__ {struct cbq_class* children; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 struct cbq_sched_data* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cbq_class *VAR_0)
{
 struct cbq_class *VAR_1, **VAR_2;
 struct cbq_sched_data *VAR_3 = FUNC_2(VAR_0->qdisc);

 FUNC_1(&VAR_3->clhash, &VAR_0->common);

 if (VAR_0->tparent) {
  VAR_2 = &VAR_0->sibling;
  VAR_1 = *VAR_2;
  do {
   if (VAR_1 == VAR_0) {
    *VAR_2 = VAR_1->sibling;
    break;
   }
   VAR_2 = &VAR_1->sibling;
  } while ((VAR_1 = *VAR_2) != VAR_0->sibling);

  if (VAR_0->tparent->children == VAR_0) {
   VAR_0->tparent->children = VAR_0->sibling;
   if (VAR_0->sibling == VAR_0)
    VAR_0->tparent->children = ((void*)0);
  }
 } else {
  FUNC_0(VAR_0->sibling != VAR_0);
 }
}
