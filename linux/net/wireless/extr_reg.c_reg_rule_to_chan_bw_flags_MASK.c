
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct ieee80211_regdomain {int dummy; } ;
struct ieee80211_freq_range {int max_bandwidth_khz; } ;
struct ieee80211_reg_rule {int flags; struct ieee80211_freq_range freq_range; } ;
struct ieee80211_channel {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_freq_range const*,int ,int ) ;
 int FUNC_2 (struct ieee80211_regdomain const*,struct ieee80211_reg_rule const*) ;

__attribute__((used)) static uint32_t FUNC_3(const struct ieee80211_regdomain *VAR_6,
       const struct ieee80211_reg_rule *VAR_7,
       const struct ieee80211_channel *VAR_8)
{
 const struct ieee80211_freq_range *VAR_9 = ((void*)0);
 u32 VAR_10, VAR_11 = 0;

 VAR_9 = &VAR_7->freq_range;

 VAR_10 = VAR_9->max_bandwidth_khz;

 if (VAR_7->flags & VAR_5)
  VAR_10 = FUNC_2(VAR_6, VAR_7);


 if (!FUNC_1(VAR_9,
     FUNC_0(VAR_8->center_freq),
     FUNC_0(10)))
  VAR_11 |= VAR_0;
 if (!FUNC_1(VAR_9,
     FUNC_0(VAR_8->center_freq),
     FUNC_0(20)))
  VAR_11 |= VAR_2;

 if (VAR_10 < FUNC_0(10))
  VAR_11 |= VAR_0;
 if (VAR_10 < FUNC_0(20))
  VAR_11 |= VAR_2;
 if (VAR_10 < FUNC_0(40))
  VAR_11 |= VAR_4;
 if (VAR_10 < FUNC_0(80))
  VAR_11 |= VAR_3;
 if (VAR_10 < FUNC_0(160))
  VAR_11 |= VAR_1;
 return VAR_11;
}
