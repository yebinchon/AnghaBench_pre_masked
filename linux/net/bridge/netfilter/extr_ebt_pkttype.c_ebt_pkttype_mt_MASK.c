
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ebt_pkttype_info* matchinfo; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct ebt_pkttype_info {scalar_t__ pkt_type; int invert; } ;



__attribute__((used)) static bool
FUNC_0(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct ebt_pkttype_info *VAR_2 = VAR_1->matchinfo;

 return (VAR_0->pkt_type == VAR_2->pkt_type) ^ VAR_2->invert;
}
