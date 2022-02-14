
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objagg_tmp_node {TYPE_2__* objagg_obj; scalar_t__ crossed_out; } ;
struct objagg_tmp_graph {int nodes_count; struct objagg_tmp_node* nodes; } ;
struct TYPE_3__ {unsigned int user_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct objagg_tmp_graph*,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct objagg_tmp_graph *VAR_0,
       unsigned int VAR_1)
{
 struct objagg_tmp_node *VAR_2 = &VAR_0->nodes[VAR_1];
 unsigned int VAR_3 = VAR_2->objagg_obj->stats.user_count;
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_0->nodes_count; VAR_4++) {
  if (!FUNC_0(VAR_0, VAR_1, VAR_4))
   continue;
  VAR_2 = &VAR_0->nodes[VAR_4];
  if (VAR_2->crossed_out)
   continue;
  VAR_3 += VAR_2->objagg_obj->stats.user_count;
 }
 return VAR_3;
}
