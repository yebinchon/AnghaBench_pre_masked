
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_dm_hw_metadata {int dummy; } ;
struct devlink_trap_item {TYPE_1__* group_item; int stats; } ;
struct devlink_port {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int stats; } ;


 int FUNC_0 (struct net_dm_hw_metadata*,struct devlink_trap_item*,struct devlink_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_dm_hw_metadata*) ;

void FUNC_3(struct devlink *VAR_0, struct sk_buff *VAR_1,
    void *VAR_2, struct devlink_port *VAR_3)
{
 struct devlink_trap_item *VAR_4 = VAR_2;
 struct net_dm_hw_metadata VAR_5 = {};

 FUNC_1(VAR_4->stats, VAR_1->len);
 FUNC_1(VAR_4->group_item->stats, VAR_1->len);

 FUNC_0(&VAR_5, VAR_4,
       VAR_3);
 FUNC_2(VAR_1, &VAR_5);
}
