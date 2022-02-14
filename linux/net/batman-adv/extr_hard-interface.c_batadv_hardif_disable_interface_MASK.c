
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct batadv_priv {TYPE_2__* algo_ops; } ;
struct batadv_hard_iface {scalar_t__ if_status; int * soft_iface; TYPE_3__* net_dev; int batman_adv_ptype; } ;
typedef enum batadv_hard_if_cleanup { ____Placeholder_batadv_hard_if_cleanup } batadv_hard_if_cleanup ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int (* disable ) (struct batadv_hard_iface*) ;} ;
struct TYPE_5__ {TYPE_1__ iface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_3 (int *) ;
 int FUNC_4 (struct batadv_hard_iface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 struct batadv_hard_iface* FUNC_7 (struct batadv_priv*) ;
 int FUNC_8 (struct batadv_priv*,struct batadv_hard_iface*) ;
 int FUNC_9 (struct batadv_priv*) ;
 int FUNC_10 (struct batadv_priv*,struct batadv_hard_iface*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct batadv_priv* FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (struct batadv_hard_iface*) ;

void FUNC_17(struct batadv_hard_iface *VAR_3,
         enum batadv_hard_if_cleanup VAR_4)
{
 struct batadv_priv *VAR_5 = FUNC_14(VAR_3->soft_iface);
 struct batadv_hard_iface *VAR_6 = ((void*)0);

 FUNC_2(VAR_3);

 if (VAR_3->if_status != VAR_1)
  goto out;

 FUNC_6(VAR_3->soft_iface, "Removing interface: %s\n",
      VAR_3->net_dev->name);
 FUNC_13(&VAR_3->batman_adv_ptype);
 FUNC_4(VAR_3);

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_3 == VAR_6) {
  struct batadv_hard_iface *VAR_7;

  VAR_7 = FUNC_3(VAR_3->soft_iface);
  FUNC_8(VAR_5, VAR_7);

  if (VAR_7)
   FUNC_4(VAR_7);
 }

 VAR_5->algo_ops->iface.disable(VAR_3);
 VAR_3->if_status = VAR_2;


 FUNC_9(VAR_5);
 FUNC_10(VAR_5, VAR_3);
 FUNC_12(VAR_3->soft_iface);

 FUNC_15(VAR_3->net_dev, VAR_3->soft_iface);
 FUNC_5(VAR_3->soft_iface);


 if (FUNC_1(VAR_3->soft_iface) <= 1) {
  FUNC_0(VAR_5);

  if (VAR_4 == VAR_0)
   FUNC_11(VAR_3->soft_iface);
 }

 VAR_3->soft_iface = ((void*)0);
 FUNC_4(VAR_3);

out:
 if (VAR_6)
  FUNC_4(VAR_6);
}
