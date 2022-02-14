
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct batadv_priv {TYPE_2__* algo_ops; int primary_if; } ;
struct batadv_hard_iface {int refcount; } ;
struct TYPE_3__ {int (* primary_set ) (struct batadv_hard_iface*) ;} ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_hard_iface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_5 (int ,int) ;
 int FUNC_6 (struct batadv_hard_iface*) ;

__attribute__((used)) static void FUNC_7(struct batadv_priv *VAR_0,
         struct batadv_hard_iface *VAR_1)
{
 struct batadv_hard_iface *VAR_2;

 FUNC_0();

 if (VAR_1)
  FUNC_3(&VAR_1->refcount);

 VAR_2 = FUNC_5(VAR_0->primary_if, 1);
 FUNC_4(VAR_0->primary_if, VAR_1);

 if (!VAR_1)
  goto out;

 VAR_0->algo_ops->iface.primary_set(VAR_1);
 FUNC_2(VAR_0, VAR_2);

out:
 if (VAR_2)
  FUNC_1(VAR_2);
}
