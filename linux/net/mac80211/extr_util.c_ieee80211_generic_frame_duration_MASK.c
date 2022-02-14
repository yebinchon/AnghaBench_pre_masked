
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {int use_short_preamble; } ;
struct TYPE_3__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_1__ vif; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,size_t,int ,int,int,int) ;
 int FUNC_2 (struct ieee80211_vif*) ;
 struct ieee80211_sub_if_data* FUNC_3 (struct ieee80211_vif*) ;

__le16 FUNC_4(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3,
     enum nl80211_band VAR_4,
     size_t VAR_5,
     struct ieee80211_rate *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7;
 u16 VAR_8;
 int VAR_9, VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_9 = 0;
 if (VAR_3) {
  VAR_7 = FUNC_3(VAR_3);
  VAR_11 = VAR_7->vif.bss_conf.use_short_preamble;
  if (VAR_7->flags & VAR_1)
   VAR_9 = VAR_6->flags & VAR_0;
  VAR_10 = FUNC_2(VAR_3);
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6->bitrate, VAR_9,
           VAR_11, VAR_10);

 return FUNC_0(VAR_8);
}
