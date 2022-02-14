
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int name; } ;
struct net {int dummy; } ;
struct batadv_priv {TYPE_2__* algo_ops; int fragmentation; } ;
struct TYPE_10__ {TYPE_3__* dev; int func; int type; } ;
struct batadv_hard_iface {scalar_t__ if_status; struct net_device* soft_iface; TYPE_3__* net_dev; TYPE_6__ batman_adv_ptype; int refcount; } ;
typedef int __be16 ;
struct TYPE_9__ {scalar_t__ mtu; int name; } ;
struct TYPE_7__ {int (* enable ) (struct batadv_hard_iface*) ;int (* enabled ) (struct batadv_hard_iface*) ;} ;
struct TYPE_8__ {TYPE_1__ iface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 scalar_t__ FUNC_3 (struct batadv_hard_iface*) ;
 int FUNC_4 (struct batadv_hard_iface*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*,int ,...) ;
 int FUNC_7 (struct batadv_hard_iface*,struct net_device*) ;
 int FUNC_8 () ;
 struct net_device* FUNC_9 (struct net*,char const*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (TYPE_6__*) ;
 struct net_device* FUNC_12 (struct net*,char const*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 struct net_device* FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,struct net_device*,int *,int *,int *) ;
 struct batadv_priv* FUNC_19 (struct net_device*) ;
 int FUNC_20 (TYPE_3__*,struct net_device*) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (struct batadv_hard_iface*) ;
 int FUNC_23 (struct batadv_hard_iface*) ;

int FUNC_24(struct batadv_hard_iface *VAR_7,
       struct net *VAR_8, const char *VAR_9)
{
 struct batadv_priv *VAR_10;
 struct net_device *VAR_11, *VAR_12;
 __be16 VAR_13 = FUNC_15(VAR_5);
 int VAR_14 = FUNC_8();
 int VAR_15;

 if (VAR_7->if_status != VAR_1)
  goto out;

 FUNC_16(&VAR_7->refcount);

 VAR_11 = FUNC_12(VAR_8, VAR_9);

 if (!VAR_11) {
  VAR_11 = FUNC_9(VAR_8, VAR_9);

  if (!VAR_11) {
   VAR_15 = -VAR_3;
   goto err;
  }


  FUNC_13(VAR_11);
 }

 if (!FUNC_10(VAR_11)) {
  FUNC_21("Can't create batman mesh interface %s: already exists as regular interface\n",
         VAR_11->name);
  VAR_15 = -VAR_2;
  goto err_dev;
 }




 VAR_12 = FUNC_17(VAR_7->net_dev);
 VAR_15 = FUNC_7(VAR_7, VAR_12);
 if (VAR_15)
  goto err_dev;

 VAR_7->soft_iface = VAR_11;
 VAR_10 = FUNC_19(VAR_7->soft_iface);

 VAR_15 = FUNC_18(VAR_7->net_dev,
        VAR_11, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_15)
  goto err_dev;

 VAR_15 = VAR_10->algo_ops->iface.enable(VAR_7);
 if (VAR_15 < 0)
  goto err_upper;

 VAR_7->if_status = VAR_0;

 FUNC_16(&VAR_7->refcount);
 VAR_7->batman_adv_ptype.type = VAR_13;
 VAR_7->batman_adv_ptype.func = VAR_6;
 VAR_7->batman_adv_ptype.dev = VAR_7->net_dev;
 FUNC_11(&VAR_7->batman_adv_ptype);

 FUNC_6(VAR_7->soft_iface, "Adding interface: %s\n",
      VAR_7->net_dev->name);

 if (FUNC_0(&VAR_10->fragmentation) &&
     VAR_7->net_dev->mtu < VAR_4 + VAR_14)
  FUNC_6(VAR_7->soft_iface,
       "The MTU of interface %s is too small (%i) to handle the transport of batman-adv packets. Packets going over this interface will be fragmented on layer2 which could impact the performance. Setting the MTU to %i would solve the problem.\n",
       VAR_7->net_dev->name, VAR_7->net_dev->mtu,
       VAR_4 + VAR_14);

 if (!FUNC_0(&VAR_10->fragmentation) &&
     VAR_7->net_dev->mtu < VAR_4 + VAR_14)
  FUNC_6(VAR_7->soft_iface,
       "The MTU of interface %s is too small (%i) to handle the transport of batman-adv packets. If you experience problems getting traffic through try increasing the MTU to %i.\n",
       VAR_7->net_dev->name, VAR_7->net_dev->mtu,
       VAR_4 + VAR_14);

 if (FUNC_3(VAR_7))
  FUNC_2(VAR_7);
 else
  FUNC_1(VAR_7->soft_iface,
      "Not using interface %s (retrying later): interface not active\n",
      VAR_7->net_dev->name);

 FUNC_5(VAR_11);

 if (VAR_10->algo_ops->iface.enabled)
  VAR_10->algo_ops->iface.enabled(VAR_7);

out:
 return 0;

err_upper:
 FUNC_20(VAR_7->net_dev, VAR_11);
err_dev:
 VAR_7->soft_iface = ((void*)0);
 FUNC_14(VAR_11);
err:
 FUNC_4(VAR_7);
 return VAR_15;
}
