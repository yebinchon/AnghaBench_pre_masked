
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;
struct genl_info {scalar_t__* attrs; int snd_seq; int snd_portid; } ;
struct cfg80211_registered_device {struct wiphy wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cfg80211_registered_device*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct cfg80211_registered_device*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 struct cfg80211_registered_device* FUNC_3 (int ,struct genl_info*) ;
 int VAR_10 ;
 int FUNC_4 (struct genl_info*) ;
 int FUNC_5 (struct sk_buff*,void*) ;
 int FUNC_6 (struct sk_buff*,struct genl_info*) ;
 int FUNC_7 (struct wiphy*) ;
 struct ieee80211_regdomain* FUNC_8 (struct wiphy*) ;
 scalar_t__ FUNC_9 (struct ieee80211_regdomain const*,struct sk_buff*) ;
 void* FUNC_10 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,size_t,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;
 struct ieee80211_regdomain* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 const struct ieee80211_regdomain *VAR_13 = ((void*)0);
 struct cfg80211_registered_device *VAR_14;
 struct wiphy *VAR_15 = ((void*)0);
 struct sk_buff *VAR_16;
 void *VAR_17;

 VAR_16 = FUNC_13(VAR_8, VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_10(VAR_16, VAR_12->snd_portid, VAR_12->snd_seq, 0,
        VAR_6);
 if (!VAR_17)
  goto put_failure;

 if (VAR_12->attrs[VAR_5]) {
  bool VAR_18;

  VAR_14 = FUNC_3(FUNC_4(VAR_12), VAR_12);
  if (FUNC_0(VAR_14)) {
   FUNC_12(VAR_16);
   return FUNC_1(VAR_14);
  }

  VAR_15 = &VAR_14->wiphy;
  VAR_18 = VAR_15->regulatory_flags &
          VAR_9;
  VAR_13 = FUNC_8(VAR_15);


  if (FUNC_2(!VAR_13 && VAR_18)) {
   FUNC_12(VAR_16);
   return -VAR_0;
  }

  if (VAR_13 &&
      FUNC_11(VAR_16, VAR_5, FUNC_7(VAR_15)))
   goto nla_put_failure;
 }

 if (!VAR_15 && FUNC_17() &&
     FUNC_11(VAR_16, VAR_4,
   VAR_7))
  goto nla_put_failure;

 FUNC_15();

 if (!VAR_13)
  VAR_13 = FUNC_14(VAR_10);

 if (FUNC_9(VAR_13, VAR_16))
  goto nla_put_failure_rcu;

 FUNC_16();

 FUNC_5(VAR_16, VAR_17);
 return FUNC_6(VAR_16, VAR_12);

nla_put_failure_rcu:
 FUNC_16();
nla_put_failure:
put_failure:
 FUNC_12(VAR_16);
 return -VAR_1;
}
