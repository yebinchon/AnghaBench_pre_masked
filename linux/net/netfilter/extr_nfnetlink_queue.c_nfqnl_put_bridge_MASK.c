
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; int vlan_proto; int vlan_tci; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ pf; } ;
struct nf_queue_entry {TYPE_1__ state; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct nf_queue_entry *VAR_5, struct sk_buff *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_5->skb;

 if (VAR_5->state.pf != VAR_4 || !FUNC_6(VAR_7))
  return 0;

 if (FUNC_7(VAR_7)) {
  struct nlattr *VAR_8;

  VAR_8 = FUNC_2(VAR_6, VAR_1);
  if (!VAR_8)
   goto nla_put_failure;

  if (FUNC_4(VAR_6, VAR_3, FUNC_0(VAR_7->vlan_tci)) ||
      FUNC_4(VAR_6, VAR_2, VAR_7->vlan_proto))
   goto nla_put_failure;

  FUNC_1(VAR_6, VAR_8);
 }

 if (VAR_7->mac_header < VAR_7->network_header) {
  int VAR_9 = (int)(VAR_7->network_header - VAR_7->mac_header);

  if (FUNC_3(VAR_6, VAR_0, VAR_9, FUNC_5(VAR_7)))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -1;
}
