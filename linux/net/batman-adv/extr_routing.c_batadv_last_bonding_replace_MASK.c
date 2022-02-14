
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_orig_node {int neigh_list_lock; struct batadv_orig_ifinfo* last_bonding_candidate; } ;
struct batadv_orig_ifinfo {int refcount; } ;


 int FUNC_0 (struct batadv_orig_ifinfo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct batadv_orig_node *VAR_0,
       struct batadv_orig_ifinfo *VAR_1)
{
 struct batadv_orig_ifinfo *VAR_2;

 FUNC_2(&VAR_0->neigh_list_lock);
 VAR_2 = VAR_0->last_bonding_candidate;

 if (VAR_1)
  FUNC_1(&VAR_1->refcount);
 VAR_0->last_bonding_candidate = VAR_1;
 FUNC_3(&VAR_0->neigh_list_lock);

 if (VAR_2)
  FUNC_0(VAR_2);
}
