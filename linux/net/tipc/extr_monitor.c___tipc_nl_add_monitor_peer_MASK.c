
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_peer {scalar_t__ is_head; scalar_t__ is_local; scalar_t__ is_up; int applied; int addr; struct tipc_mon_domain* domain; } ;
struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct tipc_mon_domain {int member_cnt; int members; int up_map; int gen; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct nlattr*) ;
 int FUNC_4 (int ,struct nlattr*) ;
 struct nlattr* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(struct tipc_peer *VAR_14,
          struct tipc_nl_msg *VAR_15)
{
 struct tipc_mon_domain *VAR_16 = VAR_14->domain;
 struct nlattr *VAR_17;
 void *VAR_18;

 VAR_18 = FUNC_2(VAR_15->skb, VAR_15->portid, VAR_15->seq, &VAR_13,
     VAR_1, VAR_12);
 if (!VAR_18)
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_15->skb, VAR_2);
 if (!VAR_17)
  goto msg_full;

 if (FUNC_8(VAR_15->skb, VAR_3, VAR_14->addr))
  goto attr_msg_full;
 if (FUNC_8(VAR_15->skb, VAR_4, VAR_14->applied))
  goto attr_msg_full;

 if (VAR_14->is_up)
  if (FUNC_7(VAR_15->skb, VAR_10))
   goto attr_msg_full;
 if (VAR_14->is_local)
  if (FUNC_7(VAR_15->skb, VAR_7))
   goto attr_msg_full;
 if (VAR_14->is_head)
  if (FUNC_7(VAR_15->skb, VAR_6))
   goto attr_msg_full;

 if (VAR_16) {
  if (FUNC_8(VAR_15->skb, VAR_5, VAR_16->gen))
   goto attr_msg_full;
  if (FUNC_9(VAR_15->skb, VAR_11,
          VAR_16->up_map, VAR_9))
   goto attr_msg_full;
  if (FUNC_6(VAR_15->skb, VAR_8,
       VAR_16->member_cnt * sizeof(u32), &VAR_16->members))
   goto attr_msg_full;
 }

 FUNC_4(VAR_15->skb, VAR_17);
 FUNC_1(VAR_15->skb, VAR_18);
 return 0;

attr_msg_full:
 FUNC_3(VAR_15->skb, VAR_17);
msg_full:
 FUNC_0(VAR_15->skb, VAR_18);

 return -VAR_0;
}
