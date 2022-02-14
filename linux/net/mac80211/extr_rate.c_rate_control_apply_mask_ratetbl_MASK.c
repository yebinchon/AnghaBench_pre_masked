
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sta_info {TYPE_5__* sdata; int sta; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta_rates {TYPE_4__* rate; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
struct TYPE_6__ {int width; } ;
struct TYPE_7__ {TYPE_1__ chandef; } ;
struct TYPE_8__ {TYPE_2__ bss_conf; } ;
struct TYPE_10__ {TYPE_3__ vif; } ;
struct TYPE_9__ {scalar_t__ idx; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,struct ieee80211_supported_band*,int *,int *,int *,int *) ;
 int FUNC_1 (scalar_t__*,int *,struct ieee80211_supported_band*,int,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct sta_info *VAR_3,
    struct ieee80211_supported_band *VAR_4,
    struct ieee80211_sta_rates *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u8 VAR_8[VAR_0];
 u16 VAR_9[VAR_2];
 enum nl80211_chan_width VAR_10;

 if (!FUNC_0(VAR_3->sdata, VAR_4, &VAR_3->sta, &VAR_7,
       VAR_8, VAR_9))
  return;

 VAR_10 = VAR_3->sdata->vif.bss_conf.chandef.width;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->rate[VAR_6].idx < 0)
   break;

  FUNC_1(&VAR_5->rate[VAR_6].idx, &VAR_5->rate[VAR_6].flags,
        VAR_4, VAR_10, VAR_7, VAR_8,
        VAR_9);
 }
}
