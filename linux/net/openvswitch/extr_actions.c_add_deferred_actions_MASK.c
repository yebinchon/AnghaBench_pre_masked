
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct deferred_action {int actions_len; struct sw_flow_key pkt_key; struct nlattr const* actions; struct sk_buff* skb; } ;
struct action_fifo {int dummy; } ;


 struct deferred_action* FUNC_0 (struct action_fifo*) ;
 int VAR_0 ;
 struct action_fifo* FUNC_1 (int ) ;

__attribute__((used)) static struct deferred_action *FUNC_2(struct sk_buff *VAR_1,
        const struct sw_flow_key *VAR_2,
        const struct nlattr *VAR_3,
        const int VAR_4)
{
 struct action_fifo *VAR_5;
 struct deferred_action *VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6) {
  VAR_6->skb = VAR_1;
  VAR_6->actions = VAR_3;
  VAR_6->actions_len = VAR_4;
  VAR_6->pkt_key = *VAR_2;
 }

 return VAR_6;
}
