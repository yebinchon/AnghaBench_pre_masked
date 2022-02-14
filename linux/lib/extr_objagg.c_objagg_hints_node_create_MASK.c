
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int user_count; } ;
struct objagg_obj {int obj; TYPE_1__ stats; } ;
struct TYPE_5__ {unsigned int user_count; unsigned int delta_user_count; } ;
struct TYPE_6__ {int is_root; struct objagg_obj* objagg_obj; TYPE_2__ stats; } ;
struct objagg_hints_node {struct objagg_hints_node* parent; int list; int ht_node; TYPE_3__ stats_info; scalar_t__ root_id; int obj; } ;
struct objagg_hints {int node_count; int node_list; int ht_params; int node_ht; int root_count; } ;


 int VAR_0 ;
 struct objagg_hints_node* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct objagg_hints_node*) ;
 struct objagg_hints_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,size_t) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static struct objagg_hints_node *
FUNC_6(struct objagg_hints *VAR_2,
    struct objagg_obj *VAR_3, size_t VAR_4,
    struct objagg_hints_node *VAR_5)
{
 unsigned int VAR_6 = VAR_3->stats.user_count;
 struct objagg_hints_node *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_4, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 FUNC_4(VAR_7->obj, &VAR_3->obj, VAR_4);
 VAR_7->stats_info.stats.user_count = VAR_6;
 VAR_7->stats_info.stats.delta_user_count = VAR_6;
 if (VAR_5) {
  VAR_5->stats_info.stats.delta_user_count += VAR_6;
 } else {
  VAR_7->root_id = VAR_2->root_count++;
  VAR_7->stats_info.is_root = 1;
 }
 VAR_7->stats_info.objagg_obj = VAR_3;

 VAR_8 = FUNC_5(&VAR_2->node_ht, &VAR_7->ht_node,
         VAR_2->ht_params);
 if (VAR_8)
  goto err_ht_insert;

 FUNC_3(&VAR_7->list, &VAR_2->node_list);
 VAR_7->parent = VAR_5;
 VAR_2->node_count++;

 return VAR_7;

err_ht_insert:
 FUNC_1(VAR_7);
 return FUNC_0(VAR_8);
}
