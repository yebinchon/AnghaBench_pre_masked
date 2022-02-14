
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct ieee80211_reg_rule {TYPE_2__ wmm_rule; } ;
struct TYPE_3__ {int cot; int aifsn; int cw_max; int cw_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7,
         const struct ieee80211_reg_rule *VAR_8)
{
 int VAR_9;
 struct nlattr *VAR_10 =
  FUNC_1(VAR_7, VAR_2);

 if (!VAR_10)
  goto nla_put_failure;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  struct nlattr *VAR_11 = FUNC_1(VAR_7, VAR_9);

  if (!VAR_11)
   goto nla_put_failure;

  if (FUNC_2(VAR_7, VAR_5,
    VAR_8->wmm_rule.client[VAR_9].cw_min) ||
      FUNC_2(VAR_7, VAR_4,
    VAR_8->wmm_rule.client[VAR_9].cw_max) ||
      FUNC_3(VAR_7, VAR_3,
          VAR_8->wmm_rule.client[VAR_9].aifsn) ||
      FUNC_2(VAR_7, VAR_6,
           VAR_8->wmm_rule.client[VAR_9].cot))
   goto nla_put_failure;

  FUNC_0(VAR_7, VAR_11);
 }
 FUNC_0(VAR_7, VAR_10);

 return 0;

nla_put_failure:
 return -VAR_0;
}
