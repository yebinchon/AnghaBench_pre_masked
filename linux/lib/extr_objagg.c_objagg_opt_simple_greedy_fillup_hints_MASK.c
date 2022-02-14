
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objagg_tmp_node {int crossed_out; int objagg_obj; } ;
struct objagg_tmp_graph {int nodes_count; struct objagg_tmp_node* nodes; } ;
struct objagg_hints_node {int dummy; } ;
struct objagg_hints {int dummy; } ;
struct objagg {TYPE_1__* ops; } ;
struct TYPE_2__ {int obj_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct objagg_hints_node*) ;
 int FUNC_1 (struct objagg_hints_node*) ;
 struct objagg_hints_node* FUNC_2 (struct objagg_hints*,int ,int ,struct objagg_hints_node*) ;
 struct objagg_tmp_graph* FUNC_3 (struct objagg*) ;
 int FUNC_4 (struct objagg_tmp_graph*) ;
 int FUNC_5 (struct objagg_tmp_graph*,int,int) ;
 int FUNC_6 (struct objagg_tmp_graph*) ;

__attribute__((used)) static int
FUNC_7(struct objagg_hints *VAR_1,
          struct objagg *VAR_2)
{
 struct objagg_hints_node *VAR_3, *VAR_4;
 struct objagg_tmp_graph *VAR_5;
 struct objagg_tmp_node *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5)
  return -VAR_0;




 while ((VAR_7 = FUNC_6(VAR_5)) != -1) {
  VAR_6 = &VAR_5->nodes[VAR_7];
  VAR_6->crossed_out = 1;
  VAR_3 = FUNC_2(VAR_1,
       VAR_6->objagg_obj,
       VAR_2->ops->obj_size,
       ((void*)0));
  if (FUNC_0(VAR_3)) {
   VAR_9 = FUNC_1(VAR_3);
   goto out;
  }
  VAR_4 = VAR_3;
  for (VAR_8 = 0; VAR_8 < VAR_5->nodes_count; VAR_8++) {
   if (!FUNC_5(VAR_5, VAR_7, VAR_8))
    continue;
   VAR_6 = &VAR_5->nodes[VAR_8];
   if (VAR_6->crossed_out)
    continue;
   VAR_6->crossed_out = 1;
   VAR_3 = FUNC_2(VAR_1,
        VAR_6->objagg_obj,
        VAR_2->ops->obj_size,
        VAR_4);
   if (FUNC_0(VAR_3)) {
    VAR_9 = FUNC_1(VAR_3);
    goto out;
   }
  }
 }

 VAR_9 = 0;
out:
 FUNC_4(VAR_5);
 return VAR_9;
}
