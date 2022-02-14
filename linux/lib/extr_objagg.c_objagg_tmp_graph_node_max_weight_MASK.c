
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_tmp_node {scalar_t__ crossed_out; } ;
struct objagg_tmp_graph {int nodes_count; struct objagg_tmp_node* nodes; } ;


 unsigned int FUNC_0 (struct objagg_tmp_graph*,int) ;

__attribute__((used)) static int FUNC_1(struct objagg_tmp_graph *VAR_0)
{
 struct objagg_tmp_node *VAR_1;
 unsigned int VAR_2 = 0;
 unsigned int VAR_3;
 int VAR_4 = -1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->nodes_count; VAR_5++) {
  VAR_1 = &VAR_0->nodes[VAR_5];
  if (VAR_1->crossed_out)
   continue;
  VAR_3 = FUNC_0(VAR_0, VAR_5);
  if (VAR_3 >= VAR_2) {
   VAR_2 = VAR_3;
   VAR_4 = VAR_5;
  }
 }
 return VAR_4;
}
