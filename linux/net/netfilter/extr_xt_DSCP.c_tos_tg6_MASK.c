
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct xt_tos_target_info {int tos_mask; int tos_value; } ;
struct xt_action_param {struct xt_tos_target_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ipv6hdr*,int ,int) ;
 int FUNC_1 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_2, const struct xt_action_param *VAR_3)
{
 const struct xt_tos_target_info *VAR_4 = VAR_3->targinfo;
 struct ipv6hdr *VAR_5 = FUNC_2(VAR_2);
 u_int8_t VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = (VAR_6 & ~VAR_4->tos_mask) ^ VAR_4->tos_value;

 if (VAR_6 != VAR_7) {
  if (FUNC_3(VAR_2, sizeof(struct iphdr)))
   return VAR_0;
  VAR_5 = FUNC_2(VAR_2);
  FUNC_0(VAR_5, 0, VAR_7);
 }

 return VAR_1;
}
