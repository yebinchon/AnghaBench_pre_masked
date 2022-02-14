
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_cls_matchall_offload {int cookie; } ;
struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct dsa_mall_tc_entry {int type; int mirror; int list; } ;
struct TYPE_2__ {int (* port_mirror_del ) (struct dsa_switch*,int ,int *) ;} ;



 int FUNC_0 (int) ;
 struct dsa_mall_tc_entry* FUNC_1 (struct net_device*,int ) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dsa_mall_tc_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dsa_switch*,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
           struct tc_cls_matchall_offload *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_2(VAR_0);
 struct dsa_mall_tc_entry *VAR_3;
 struct dsa_switch *VAR_4 = VAR_2->ds;

 if (!VAR_4->ops->port_mirror_del)
  return;

 VAR_3 = FUNC_1(VAR_0, VAR_1->cookie);
 if (!VAR_3)
  return;

 FUNC_4(&VAR_3->list);

 switch (VAR_3->type) {
 case 128:
  VAR_4->ops->port_mirror_del(VAR_4, VAR_2->index, &VAR_3->mirror);
  break;
 default:
  FUNC_0(1);
 }

 FUNC_3(VAR_3);
}
