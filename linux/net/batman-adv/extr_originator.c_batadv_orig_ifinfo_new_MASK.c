
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_orig_node {int neigh_list_lock; int ifinfo_list; } ;
struct batadv_orig_ifinfo {unsigned long batman_seqno_reset; int list; int refcount; struct batadv_hard_iface* if_outgoing; } ;
struct batadv_hard_iface {int refcount; } ;


 struct batadv_hard_iface* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct batadv_orig_ifinfo* FUNC_1 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct batadv_orig_ifinfo* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct batadv_orig_ifinfo *
FUNC_9(struct batadv_orig_node *VAR_4,
         struct batadv_hard_iface *VAR_5)
{
 struct batadv_orig_ifinfo *VAR_6;
 unsigned long VAR_7;

 FUNC_7(&VAR_4->neigh_list_lock);

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;

 if (VAR_5 != VAR_0)
  FUNC_3(&VAR_5->refcount);

 VAR_7 = VAR_3 - 1;
 VAR_7 -= FUNC_6(VAR_1);
 VAR_6->batman_seqno_reset = VAR_7;
 VAR_6->if_outgoing = VAR_5;
 FUNC_0(&VAR_6->list);
 FUNC_4(&VAR_6->refcount);

 FUNC_3(&VAR_6->refcount);
 FUNC_2(&VAR_6->list,
      &VAR_4->ifinfo_list);
out:
 FUNC_8(&VAR_4->neigh_list_lock);
 return VAR_6;
}
