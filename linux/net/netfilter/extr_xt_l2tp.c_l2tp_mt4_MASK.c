
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_action_param {int thoff; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int protocol; } ;




 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*,struct xt_action_param*,int ) ;
 int FUNC_2 (struct sk_buff const*,struct xt_action_param*,int ) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 struct iphdr *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = VAR_2->protocol;


 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_0, VAR_1, VAR_1->thoff);
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_1->thoff);
 }

 return 0;
}
