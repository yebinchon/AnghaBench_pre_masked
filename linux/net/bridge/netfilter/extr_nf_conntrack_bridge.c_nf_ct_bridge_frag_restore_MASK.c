
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_bridge_frag_data {int mac; int vlan_tci; int vlan_proto; scalar_t__ vlan_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2,
         const struct nf_bridge_frag_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_2(VAR_2);
  return -VAR_0;
 }
 if (VAR_3->vlan_present)
  FUNC_1(VAR_2, VAR_3->vlan_proto, VAR_3->vlan_tci);
 else if (FUNC_6(VAR_2))
  FUNC_0(VAR_2);

 FUNC_3(VAR_2, -VAR_1, VAR_3->mac, VAR_1);
 FUNC_5(VAR_2);

 return 0;
}
