
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tvlv_gateway_data {scalar_t__ bandwidth_down; scalar_t__ bandwidth_up; } ;
struct TYPE_2__ {int generation; int gateway_list; int list_lock; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_orig_node {int orig; int refcount; } ;
struct batadv_gw_node {int bandwidth_down; int bandwidth_up; int list; int refcount; struct batadv_orig_node* orig_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int ,int,int,int,int) ;
 int FUNC_2 (struct batadv_gw_node*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct batadv_gw_node* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_2,
          struct batadv_orig_node *VAR_3,
          struct batadv_tvlv_gateway_data *VAR_4)
{
 struct batadv_gw_node *VAR_5;

 FUNC_7(&VAR_2->gw.list_lock);

 if (VAR_4->bandwidth_down == 0)
  return;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return;

 FUNC_5(&VAR_5->refcount);
 FUNC_0(&VAR_5->list);
 FUNC_4(&VAR_3->refcount);
 VAR_5->orig_node = VAR_3;
 VAR_5->bandwidth_down = FUNC_8(VAR_4->bandwidth_down);
 VAR_5->bandwidth_up = FUNC_8(VAR_4->bandwidth_up);

 FUNC_4(&VAR_5->refcount);
 FUNC_3(&VAR_5->list, &VAR_2->gw.gateway_list);
 VAR_2->gw.generation++;

 FUNC_1(VAR_0, VAR_2,
     "Found new gateway %pM -> gw bandwidth: %u.%u/%u.%u MBit\n",
     VAR_3->orig,
     FUNC_8(VAR_4->bandwidth_down) / 10,
     FUNC_8(VAR_4->bandwidth_down) % 10,
     FUNC_8(VAR_4->bandwidth_up) / 10,
     FUNC_8(VAR_4->bandwidth_up) % 10);


 FUNC_2(VAR_5);
}
