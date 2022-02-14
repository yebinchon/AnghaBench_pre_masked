
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rate_info {int bw; int mcs; int nss; int he_gi; int he_ru_alloc; int he_dcm; int flags; int legacy; } ;
struct ieee80211_supported_band {TYPE_3__* bitrates; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct TYPE_6__ {int bitrate; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int ) ;




 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_2(struct ieee80211_local *VAR_19, u32 VAR_20,
      struct rate_info *VAR_21)
{
 VAR_21->bw = FUNC_1(VAR_0, VAR_20);

 switch (FUNC_1(VAR_16, VAR_20)) {
 case 128:
  VAR_21->flags = VAR_14;
  VAR_21->mcs = FUNC_1(VAR_17, VAR_20);
  VAR_21->nss = FUNC_1(VAR_18, VAR_20);
  if (FUNC_1(VAR_15, VAR_20))
   VAR_21->flags |= VAR_13;
  break;
 case 130:
  VAR_21->flags = VAR_12;
  VAR_21->mcs = FUNC_1(VAR_6, VAR_20);
  if (FUNC_1(VAR_15, VAR_20))
   VAR_21->flags |= VAR_13;
  break;
 case 129: {
  struct ieee80211_supported_band *VAR_22;
  u16 VAR_23;
  unsigned int VAR_24;
  int VAR_25 = FUNC_1(VAR_7, VAR_20);
  int VAR_26 = FUNC_1(VAR_8, VAR_20);

  VAR_22 = VAR_19->hw.wiphy->bands[VAR_25];
  VAR_23 = VAR_22->bitrates[VAR_26].bitrate;
  if (VAR_21->bw == VAR_10)
   VAR_24 = 2;
  else if (VAR_21->bw == VAR_9)
   VAR_24 = 1;
  else
   VAR_24 = 0;
  VAR_21->legacy = FUNC_0(VAR_23, 1 << VAR_24);
  break;
  }
 case 131:
  VAR_21->flags = VAR_11;
  VAR_21->mcs = FUNC_1(VAR_3, VAR_20);
  VAR_21->nss = FUNC_1(VAR_4, VAR_20);
  VAR_21->he_gi = FUNC_1(VAR_2, VAR_20);
  VAR_21->he_ru_alloc = FUNC_1(VAR_5, VAR_20);
  VAR_21->he_dcm = FUNC_1(VAR_1, VAR_20);
  break;
 }
}
