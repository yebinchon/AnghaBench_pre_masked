
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ protocol; } ;
struct tc_cls_matchall_offload {int cookie; TYPE_2__* rule; TYPE_1__ common; } ;
struct net_device {int dummy; } ;
struct flow_action_entry {scalar_t__ id; struct net_device* dev; } ;
struct dsa_switch {TYPE_3__* ops; } ;
struct dsa_slave_priv {int mall_tc_list; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct dsa_mall_mirror_tc_entry {int ingress; int to_local_port; } ;
struct dsa_mall_tc_entry {int list; struct dsa_mall_mirror_tc_entry mirror; int type; int cookie; } ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {struct flow_action_entry* entries; } ;
struct TYPE_7__ {int (* port_mirror_add ) (struct dsa_switch*,int ,struct dsa_mall_mirror_tc_entry*,int) ;} ;
struct TYPE_6__ {TYPE_4__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dsa_mall_tc_entry*) ;
 struct dsa_mall_tc_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 struct dsa_slave_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct dsa_switch*,int ,struct dsa_mall_mirror_tc_entry*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7,
          struct tc_cls_matchall_offload *VAR_8,
          bool VAR_9)
{
 struct dsa_port *VAR_10 = FUNC_1(VAR_7);
 struct dsa_slave_priv *VAR_11 = FUNC_7(VAR_7);
 struct dsa_mall_tc_entry *VAR_12;
 __be16 VAR_13 = VAR_8->common.protocol;
 struct dsa_switch *VAR_14 = VAR_10->ds;
 struct flow_action_entry *VAR_15;
 struct dsa_port *VAR_16;
 int VAR_17 = -VAR_3;

 if (!VAR_14->ops->port_mirror_add)
  return VAR_17;

 if (!FUNC_2(&VAR_8->rule->action))
  return VAR_17;

 VAR_15 = &VAR_8->rule->action.entries[0];

 if (VAR_15->id == VAR_5 && VAR_13 == FUNC_3(VAR_4)) {
  struct dsa_mall_mirror_tc_entry *VAR_18;

  if (!VAR_15->dev)
   return -VAR_1;

  if (!FUNC_0(VAR_15->dev))
   return -VAR_3;

  VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_6);
  if (!VAR_12)
   return -VAR_2;

  VAR_12->cookie = VAR_8->cookie;
  VAR_12->type = VAR_0;
  VAR_18 = &VAR_12->mirror;

  VAR_16 = FUNC_1(VAR_15->dev);

  VAR_18->to_local_port = VAR_16->index;
  VAR_18->ingress = VAR_9;

  VAR_17 = VAR_14->ops->port_mirror_add(VAR_14, VAR_10->index, VAR_18, VAR_9);
  if (VAR_17) {
   FUNC_4(VAR_12);
   return VAR_17;
  }

  FUNC_6(&VAR_12->list, &VAR_11->mall_tc_list);
 }

 return 0;
}
