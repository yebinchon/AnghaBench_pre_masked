
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {int drop_point; struct sk_buff_head failover_deferdq; struct sk_buff* reasm_tnlmsg; struct sk_buff* failover_reasm_skb; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (struct sk_buff_head*,int ,struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct tipc_link*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct sk_buff_head*) ;
 int FUNC_14 (struct sk_buff**,struct sk_buff**) ;
 int FUNC_15 (struct tipc_link*,struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_16 (struct tipc_link*,int ) ;
 int FUNC_17 (struct tipc_link*,struct sk_buff*,struct sk_buff_head*,struct sk_buff**) ;
 int FUNC_18 (struct sk_buff*,struct sk_buff**,int*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct tipc_link *VAR_5, struct sk_buff *VAR_6,
        struct sk_buff_head *VAR_7)
{
 struct sk_buff **VAR_8 = &VAR_5->failover_reasm_skb;
 struct sk_buff **VAR_9 = &VAR_5->reasm_tnlmsg;
 struct sk_buff_head *VAR_10 = &VAR_5->failover_deferdq;
 struct tipc_msg *VAR_11 = FUNC_2(VAR_6);
 struct sk_buff *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 u16 VAR_15;

 if (FUNC_11(VAR_11) == VAR_4) {
  FUNC_4(VAR_6);
  return 0;
 }


 if (FUNC_6(!FUNC_9(VAR_11))) {
  if (FUNC_19(!FUNC_18(VAR_6, &VAR_12, &VAR_13))) {
   FUNC_12("Unable to extract msg, defq: %d\n",
         FUNC_13(VAR_10));
   return 0;
  }
  FUNC_4(VAR_6);
 } else {

  if (FUNC_8(VAR_11) == 1)
   FUNC_10(VAR_11, VAR_0);
  else if (FUNC_8(VAR_11) < FUNC_9(VAR_11))
   FUNC_10(VAR_11, VAR_1);
  else
   FUNC_10(VAR_11, VAR_2);

  if (!FUNC_14(VAR_9, &VAR_6)) {

   if (*VAR_9 || FUNC_7(VAR_5))
    return 0;
   FUNC_12("Unable to reassemble tunnel msg\n");
   return FUNC_16(VAR_5, VAR_3);
  }
  VAR_12 = VAR_6;
 }

 do {
  VAR_15 = FUNC_3(VAR_12);
  if (FUNC_19(FUNC_5(VAR_15, VAR_5->drop_point))) {
   FUNC_4(VAR_12);
   continue;
  }
  if (FUNC_19(VAR_15 != VAR_5->drop_point)) {
   FUNC_1(VAR_10, VAR_15, VAR_12);
   continue;
  }

  VAR_5->drop_point++;
  if (!FUNC_15(VAR_5, VAR_12, VAR_7))
   VAR_14 |= FUNC_17(VAR_5, VAR_12, VAR_7, VAR_8);
  if (FUNC_19(VAR_14))
   break;
 } while ((VAR_12 = FUNC_0(VAR_10, VAR_5->drop_point)));

 return VAR_14;
}
