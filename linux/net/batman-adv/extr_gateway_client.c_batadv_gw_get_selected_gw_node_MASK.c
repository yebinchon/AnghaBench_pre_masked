
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr_gw; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_gw_node {int refcount; } ;


 int FUNC_0 (int *) ;
 struct batadv_gw_node* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct batadv_gw_node *
FUNC_4(struct batadv_priv *VAR_0)
{
 struct batadv_gw_node *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->gw.curr_gw);
 if (!VAR_1)
  goto out;

 if (!FUNC_0(&VAR_1->refcount))
  VAR_1 = ((void*)0);

out:
 FUNC_3();
 return VAR_1;
}
