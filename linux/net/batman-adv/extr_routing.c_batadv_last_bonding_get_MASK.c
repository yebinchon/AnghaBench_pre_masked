
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_orig_node {int neigh_list_lock; struct batadv_orig_ifinfo* last_bonding_candidate; } ;
struct batadv_orig_ifinfo {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct batadv_orig_ifinfo *
FUNC_3(struct batadv_orig_node *VAR_0)
{
 struct batadv_orig_ifinfo *VAR_1;

 FUNC_1(&VAR_0->neigh_list_lock);
 VAR_1 = VAR_0->last_bonding_candidate;

 if (VAR_1)
  FUNC_0(&VAR_1->refcount);
 FUNC_2(&VAR_0->neigh_list_lock);

 return VAR_1;
}
