
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mem_cgroup_tree_per_node {int lock; int rb_root; } ;
struct mem_cgroup_per_node {TYPE_2__* memcg; } ;
struct TYPE_6__ {int node_id; } ;
typedef TYPE_1__ pg_data_t ;
typedef int gfp_t ;
struct TYPE_7__ {int css; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mem_cgroup_per_node*,struct mem_cgroup_tree_per_node*,unsigned long) ;
 struct mem_cgroup_per_node* FUNC_2 (struct mem_cgroup_tree_per_node*) ;
 int FUNC_3 (struct mem_cgroup_per_node*,struct mem_cgroup_tree_per_node*) ;
 int FUNC_4 (int *) ;
 struct mem_cgroup_per_node* FUNC_5 (struct mem_cgroup_tree_per_node*) ;
 unsigned long FUNC_6 (TYPE_2__*,TYPE_1__*,int ,unsigned long*) ;
 unsigned long FUNC_7 (TYPE_2__*) ;
 struct mem_cgroup_tree_per_node* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

unsigned long FUNC_11(pg_data_t *VAR_1, int VAR_2,
         gfp_t VAR_3,
         unsigned long *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct mem_cgroup_per_node *VAR_6, *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 int VAR_9 = 0;
 struct mem_cgroup_tree_per_node *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (VAR_2 > 0)
  return 0;

 VAR_10 = FUNC_8(VAR_1->node_id);






 if (!VAR_10 || FUNC_0(&VAR_10->rb_root))
  return 0;






 do {
  if (VAR_7)
   VAR_6 = VAR_7;
  else
   VAR_6 = FUNC_5(VAR_10);
  if (!VAR_6)
   break;

  VAR_12 = 0;
  VAR_8 = FUNC_6(VAR_6->memcg, VAR_1,
          VAR_3, &VAR_12);
  VAR_5 += VAR_8;
  *VAR_4 += VAR_12;
  FUNC_9(&VAR_10->lock);
  FUNC_3(VAR_6, VAR_10);





  VAR_7 = ((void*)0);
  if (!VAR_8)
   VAR_7 = FUNC_2(VAR_10);

  VAR_11 = FUNC_7(VAR_6->memcg);
  FUNC_1(VAR_6, VAR_10, VAR_11);
  FUNC_10(&VAR_10->lock);
  FUNC_4(&VAR_6->memcg->css);
  VAR_9++;





  if (!VAR_5 &&
   (VAR_7 == ((void*)0) ||
   VAR_9 > VAR_0))
   break;
 } while (!VAR_5);
 if (VAR_7)
  FUNC_4(&VAR_7->memcg->css);
 return VAR_5;
}
