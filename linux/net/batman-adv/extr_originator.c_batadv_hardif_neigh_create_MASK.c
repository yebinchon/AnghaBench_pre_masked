
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct batadv_priv {TYPE_2__* algo_ops; } ;
struct batadv_orig_node {int const* orig; } ;
struct batadv_hardif_neigh_node {int list; int refcount; int last_seen; struct batadv_hard_iface* if_incoming; int orig; int addr; } ;
struct batadv_hard_iface {int neigh_list_lock; int neigh_list; int refcount; int soft_iface; } ;
struct TYPE_3__ {int (* hardif_init ) (struct batadv_hardif_neigh_node*) ;} ;
struct TYPE_4__ {TYPE_1__ neigh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct batadv_hardif_neigh_node* FUNC_1 (struct batadv_hard_iface*,int const*) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct batadv_hardif_neigh_node* FUNC_6 (int,int ) ;
 struct batadv_priv* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct batadv_hardif_neigh_node*) ;

__attribute__((used)) static struct batadv_hardif_neigh_node *
FUNC_11(struct batadv_hard_iface *VAR_2,
      const u8 *VAR_3,
      struct batadv_orig_node *VAR_4)
{
 struct batadv_priv *VAR_5 = FUNC_7(VAR_2->soft_iface);
 struct batadv_hardif_neigh_node *VAR_6;

 FUNC_8(&VAR_2->neigh_list_lock);


 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto out;

 FUNC_4(&VAR_2->refcount);
 FUNC_0(&VAR_6->list);
 FUNC_2(VAR_6->addr, VAR_3);
 FUNC_2(VAR_6->orig, VAR_4->orig);
 VAR_6->if_incoming = VAR_2;
 VAR_6->last_seen = VAR_1;

 FUNC_5(&VAR_6->refcount);

 if (VAR_5->algo_ops->neigh.hardif_init)
  VAR_5->algo_ops->neigh.hardif_init(VAR_6);

 FUNC_3(&VAR_6->list, &VAR_2->neigh_list);

out:
 FUNC_9(&VAR_2->neigh_list_lock);
 return VAR_6;
}
