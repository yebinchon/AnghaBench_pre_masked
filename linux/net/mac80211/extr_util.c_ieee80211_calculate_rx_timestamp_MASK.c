
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u16 ;
struct rate_info {size_t mcs; int legacy; int flags; int nss; int bw; } ;
struct ieee80211_supported_band {TYPE_3__* bitrates; } ;
struct ieee80211_rx_status {int mactime; int encoding; size_t rate_idx; int enc_flags; size_t band; int flag; int nss; int bw; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef int ri ;
struct TYPE_6__ {int bitrate; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*,unsigned long long,size_t,int ) ;
 unsigned int FUNC_3 (struct rate_info*) ;
 int FUNC_4 (struct ieee80211_rx_status*) ;
 int FUNC_5 (struct rate_info*,int ,int) ;

u64 FUNC_6(struct ieee80211_local *VAR_8,
         struct ieee80211_rx_status *VAR_9,
         unsigned int VAR_10,
         unsigned int VAR_11)
{
 u64 VAR_12 = VAR_9->mactime;
 struct rate_info VAR_13;
 u16 VAR_14;

 if (FUNC_1(!FUNC_4(VAR_9)))
  return 0;

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));

 VAR_13.bw = VAR_9->bw;


 switch (VAR_9->encoding) {
 case 130:
  VAR_13.mcs = VAR_9->rate_idx;
  VAR_13.flags |= VAR_1;
  if (VAR_9->enc_flags & VAR_5)
   VAR_13.flags |= VAR_2;
  break;
 case 128:
  VAR_13.flags |= VAR_3;
  VAR_13.mcs = VAR_9->rate_idx;
  VAR_13.nss = VAR_9->nss;
  if (VAR_9->enc_flags & VAR_5)
   VAR_13.flags |= VAR_2;
  break;
 default:
  FUNC_1(1);

 case 129: {
  struct ieee80211_supported_band *VAR_15;
  int VAR_16 = 0;
  int VAR_17;

  switch (VAR_9->bw) {
  case 132:
   VAR_16 = 1;
   break;
  case 131:
   VAR_16 = 2;
   break;
  }

  VAR_15 = VAR_8->hw.wiphy->bands[VAR_9->band];
  VAR_17 = VAR_15->bitrates[VAR_9->rate_idx].bitrate;
  VAR_13.legacy = FUNC_0(VAR_17, (1 << VAR_16));

  if (VAR_9->flag & VAR_7) {

   if (VAR_9->band == VAR_0) {
    VAR_12 += 20 << VAR_16;
    VAR_11 += 2;
   } else if (VAR_9->enc_flags & VAR_4) {
    VAR_12 += 96;
   } else {
    VAR_12 += 192;
   }
  }
  break;
  }
 }

 VAR_14 = FUNC_3(&VAR_13);
 if (FUNC_2(!VAR_14,
        "Invalid bitrate: flags=0x%llx, idx=%d, vht_nss=%d\n",
        (unsigned long long)VAR_9->flag, VAR_9->rate_idx,
        VAR_9->nss))
  return 0;


 if (VAR_9->flag & VAR_6)
  VAR_12 -= VAR_10 * 8 * 10 / VAR_14;

 VAR_12 += VAR_11 * 8 * 10 / VAR_14;

 return VAR_12;
}
