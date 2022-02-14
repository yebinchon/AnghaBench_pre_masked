
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {int clhash; } ;
struct cbq_class {struct cbq_class* sibling; struct cbq_class* children; int common; struct cbq_class* tparent; int qdisc; } ;


 int FUNC_0 (int *,int *) ;
 struct cbq_sched_data* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cbq_class *VAR_0)
{
 struct cbq_sched_data *VAR_1 = FUNC_1(VAR_0->qdisc);
 struct cbq_class *VAR_2 = VAR_0->tparent;

 VAR_0->sibling = VAR_0;
 FUNC_0(&VAR_1->clhash, &VAR_0->common);

 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->children == ((void*)0)) {
  VAR_2->children = VAR_0;
 } else {
  VAR_0->sibling = VAR_2->children->sibling;
  VAR_2->children->sibling = VAR_0;
 }
}
