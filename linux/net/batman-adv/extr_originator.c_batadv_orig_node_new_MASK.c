
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node_vlan {int dummy; } ;
struct batadv_orig_node {int last_seen; unsigned long bcast_seqno_reset; TYPE_1__* fragments; int mcast_handler_lock; int mcast_want_all_ipv6_node; int mcast_want_all_ipv4_node; int mcast_want_all_unsnoopables_node; int mcast_flags; scalar_t__ tt_buff_len; int * tt_buff; int last_ttvn; int orig; struct batadv_priv* bat_priv; int refcount; int vlan_list_lock; int tt_lock; int tt_buff_lock; int neigh_list_lock; int bcast_seqno_lock; int ifinfo_list; int vlan_list; int neigh_list; } ;
struct TYPE_2__ {scalar_t__ size; int lock; int fragment_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct batadv_orig_node*) ;
 int FUNC_4 (int ,struct batadv_priv*,char*,int const*) ;
 int FUNC_5 (struct batadv_orig_node*) ;
 struct batadv_orig_node_vlan* FUNC_6 (struct batadv_orig_node*,int ) ;
 int FUNC_7 (struct batadv_orig_node_vlan*) ;
 int FUNC_8 (int ,int const*) ;
 int VAR_7 ;
 int FUNC_9 (struct batadv_orig_node*) ;
 int FUNC_10 (int *) ;
 struct batadv_orig_node* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

struct batadv_orig_node *FUNC_14(struct batadv_priv *VAR_8,
           const u8 *VAR_9)
{
 struct batadv_orig_node *VAR_10;
 struct batadv_orig_node_vlan *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_4(VAR_0, VAR_8,
     "Creating new originator: %pM\n", VAR_9);

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_6);
 if (!VAR_10)
  return ((void*)0);

 FUNC_0(&VAR_10->neigh_list);
 FUNC_0(&VAR_10->vlan_list);
 FUNC_0(&VAR_10->ifinfo_list);
 FUNC_13(&VAR_10->bcast_seqno_lock);
 FUNC_13(&VAR_10->neigh_list_lock);
 FUNC_13(&VAR_10->tt_buff_lock);
 FUNC_13(&VAR_10->tt_lock);
 FUNC_13(&VAR_10->vlan_list_lock);

 FUNC_5(VAR_10);


 FUNC_10(&VAR_10->refcount);

 VAR_10->bat_priv = VAR_8;
 FUNC_8(VAR_10->orig, VAR_9);
 FUNC_3(VAR_10);
 FUNC_2(&VAR_10->last_ttvn, 0);
 VAR_10->tt_buff = ((void*)0);
 VAR_10->tt_buff_len = 0;
 VAR_10->last_seen = VAR_7;
 VAR_12 = VAR_7 - 1 - FUNC_12(VAR_5);
 VAR_10->bcast_seqno_reset = VAR_12;
 VAR_11 = FUNC_6(VAR_10, VAR_4);
 if (!VAR_11)
  goto free_orig_node;




 FUNC_7(VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  FUNC_0(&VAR_10->fragments[VAR_13].fragment_list);
  FUNC_13(&VAR_10->fragments[VAR_13].lock);
  VAR_10->fragments[VAR_13].size = 0;
 }

 return VAR_10;
free_orig_node:
 FUNC_9(VAR_10);
 return ((void*)0);
}
