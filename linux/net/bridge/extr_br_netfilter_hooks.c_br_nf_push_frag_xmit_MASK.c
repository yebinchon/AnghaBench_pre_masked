
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct brnf_frag_data {int encap_size; int size; int mac; int vlan_tci; scalar_t__ vlan_proto; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_2 (struct net*,struct sock*,struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 struct brnf_frag_data* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_1, struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct brnf_frag_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_7(&VAR_0);
 VAR_5 = FUNC_6(VAR_3, VAR_4->size);

 if (VAR_5) {
  FUNC_3(VAR_3);
  return 0;
 }

 if (VAR_4->vlan_proto)
  FUNC_1(VAR_3, VAR_4->vlan_proto, VAR_4->vlan_tci);

 FUNC_5(VAR_3, -VAR_4->size, VAR_4->mac, VAR_4->size);
 FUNC_0(VAR_3, VAR_4->encap_size);

 FUNC_4(VAR_3);
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
