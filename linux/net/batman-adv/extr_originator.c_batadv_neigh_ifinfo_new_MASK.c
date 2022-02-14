
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_neigh_node {int ifinfo_lock; int ifinfo_list; } ;
struct batadv_neigh_ifinfo {int list; int refcount; struct batadv_hard_iface* if_outgoing; } ;
struct batadv_hard_iface {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct batadv_neigh_ifinfo* FUNC_1 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct batadv_neigh_ifinfo* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct batadv_neigh_ifinfo *
FUNC_8(struct batadv_neigh_node *VAR_1,
   struct batadv_hard_iface *VAR_2)
{
 struct batadv_neigh_ifinfo *VAR_3;

 FUNC_6(&VAR_1->ifinfo_lock);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto out;

 if (VAR_2)
  FUNC_3(&VAR_2->refcount);

 FUNC_0(&VAR_3->list);
 FUNC_4(&VAR_3->refcount);
 VAR_3->if_outgoing = VAR_2;

 FUNC_3(&VAR_3->refcount);
 FUNC_2(&VAR_3->list, &VAR_1->ifinfo_list);

out:
 FUNC_7(&VAR_1->ifinfo_lock);

 return VAR_3;
}
