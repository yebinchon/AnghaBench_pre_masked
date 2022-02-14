
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_2__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int const*,size_t) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct wiphy *VAR_3, struct net_device *VAR_4,
         const u8 *VAR_5, size_t VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_4);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_2(VAR_8->hw.extra_tx_headroom + VAR_6 +
       30 +
       18);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(VAR_9, VAR_8->hw.extra_tx_headroom);
 FUNC_6(VAR_9, VAR_5, VAR_6);

 VAR_9->dev = VAR_4;
 VAR_9->protocol = FUNC_3(VAR_1);
 FUNC_9(VAR_9);
 FUNC_8(VAR_9);

 FUNC_4();
 FUNC_1(VAR_9, VAR_9->dev, 0,
         VAR_2);
 FUNC_5();

 return 0;
}
