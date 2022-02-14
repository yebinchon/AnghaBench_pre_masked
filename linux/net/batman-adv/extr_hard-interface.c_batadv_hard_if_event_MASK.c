
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct batadv_priv {TYPE_2__* algo_ops; } ;
struct batadv_hard_iface {int num_bcasts; int wifi_flags; int soft_iface; int net_dev; int if_status; int list; } ;
struct TYPE_3__ {int (* update_mac ) (struct batadv_hard_iface*) ;} ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned long VAR_2 ;

 unsigned long VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (unsigned long,struct net_device*) ;
 int FUNC_3 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct batadv_hard_iface*) ;
 int VAR_5 ;
 struct batadv_hard_iface* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct batadv_hard_iface*) ;
 int FUNC_8 (struct batadv_hard_iface*) ;
 int FUNC_9 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_10 (struct batadv_priv*) ;
 int FUNC_11 (struct batadv_priv*,int *) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *) ;
 struct net_device* FUNC_16 (void*) ;
 struct batadv_priv* FUNC_17 (int ) ;
 int FUNC_18 (struct batadv_hard_iface*) ;

__attribute__((used)) static int FUNC_19(struct notifier_block *VAR_6,
    unsigned long VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = FUNC_16(VAR_8);
 struct batadv_hard_iface *VAR_10;
 struct batadv_hard_iface *VAR_11 = ((void*)0);
 struct batadv_priv *VAR_12;

 if (FUNC_12(VAR_9))
  return FUNC_2(VAR_7, VAR_9);

 VAR_10 = FUNC_6(VAR_9);
 if (!VAR_10 && (VAR_7 == VAR_3 ||
       VAR_7 == VAR_2))
  VAR_10 = FUNC_4(VAR_9);

 if (!VAR_10)
  goto out;

 switch (VAR_7) {
 case 128:
  FUNC_3(VAR_10);
  break;
 case 131:
 case 132:
  FUNC_5(VAR_10);
  break;
 case 129:
 case 130:
  FUNC_15(&VAR_10->list);
  VAR_5++;

  FUNC_8(VAR_10);
  break;
 case 135:
  if (VAR_10->soft_iface)
   FUNC_13(VAR_10->soft_iface);
  break;
 case 136:
  if (VAR_10->if_status == VAR_0)
   goto hardif_put;

  FUNC_0(VAR_10->net_dev);

  VAR_12 = FUNC_17(VAR_10->soft_iface);
  VAR_12->algo_ops->iface.update_mac(VAR_10);

  VAR_11 = FUNC_10(VAR_12);
  if (!VAR_11)
   goto hardif_put;

  if (VAR_10 == VAR_11)
   FUNC_11(VAR_12, ((void*)0));
  break;
 case 133:
  VAR_10->wifi_flags = FUNC_14(VAR_9);
  if (FUNC_9(VAR_10))
   VAR_10->num_bcasts = VAR_1;
  break;
 case 134:
  FUNC_1(VAR_10);
  break;
 default:
  break;
 }

hardif_put:
 FUNC_7(VAR_10);
out:
 if (VAR_11)
  FUNC_7(VAR_11);
 return VAR_4;
}
