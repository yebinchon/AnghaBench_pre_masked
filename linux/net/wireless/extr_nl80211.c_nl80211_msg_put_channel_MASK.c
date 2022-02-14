
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_reg_rule {scalar_t__ has_wmm; } ;
struct ieee80211_channel {int flags; int center_freq; int max_power; int dfs_cac_ms; int dfs_state; int dfs_state_entered; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct ieee80211_reg_rule const*) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int ) ;
 struct ieee80211_reg_rule* FUNC_4 (struct wiphy*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct ieee80211_reg_rule const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_29, struct wiphy *VAR_30,
       struct ieee80211_channel *VAR_31,
       bool VAR_32)
{



 if (!VAR_32 && VAR_31->flags &
     (VAR_4 | VAR_6))
  return 0;

 if (FUNC_7(VAR_29, VAR_16,
   VAR_31->center_freq))
  goto nla_put_failure;

 if ((VAR_31->flags & VAR_1) &&
     FUNC_6(VAR_29, VAR_15))
  goto nla_put_failure;
 if (VAR_31->flags & VAR_10) {
  if (FUNC_6(VAR_29, VAR_26))
   goto nla_put_failure;
  if (FUNC_6(VAR_29, VAR_28))
   goto nla_put_failure;
 }
 if (VAR_31->flags & VAR_11) {
  if (FUNC_6(VAR_29, VAR_27))
   goto nla_put_failure;
  if (VAR_32) {
   u32 VAR_33;

   VAR_33 = FUNC_3(VAR_31->dfs_state_entered);

   if (FUNC_7(VAR_29, VAR_13,
     VAR_31->dfs_state))
    goto nla_put_failure;
   if (FUNC_7(VAR_29, VAR_14,
     VAR_33))
    goto nla_put_failure;
   if (FUNC_7(VAR_29,
     VAR_12,
     VAR_31->dfs_cac_ms))
    goto nla_put_failure;
  }
 }

 if (VAR_32) {
  if ((VAR_31->flags & VAR_8) &&
      FUNC_6(VAR_29, VAR_24))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_9) &&
      FUNC_6(VAR_29, VAR_25))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_7) &&
      FUNC_6(VAR_29, VAR_23))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_5) &&
      FUNC_6(VAR_29, VAR_21))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_2) &&
      FUNC_6(VAR_29, VAR_17))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_3) &&
      FUNC_6(VAR_29, VAR_18))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_6) &&
      FUNC_6(VAR_29, VAR_22))
   goto nla_put_failure;
  if ((VAR_31->flags & VAR_4) &&
      FUNC_6(VAR_29, VAR_20))
   goto nla_put_failure;
 }

 if (FUNC_7(VAR_29, VAR_19,
   FUNC_0(VAR_31->max_power)))
  goto nla_put_failure;

 if (VAR_32) {
  const struct ieee80211_reg_rule *VAR_34 =
   FUNC_4(VAR_30, FUNC_2(VAR_31->center_freq));

  if (!FUNC_1(VAR_34) && VAR_34->has_wmm) {
   if (FUNC_5(VAR_29, VAR_34))
    goto nla_put_failure;
  }
 }

 return 0;

 nla_put_failure:
 return -VAR_0;
}
