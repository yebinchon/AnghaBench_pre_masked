
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int vlan_proto; int vlan_tci; } ;
struct nf_bridge_frag_data {int vlan_present; int mac; int vlan_proto; int vlan_tci; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1,
       struct nf_bridge_frag_data *VAR_2)
{
 if (FUNC_1(VAR_1)) {
  VAR_2->vlan_present = 1;
  VAR_2->vlan_tci = VAR_1->vlan_tci;
  VAR_2->vlan_proto = VAR_1->vlan_proto;
 } else {
  VAR_2->vlan_present = 0;
 }
 FUNC_0(VAR_1, -VAR_0, VAR_2->mac, VAR_0);
}
