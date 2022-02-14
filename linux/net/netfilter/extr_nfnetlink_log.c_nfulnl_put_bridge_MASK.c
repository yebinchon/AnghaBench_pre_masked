
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; int vlan_proto; int vlan_tci; } ;
struct nlattr {int dummy; } ;
struct nfulnl_instance {int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nlattr*) ;
 struct nlattr* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 scalar_t__ FUNC_7 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_8(struct nfulnl_instance *VAR_4, const struct sk_buff *VAR_5)
{
 if (!FUNC_6(VAR_5))
  return 0;

 if (FUNC_7(VAR_5)) {
  struct nlattr *VAR_6;

  VAR_6 = FUNC_2(VAR_4->skb, VAR_1);
  if (!VAR_6)
   goto nla_put_failure;

  if (FUNC_4(VAR_4->skb, VAR_3, FUNC_0(VAR_5->vlan_tci)) ||
      FUNC_4(VAR_4->skb, VAR_2, VAR_5->vlan_proto))
   goto nla_put_failure;

  FUNC_1(VAR_4->skb, VAR_6);
 }

 if (VAR_5->mac_header < VAR_5->network_header) {
  int VAR_7 = (int)(VAR_5->network_header - VAR_5->mac_header);

  if (FUNC_3(VAR_4->skb, VAR_0, VAR_7, FUNC_5(VAR_5)))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -1;
}
