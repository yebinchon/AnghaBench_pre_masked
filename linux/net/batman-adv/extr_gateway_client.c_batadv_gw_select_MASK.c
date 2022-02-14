
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list_lock; int curr_gw; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_gw_node {int refcount; } ;


 int FUNC_0 (struct batadv_gw_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct batadv_gw_node*) ;
 struct batadv_gw_node* FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct batadv_priv *VAR_0,
        struct batadv_gw_node *VAR_1)
{
 struct batadv_gw_node *VAR_2;

 FUNC_4(&VAR_0->gw.list_lock);

 if (VAR_1)
  FUNC_1(&VAR_1->refcount);

 VAR_2 = FUNC_3(VAR_0->gw.curr_gw, 1);
 FUNC_2(VAR_0->gw.curr_gw, VAR_1);

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_5(&VAR_0->gw.list_lock);
}
