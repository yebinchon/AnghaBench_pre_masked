
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct deferred_action {int actions_len; struct nlattr* actions; struct sw_flow_key pkt_key; struct sk_buff* skb; } ;
struct datapath {int dummy; } ;
struct action_fifo {int dummy; } ;


 struct deferred_action* FUNC_0 (struct action_fifo*) ;
 int FUNC_1 (struct action_fifo*) ;
 scalar_t__ FUNC_2 (struct action_fifo*) ;
 int VAR_0 ;
 int FUNC_3 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 int FUNC_4 (struct sk_buff*,struct sw_flow_key*) ;
 struct action_fifo* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct datapath *VAR_1)
{
 struct action_fifo *VAR_2 = FUNC_5(VAR_0);


 if (FUNC_2(VAR_2))
  return;


 do {
  struct deferred_action *VAR_3 = FUNC_0(VAR_2);
  struct sk_buff *VAR_4 = VAR_3->skb;
  struct sw_flow_key *VAR_5 = &VAR_3->pkt_key;
  const struct nlattr *VAR_6 = VAR_3->actions;
  int VAR_7 = VAR_3->actions_len;

  if (VAR_6)
   FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
  else
   FUNC_4(VAR_4, VAR_5);
 } while (!FUNC_2(VAR_2));


 FUNC_1(VAR_2);
}
