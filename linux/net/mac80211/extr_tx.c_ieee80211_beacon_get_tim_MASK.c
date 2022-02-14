
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_mutable_offsets {int tim_length; int tim_offset; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int monitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_mutable_offsets*,int) ;
 TYPE_1__* FUNC_1 (struct ieee80211_hw*) ;
 struct ieee80211_supported_band* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (TYPE_1__*,struct sk_buff*,struct ieee80211_supported_band*,int,int,int,int *) ;
 int FUNC_5 (struct ieee80211_vif*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      u16 *VAR_4, u16 *VAR_5)
{
 struct ieee80211_mutable_offsets VAR_6 = {};
 struct sk_buff *VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_6, 0);
 struct sk_buff *VAR_8;
 struct ieee80211_supported_band *VAR_9;
 int VAR_10;

 if (!VAR_7)
  return VAR_7;

 if (VAR_4)
  *VAR_4 = VAR_6.tim_offset;

 if (VAR_5)
  *VAR_5 = VAR_6.tim_length;

 if (FUNC_3(VAR_2, VAR_0) ||
     !FUNC_1(VAR_2)->monitors)
  return VAR_7;


 VAR_8 = FUNC_6(VAR_7, VAR_1);
 if (!VAR_8)
  return VAR_7;

 VAR_10 = FUNC_5(VAR_3);
 VAR_9 = FUNC_2(FUNC_7(VAR_3));
 if (!VAR_9)
  return VAR_7;

 FUNC_4(FUNC_1(VAR_2), VAR_8, VAR_9, 1, VAR_10, 0,
        ((void*)0));

 return VAR_7;
}
