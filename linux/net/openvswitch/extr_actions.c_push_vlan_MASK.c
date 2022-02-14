
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tpid; int tci; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct sw_flow_key {TYPE_2__ eth; } ;
struct sk_buff {int dummy; } ;
struct ovs_action_push_vlan {int vlan_tci; int vlan_tpid; } ;


 int VAR_0 ;
 int FUNC_0 (struct sw_flow_key*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2,
       const struct ovs_action_push_vlan *VAR_3)
{
 if (FUNC_3(VAR_1)) {
  FUNC_0(VAR_2);
 } else {
  VAR_2->eth.vlan.tci = VAR_3->vlan_tci;
  VAR_2->eth.vlan.tpid = VAR_3->vlan_tpid;
 }
 return FUNC_2(VAR_1, VAR_3->vlan_tpid,
        FUNC_1(VAR_3->vlan_tci) & ~VAR_0);
}
