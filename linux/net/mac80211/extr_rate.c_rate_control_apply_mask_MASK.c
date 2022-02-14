
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_tx_rate {scalar_t__ idx; int flags; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,struct ieee80211_sta*,int *,int *,int *) ;
 int FUNC_1 (scalar_t__*,int *,struct ieee80211_supported_band*,int,int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_2,
        struct ieee80211_sta *VAR_3,
        struct ieee80211_supported_band *VAR_4,
        struct ieee80211_tx_rate *VAR_5,
        int VAR_6)
{
 enum nl80211_chan_width VAR_7;
 u8 VAR_8[VAR_0];
 u32 VAR_9;
 u16 VAR_10, VAR_11[VAR_1];
 int VAR_12;






 if (!FUNC_0(VAR_2, VAR_4, VAR_3, &VAR_9, VAR_8,
       VAR_11))
  return;






 VAR_7 = VAR_2->vif.bss_conf.chandef.width;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

  if (VAR_5[VAR_12].idx < 0)
   break;

  VAR_10 = VAR_5[VAR_12].flags;
  FUNC_1(&VAR_5[VAR_12].idx, &VAR_10, VAR_4,
        VAR_7, VAR_9, VAR_8, VAR_11);
  VAR_5[VAR_12].flags = VAR_10;
 }
}
