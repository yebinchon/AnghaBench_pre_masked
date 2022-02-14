
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int coverage_class; scalar_t__ retry_short; scalar_t__ retry_long; int rts_threshold; int frag_threshold; } ;
struct TYPE_3__ {scalar_t__ short_frame_max_tx_count; scalar_t__ long_frame_max_tx_count; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ieee80211_local*,int) ;
 int FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (struct ieee80211_local*,int ) ;
 int FUNC_5 (struct ieee80211_local*) ;
 struct ieee80211_local* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_12, u32 VAR_13)
{
 struct ieee80211_local *VAR_14 = FUNC_6(VAR_12);
 int VAR_15;

 if (VAR_13 & VAR_5) {
  FUNC_3(VAR_14);

  VAR_15 = FUNC_1(VAR_14, VAR_12->frag_threshold);

  if (VAR_15) {
   FUNC_3(VAR_14);
   return VAR_15;
  }
 }

 if ((VAR_13 & VAR_3) ||
     (VAR_13 & VAR_4)) {
  s16 VAR_16;

  VAR_16 = VAR_13 & VAR_3 ?
     VAR_12->coverage_class : -1;
  VAR_15 = FUNC_0(VAR_14, VAR_16);

  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & VAR_8) {
  VAR_15 = FUNC_2(VAR_14, VAR_12->rts_threshold);

  if (VAR_15)
   return VAR_15;
 }

 if (VAR_13 & VAR_7) {
  if (VAR_12->retry_short > VAR_2)
   return -VAR_0;
  VAR_14->hw.conf.short_frame_max_tx_count = VAR_12->retry_short;
 }
 if (VAR_13 & VAR_6) {
  if (VAR_12->retry_long > VAR_2)
   return -VAR_0;
  VAR_14->hw.conf.long_frame_max_tx_count = VAR_12->retry_long;
 }
 if (VAR_13 &
     (VAR_7 | VAR_6))
  FUNC_4(VAR_14, VAR_1);

 if (VAR_13 & (VAR_9 |
         VAR_10 |
         VAR_11))
  FUNC_5(VAR_14);

 return 0;
}
