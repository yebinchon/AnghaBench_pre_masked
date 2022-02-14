
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ogm_buff_mutex; } ;
struct batadv_hard_iface {int list; int refcount; struct net_device* net_dev; int num_bcasts; int wifi_flags; int neigh_list_lock; TYPE_1__ bat_iv; int neigh_list; int if_status; int * soft_iface; int hardif_obj; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct batadv_hard_iface*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct batadv_hard_iface*) ;
 int FUNC_7 (int *,struct net_device*) ;
 int FUNC_8 (struct batadv_hard_iface*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct batadv_hard_iface*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct batadv_hard_iface* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static struct batadv_hard_iface *
FUNC_19(struct net_device *VAR_6)
{
 struct batadv_hard_iface *VAR_7;
 int VAR_8;

 FUNC_0();

 if (!FUNC_5(VAR_6))
  goto out;

 FUNC_10(VAR_6);

 VAR_7 = FUNC_15(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  goto release_dev;

 VAR_8 = FUNC_7(&VAR_7->hardif_obj, VAR_6);
 if (VAR_8)
  goto free_if;

 VAR_7->net_dev = VAR_6;
 VAR_7->soft_iface = ((void*)0);
 VAR_7->if_status = VAR_0;

 FUNC_4(VAR_7);

 FUNC_2(&VAR_7->list);
 FUNC_1(&VAR_7->neigh_list);

 FUNC_17(&VAR_7->bat_iv.ogm_buff_mutex);
 FUNC_18(&VAR_7->neigh_list_lock);
 FUNC_14(&VAR_7->refcount);

 VAR_7->num_bcasts = VAR_1;
 VAR_7->wifi_flags = FUNC_9(VAR_6);
 if (FUNC_6(VAR_7))
  VAR_7->num_bcasts = VAR_2;

 FUNC_8(VAR_7);

 FUNC_3(VAR_7->net_dev);
 FUNC_13(&VAR_7->refcount);
 FUNC_16(&VAR_7->list, &VAR_5);
 VAR_4++;

 return VAR_7;

free_if:
 FUNC_12(VAR_7);
release_dev:
 FUNC_11(VAR_6);
out:
 return ((void*)0);
}
