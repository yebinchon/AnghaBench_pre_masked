
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int owner_nlportid; TYPE_1__* netdev; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
struct cfg80211_nan_match_params {scalar_t__ info; scalar_t__ info_len; int peer_inst_id; int type; int inst_id; scalar_t__ addr; int cookie; } ;
typedef int gfp_t ;
struct TYPE_2__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 int VAR_16 ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct wireless_dev*) ;
 int FUNC_14 (int *) ;
 struct cfg80211_registered_device* FUNC_15 (struct wiphy*) ;

void FUNC_16(struct wireless_dev *VAR_17,
   struct cfg80211_nan_match_params *VAR_18, gfp_t VAR_19)
{
 struct wiphy *VAR_20 = VAR_17->wiphy;
 struct cfg80211_registered_device *VAR_21 = FUNC_15(VAR_20);
 struct nlattr *VAR_22, *VAR_23, *VAR_24;
 struct sk_buff *VAR_25;
 void *VAR_26;

 if (FUNC_0(!VAR_18->inst_id || !VAR_18->peer_inst_id || !VAR_18->addr))
  return;

 VAR_25 = FUNC_12(VAR_15, VAR_19);
 if (!VAR_25)
  return;

 VAR_26 = FUNC_4(VAR_25, 0, 0, 0, VAR_8);
 if (!VAR_26) {
  FUNC_11(VAR_25);
  return;
 }

 if (FUNC_8(VAR_25, VAR_7, VAR_21->wiphy_idx) ||
     (VAR_17->netdev && FUNC_8(VAR_25, VAR_2,
      VAR_17->netdev->ifindex)) ||
     FUNC_9(VAR_25, VAR_6, FUNC_13(VAR_17),
         VAR_5))
  goto nla_put_failure;

 if (FUNC_9(VAR_25, VAR_1, VAR_18->cookie,
         VAR_5) ||
     FUNC_7(VAR_25, VAR_3, VAR_0, VAR_18->addr))
  goto nla_put_failure;

 VAR_22 = FUNC_6(VAR_25, VAR_4);
 if (!VAR_22)
  goto nla_put_failure;

 VAR_23 = FUNC_6(VAR_25,
      VAR_13);
 if (!VAR_23)
  goto nla_put_failure;

 if (FUNC_10(VAR_25, VAR_10, VAR_18->inst_id))
  goto nla_put_failure;

 FUNC_5(VAR_25, VAR_23);

 VAR_24 = FUNC_6(VAR_25,
            VAR_14);
 if (!VAR_24)
  goto nla_put_failure;

 if (FUNC_10(VAR_25, VAR_12, VAR_18->type) ||
     FUNC_10(VAR_25, VAR_10, VAR_18->peer_inst_id))
  goto nla_put_failure;

 if (VAR_18->info && VAR_18->info_len &&
     FUNC_7(VAR_25, VAR_11, VAR_18->info_len,
      VAR_18->info))
  goto nla_put_failure;

 FUNC_5(VAR_25, VAR_24);
 FUNC_5(VAR_25, VAR_22);
 FUNC_1(VAR_25, VAR_26);

 if (!VAR_17->owner_nlportid)
  FUNC_2(&VAR_16, FUNC_14(&VAR_21->wiphy),
     VAR_25, 0, VAR_9, VAR_19);
 else
  FUNC_3(FUNC_14(&VAR_21->wiphy), VAR_25,
    VAR_17->owner_nlportid);

 return;

nla_put_failure:
 FUNC_11(VAR_25);
}
