
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {int mla_lock; } ;
struct batadv_priv {TYPE_1__ mcast; struct net_device* soft_iface; } ;
struct batadv_mcast_mla_flags {int dummy; } ;


 struct hlist_head VAR_0 ;
 int FUNC_0 (struct net_device*,struct hlist_head*,struct batadv_mcast_mla_flags*) ;
 struct batadv_mcast_mla_flags FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_mcast_mla_flags*) ;
 int FUNC_3 (struct hlist_head*) ;
 int FUNC_4 (struct net_device*,struct hlist_head*,struct batadv_mcast_mla_flags*) ;
 int FUNC_5 (struct batadv_priv*,struct hlist_head*) ;
 int FUNC_6 (struct batadv_priv*,struct hlist_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->soft_iface;
 struct hlist_head VAR_3 = VAR_0;
 struct batadv_mcast_mla_flags VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 VAR_5 = FUNC_4(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_0(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 < 0)
  goto out;

 FUNC_7(&VAR_1->mcast.mla_lock);
 FUNC_6(VAR_1, &VAR_3);
 FUNC_5(VAR_1, &VAR_3);
 FUNC_2(VAR_1, &VAR_4);
 FUNC_8(&VAR_1->mcast.mla_lock);

out:
 FUNC_3(&VAR_3);
}
