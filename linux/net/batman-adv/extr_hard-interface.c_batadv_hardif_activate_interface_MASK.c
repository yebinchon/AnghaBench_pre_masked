
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct batadv_priv {TYPE_3__* algo_ops; } ;
struct batadv_hard_iface {scalar_t__ if_status; int soft_iface; TYPE_1__* net_dev; } ;
struct TYPE_5__ {int (* activate ) (struct batadv_hard_iface*) ;int (* update_mac ) (struct batadv_hard_iface*) ;} ;
struct TYPE_6__ {TYPE_2__ iface; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct batadv_hard_iface* FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_hard_iface*) ;
 int FUNC_4 (int ) ;
 struct batadv_priv* FUNC_5 (int ) ;
 int FUNC_6 (struct batadv_hard_iface*) ;
 int FUNC_7 (struct batadv_hard_iface*) ;

__attribute__((used)) static void
FUNC_8(struct batadv_hard_iface *VAR_2)
{
 struct batadv_priv *VAR_3;
 struct batadv_hard_iface *VAR_4 = ((void*)0);

 if (VAR_2->if_status != VAR_0)
  goto out;

 VAR_3 = FUNC_5(VAR_2->soft_iface);

 VAR_3->algo_ops->iface.update_mac(VAR_2);
 VAR_2->if_status = VAR_1;




 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  FUNC_3(VAR_3, VAR_2);

 FUNC_1(VAR_2->soft_iface, "Interface activated: %s\n",
      VAR_2->net_dev->name);

 FUNC_4(VAR_2->soft_iface);

 if (VAR_3->algo_ops->iface.activate)
  VAR_3->algo_ops->iface.activate(VAR_2);

out:
 if (VAR_4)
  FUNC_0(VAR_4);
}
