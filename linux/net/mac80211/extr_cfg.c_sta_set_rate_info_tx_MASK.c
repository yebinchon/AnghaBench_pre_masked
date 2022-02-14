
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {TYPE_2__* sdata; } ;
struct rate_info {size_t mcs; int flags; int bw; int legacy; int nss; } ;
struct ieee80211_tx_rate {int flags; size_t idx; } ;
struct ieee80211_supported_band {TYPE_1__* bitrates; } ;
struct TYPE_4__ {int vif; } ;
struct TYPE_3__ {int bitrate; } ;


 int FUNC_0 (int ,int) ;
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
 int VAR_12 ;
 struct ieee80211_supported_band* FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (struct ieee80211_tx_rate const*) ;
 int FUNC_3 (struct ieee80211_tx_rate const*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sta_info *VAR_13,
     const struct ieee80211_tx_rate *VAR_14,
     struct rate_info *VAR_15)
{
 VAR_15->flags = 0;
 if (VAR_14->flags & VAR_3) {
  VAR_15->flags |= VAR_10;
  VAR_15->mcs = VAR_14->idx;
 } else if (VAR_14->flags & VAR_5) {
  VAR_15->flags |= VAR_12;
  VAR_15->mcs = FUNC_2(VAR_14);
  VAR_15->nss = FUNC_3(VAR_14);
 } else {
  struct ieee80211_supported_band *VAR_16;
  int VAR_17 = FUNC_4(&VAR_13->sdata->vif);
  u16 VAR_18;

  VAR_16 = FUNC_1(VAR_13->sdata);
  if (VAR_16) {
   VAR_18 = VAR_16->bitrates[VAR_14->idx].bitrate;
   VAR_15->legacy = FUNC_0(VAR_18, 1 << VAR_17);
  }
 }
 if (VAR_14->flags & VAR_1)
  VAR_15->bw = VAR_8;
 else if (VAR_14->flags & VAR_2)
  VAR_15->bw = VAR_9;
 else if (VAR_14->flags & VAR_0)
  VAR_15->bw = VAR_6;
 else
  VAR_15->bw = VAR_7;
 if (VAR_14->flags & VAR_4)
  VAR_15->flags |= VAR_11;
}
