
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vport {int dummy; } ;
struct sk_buff {int data; int vlan_proto; int inner_protocol; int _skb_refdst; } ;
struct ovs_frag_data {int vlan_tci; unsigned int l2_len; int l2_data; int mac_proto; int vlan_proto; int network_offset; int inner_protocol; int cb; struct vport* vport; int dst; } ;
struct inet_skb_parm {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int * FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 struct ovs_frag_data* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct vport *VAR_2, struct sk_buff *VAR_3,
    u16 VAR_4, u8 VAR_5)
{
 unsigned int VAR_6 = FUNC_4(VAR_3);
 struct ovs_frag_data *VAR_7;

 VAR_7 = FUNC_8(&VAR_1);
 VAR_7->dst = VAR_3->_skb_refdst;
 VAR_7->vport = VAR_2;
 VAR_7->cb = *FUNC_1(VAR_3);
 VAR_7->inner_protocol = VAR_3->inner_protocol;
 VAR_7->network_offset = VAR_4;
 if (FUNC_7(VAR_3))
  VAR_7->vlan_tci = FUNC_6(VAR_3) | VAR_0;
 else
  VAR_7->vlan_tci = 0;
 VAR_7->vlan_proto = VAR_3->vlan_proto;
 VAR_7->mac_proto = VAR_5;
 VAR_7->l2_len = VAR_6;
 FUNC_2(&VAR_7->l2_data, VAR_3->data, VAR_6);

 FUNC_3(FUNC_0(VAR_3), 0, sizeof(struct inet_skb_parm));
 FUNC_5(VAR_3, VAR_6);
}
