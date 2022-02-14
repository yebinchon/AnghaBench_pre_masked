
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct batadv_priv {TYPE_2__* algo_ops; } ;
struct batadv_orig_node {int dummy; } ;
struct TYPE_3__ {int (* is_eligible ) (struct batadv_priv*,struct batadv_orig_node*,struct batadv_orig_node*) ;} ;
struct TYPE_4__ {TYPE_1__ gw; } ;


 struct batadv_orig_node* FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_orig_node*) ;

void FUNC_4(struct batadv_priv *VAR_0,
         struct batadv_orig_node *VAR_1)
{
 struct batadv_orig_node *VAR_2;




 if (!VAR_0->algo_ops->gw.is_eligible)
  return;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  goto reselect;


 if (VAR_2 == VAR_1)
  goto out;

 if (!VAR_0->algo_ops->gw.is_eligible(VAR_0, VAR_2,
      VAR_1))
  goto out;

reselect:
 FUNC_1(VAR_0);
out:
 if (VAR_2)
  FUNC_2(VAR_2);
}
