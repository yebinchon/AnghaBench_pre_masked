
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int rb_node; } ;
struct dl_rq {int root; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sched_dl_entity*,struct dl_rq*) ;
 struct dl_rq* FUNC_3 (struct sched_dl_entity*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct sched_dl_entity *VAR_0)
{
 struct dl_rq *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_1(&VAR_0->rb_node))
  return;

 FUNC_4(&VAR_0->rb_node, &VAR_1->root);
 FUNC_0(&VAR_0->rb_node);

 FUNC_2(VAR_0, VAR_1);
}
