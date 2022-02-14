
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timerqueue_node {int node; } ;
struct TYPE_2__ {int rb_root; } ;
struct timerqueue_head {TYPE_1__ rb_root; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

bool FUNC_5(struct timerqueue_head *VAR_0, struct timerqueue_node *VAR_1)
{
 FUNC_3(FUNC_1(&VAR_1->node));

 FUNC_4(&VAR_1->node, &VAR_0->rb_root);
 FUNC_0(&VAR_1->node);

 return !FUNC_2(&VAR_0->rb_root.rb_root);
}
