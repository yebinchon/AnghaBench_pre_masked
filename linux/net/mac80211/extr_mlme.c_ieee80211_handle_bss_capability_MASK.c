
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct ieee80211_bss_conf {int use_cts_prot; int use_short_preamble; int use_short_slot; } ;
struct TYPE_2__ {struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_supported_band* FUNC_0 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static u32 FUNC_1(struct ieee80211_sub_if_data *VAR_8,
        u16 VAR_9, bool VAR_10, u8 VAR_11)
{
 struct ieee80211_bss_conf *VAR_12 = &VAR_8->vif.bss_conf;
 struct ieee80211_supported_band *VAR_13;
 u32 VAR_14 = 0;
 bool VAR_15;
 bool VAR_16;
 bool VAR_17;

 VAR_13 = FUNC_0(VAR_8);
 if (!VAR_13)
  return VAR_14;

 if (VAR_10) {
  VAR_15 = (VAR_11 & VAR_7) != 0;
  VAR_16 = (VAR_11 & VAR_6) == 0;
 } else {
  VAR_15 = 0;
  VAR_16 = !!(VAR_9 & VAR_4);
 }

 VAR_17 = !!(VAR_9 & VAR_5);
 if (VAR_13->band == VAR_3)
  VAR_17 = 1;

 if (VAR_15 != VAR_12->use_cts_prot) {
  VAR_12->use_cts_prot = VAR_15;
  VAR_14 |= VAR_0;
 }

 if (VAR_16 != VAR_12->use_short_preamble) {
  VAR_12->use_short_preamble = VAR_16;
  VAR_14 |= VAR_1;
 }

 if (VAR_17 != VAR_12->use_short_slot) {
  VAR_12->use_short_slot = VAR_17;
  VAR_14 |= VAR_2;
 }

 return VAR_14;
}
