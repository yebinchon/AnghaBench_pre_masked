
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int network_header; int inner_network_header; int protocol; int data; int inner_protocol; } ;
struct ovs_frag_data {int vlan_tci; int mac_proto; int network_offset; int l2_len; int l2_data; int vlan_proto; int inner_protocol; int cb; int dst; struct vport* vport; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct vport*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 struct ovs_frag_data* FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct ovs_frag_data *VAR_6 = FUNC_14(&VAR_2);
 struct vport *VAR_7 = VAR_6->vport;

 if (FUNC_8(VAR_5, VAR_6->l2_len) < 0) {
  FUNC_5(VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_6->dst);
 *FUNC_0(VAR_5) = VAR_6->cb;
 VAR_5->inner_protocol = VAR_6->inner_protocol;
 if (VAR_6->vlan_tci & VAR_1)
  FUNC_3(VAR_5, VAR_6->vlan_proto, VAR_6->vlan_tci & ~VAR_1);
 else
  FUNC_2(VAR_5);


 FUNC_10(VAR_5, VAR_6->l2_len);
 FUNC_6(VAR_5->data, &VAR_6->l2_data, VAR_6->l2_len);
 FUNC_9(VAR_5, VAR_5->data, VAR_6->l2_len);
 FUNC_11(VAR_5);

 if (FUNC_4(VAR_5->protocol)) {
  VAR_5->inner_network_header = VAR_5->network_header;
  FUNC_13(VAR_5, VAR_6->network_offset);
  FUNC_12(VAR_5);
 }

 FUNC_7(VAR_7, VAR_5, VAR_6->mac_proto);
 return 0;
}
