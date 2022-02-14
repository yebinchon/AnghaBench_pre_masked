
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct TYPE_5__ {int tdls_initiator; } ;
struct sta_info {TYPE_1__ sta; } ;
struct sk_buff {int priority; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int teardown_lock; struct sk_buff* orig_teardown_skb; int teardown_skb; } ;
struct TYPE_8__ {TYPE_3__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__* local; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_6__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;







 int FUNC_1 (struct sk_buff*,struct net_device*,int,int ) ;
 int FUNC_2 (struct sta_info*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct ieee80211_sub_if_data*,int const*,int const,int const,int ,int,int const*,size_t,int const,struct cfg80211_chan_def*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sta_info*,int ) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct sta_info* FUNC_17 (struct ieee80211_sub_if_data*,int const*) ;
 scalar_t__ FUNC_18 (struct sta_info*,int ) ;

__attribute__((used)) static int
FUNC_19(struct wiphy *VAR_8, struct net_device *VAR_9,
    const u8 *VAR_10, u8 VAR_11, u8 VAR_12,
    u16 VAR_13, u32 VAR_14,
    bool VAR_15, const u8 *VAR_16,
    size_t VAR_17, u8 VAR_18,
    struct cfg80211_chan_def *VAR_19)
{
 struct ieee80211_sub_if_data *VAR_20 = FUNC_0(VAR_9);
 struct sk_buff *VAR_21 = ((void*)0);
 struct sta_info *VAR_22;
 u32 VAR_23 = 0;
 int VAR_24 = 0;

 FUNC_10();
 VAR_22 = FUNC_17(VAR_20, VAR_10);


 switch (VAR_11) {
 case 130:
  if (VAR_22) {
   FUNC_12(VAR_22, VAR_6);
   VAR_22->sta.tdls_initiator = 0;
  }

 case 131:
 case 132:
  VAR_15 = 1;
  break;
 case 129:





  if (VAR_22) {
   FUNC_2(VAR_22, VAR_6);
   VAR_22->sta.tdls_initiator = 1;
  }

 case 135:
  VAR_15 = 0;
  break;
 case 128:
 case 134:
 case 133:

  break;
 default:
  VAR_24 = -VAR_1;
  break;
 }

 if (VAR_22 && FUNC_18(VAR_22, VAR_6))
  VAR_15 = 1;

 FUNC_11();
 if (VAR_24 < 0)
  goto fail;

 VAR_21 = FUNC_6(VAR_20, VAR_10, VAR_11,
          VAR_12, VAR_13,
          VAR_15, VAR_16,
          VAR_17, VAR_18,
          VAR_19);
 if (!VAR_21) {
  VAR_24 = -VAR_0;
  goto fail;
 }

 if (VAR_11 == 135) {
  FUNC_7(VAR_20, VAR_21);
  return 0;
 }





 switch (VAR_11) {
 case 130:
 case 129:
  VAR_21->priority = 256 + 2;
  break;
 default:
  VAR_21->priority = 256 + 5;
  break;
 }
 FUNC_14(VAR_21, FUNC_5(VAR_20, VAR_21));






 if ((VAR_11 == 128) &&
     FUNC_4(&VAR_20->local->hw, VAR_5)) {
  bool VAR_25;


  FUNC_10();
  VAR_22 = FUNC_17(VAR_20, VAR_10);
  VAR_25 = VAR_22 && FUNC_18(VAR_22, VAR_7);
  FUNC_11();

  FUNC_15(&VAR_20->u.mgd.teardown_lock);
  if (VAR_25 && !VAR_20->u.mgd.teardown_skb) {

   VAR_23 |= VAR_3 |
     VAR_4;
   VAR_20->u.mgd.teardown_skb = FUNC_13(VAR_21, VAR_2);
   VAR_20->u.mgd.orig_teardown_skb = VAR_21;
  }
  FUNC_16(&VAR_20->u.mgd.teardown_lock);
 }


 FUNC_8();
 FUNC_1(VAR_21, VAR_9, VAR_23, 0);
 FUNC_9();

 return VAR_24;

fail:
 FUNC_3(VAR_21);
 return VAR_24;
}
