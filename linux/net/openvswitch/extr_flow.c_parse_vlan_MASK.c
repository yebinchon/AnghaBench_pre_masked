
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tci; int tpid; } ;
struct TYPE_3__ {TYPE_2__ cvlan; TYPE_2__ vlan; } ;
struct sw_flow_key {TYPE_1__ eth; } ;
struct sk_buff {int vlan_proto; int vlan_tci; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_1)) {
  VAR_2->eth.vlan.tci = FUNC_0(VAR_1->vlan_tci) | FUNC_0(VAR_0);
  VAR_2->eth.vlan.tpid = VAR_1->vlan_proto;
 } else {

  VAR_3 = FUNC_1(VAR_1, &VAR_2->eth.vlan, 1);
  if (VAR_3 <= 0)
   return VAR_3;
 }


 VAR_3 = FUNC_1(VAR_1, &VAR_2->eth.cvlan, 0);
 if (VAR_3 <= 0)
  return VAR_3;

 return 0;
}
