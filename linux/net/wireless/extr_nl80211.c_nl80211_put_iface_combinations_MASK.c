
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int n_iface_combinations; struct ieee80211_iface_combination* iface_combinations; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_iface_combination {int n_limits; scalar_t__ beacon_int_min_gcd; scalar_t__ radar_detect_regions; scalar_t__ radar_detect_widths; scalar_t__ max_interfaces; scalar_t__ num_different_channels; scalar_t__ beacon_int_infra_match; TYPE_1__* limits; } ;
struct TYPE_2__ {int types; scalar_t__ max; } ;


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
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_11,
       struct sk_buff *VAR_12,
       bool VAR_13)
{
 struct nlattr *VAR_14;
 int VAR_15, VAR_16;

 VAR_14 = FUNC_2(VAR_12,
       VAR_1);
 if (!VAR_14)
  goto nla_put_failure;

 for (VAR_15 = 0; VAR_15 < VAR_11->n_iface_combinations; VAR_15++) {
  const struct ieee80211_iface_combination *VAR_17;
  struct nlattr *VAR_18, *VAR_19;

  VAR_17 = &VAR_11->iface_combinations[VAR_15];

  VAR_18 = FUNC_2(VAR_12, VAR_15 + 1);
  if (!VAR_18)
   goto nla_put_failure;

  VAR_19 = FUNC_2(VAR_12,
        VAR_3);
  if (!VAR_19)
   goto nla_put_failure;

  for (VAR_16 = 0; VAR_16 < VAR_17->n_limits; VAR_16++) {
   struct nlattr *VAR_20;

   VAR_20 = FUNC_2(VAR_12, VAR_16 + 1);
   if (!VAR_20)
    goto nla_put_failure;
   if (FUNC_4(VAR_12, VAR_9,
     VAR_17->limits[VAR_16].max))
    goto nla_put_failure;
   if (FUNC_0(VAR_12, VAR_10,
      VAR_17->limits[VAR_16].types))
    goto nla_put_failure;
   FUNC_1(VAR_12, VAR_20);
  }

  FUNC_1(VAR_12, VAR_19);

  if (VAR_17->beacon_int_infra_match &&
      FUNC_3(VAR_12, VAR_8))
   goto nla_put_failure;
  if (FUNC_4(VAR_12, VAR_5,
    VAR_17->num_different_channels) ||
      FUNC_4(VAR_12, VAR_4,
    VAR_17->max_interfaces))
   goto nla_put_failure;
  if (VAR_13 &&
      (FUNC_4(VAR_12, VAR_7,
    VAR_17->radar_detect_widths) ||
       FUNC_4(VAR_12, VAR_6,
    VAR_17->radar_detect_regions)))
   goto nla_put_failure;
  if (VAR_17->beacon_int_min_gcd &&
      FUNC_4(VAR_12, VAR_2,
    VAR_17->beacon_int_min_gcd))
   goto nla_put_failure;

  FUNC_1(VAR_12, VAR_18);
 }

 FUNC_1(VAR_12, VAR_14);

 return 0;
nla_put_failure:
 return -VAR_0;
}
