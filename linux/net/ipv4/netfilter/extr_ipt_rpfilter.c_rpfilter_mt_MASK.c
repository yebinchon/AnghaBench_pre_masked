
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rpfilter_info {int flags; } ;
struct xt_action_param {struct xt_rpfilter_info* matchinfo; } ;
struct sk_buff {int mark; } ;
struct iphdr {int tos; int daddr; int saddr; } ;
struct flowi4 {int flowi4_oif; int flowi4_scope; int flowi4_tos; int flowi4_mark; int saddr; int daddr; int flowi4_iif; } ;
typedef int flow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct flowi4*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff const*,int ) ;
 int FUNC_9 (int ,struct flowi4*,int ,int) ;
 int FUNC_10 (struct xt_action_param*) ;
 int FUNC_11 (struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_12(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct xt_rpfilter_info *VAR_6;
 const struct iphdr *VAR_7;
 struct flowi4 VAR_8;
 bool VAR_9;

 VAR_6 = VAR_5->matchinfo;
 VAR_9 = VAR_6->flags & VAR_2;

 if (FUNC_8(VAR_4, FUNC_10(VAR_5)))
  return 1 ^ VAR_9;

 VAR_7 = FUNC_1(VAR_4);
 if (FUNC_4(VAR_7->saddr)) {
  if (FUNC_2(VAR_7->daddr) ||
      FUNC_3(VAR_7->daddr))
   return 1 ^ VAR_9;
 }

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.flowi4_iif = VAR_0;
 VAR_8.daddr = VAR_7->saddr;
 VAR_8.saddr = FUNC_7(VAR_7->daddr);
 VAR_8.flowi4_mark = VAR_6->flags & VAR_3 ? VAR_4->mark : 0;
 VAR_8.flowi4_tos = FUNC_0(VAR_7->tos);
 VAR_8.flowi4_scope = VAR_1;
 VAR_8.flowi4_oif = FUNC_5(FUNC_10(VAR_5));

 return FUNC_9(FUNC_11(VAR_5), &VAR_8, FUNC_10(VAR_5), VAR_6->flags) ^ VAR_9;
}
