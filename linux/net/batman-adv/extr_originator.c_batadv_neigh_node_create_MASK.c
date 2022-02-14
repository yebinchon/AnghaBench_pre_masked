
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_orig_node {int neigh_list_lock; int orig; int bat_priv; int neigh_list; } ;
struct batadv_neigh_node {int list; int refcount; struct batadv_hardif_neigh_node* hardif_neigh; int last_seen; struct batadv_orig_node* orig_node; struct batadv_hard_iface* if_incoming; int addr; int ifinfo_lock; int ifinfo_list; } ;
struct batadv_hardif_neigh_node {int refcount; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; int refcount; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char*,int const*,int ,int ) ;
 struct batadv_hardif_neigh_node* FUNC_3 (struct batadv_hard_iface*,int const*,struct batadv_orig_node*) ;
 int FUNC_4 (struct batadv_hardif_neigh_node*) ;
 struct batadv_neigh_node* FUNC_5 (struct batadv_orig_node*,struct batadv_hard_iface*,int const*) ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct batadv_neigh_node* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct batadv_neigh_node *
FUNC_14(struct batadv_orig_node *VAR_3,
    struct batadv_hard_iface *VAR_4,
    const u8 *VAR_5)
{
 struct batadv_neigh_node *VAR_6;
 struct batadv_hardif_neigh_node *VAR_7 = ((void*)0);

 FUNC_11(&VAR_3->neigh_list_lock);

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_7 = FUNC_3(VAR_4,
        VAR_5, VAR_3);
 if (!VAR_7)
  goto out;

 VAR_6 = FUNC_10(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  goto out;

 FUNC_1(&VAR_6->list);
 FUNC_0(&VAR_6->ifinfo_list);
 FUNC_12(&VAR_6->ifinfo_lock);

 FUNC_8(&VAR_4->refcount);
 FUNC_6(VAR_6->addr, VAR_5);
 VAR_6->if_incoming = VAR_4;
 VAR_6->orig_node = VAR_3;
 VAR_6->last_seen = VAR_2;


 FUNC_8(&VAR_7->refcount);
 VAR_6->hardif_neigh = VAR_7;


 FUNC_9(&VAR_6->refcount);

 FUNC_8(&VAR_6->refcount);
 FUNC_7(&VAR_6->list, &VAR_3->neigh_list);

 FUNC_2(VAR_0, VAR_3->bat_priv,
     "Creating new neighbor %pM for orig_node %pM on interface %s\n",
     VAR_5, VAR_3->orig, VAR_4->net_dev->name);

out:
 FUNC_13(&VAR_3->neigh_list_lock);

 if (VAR_7)
  FUNC_4(VAR_7);
 return VAR_6;
}
