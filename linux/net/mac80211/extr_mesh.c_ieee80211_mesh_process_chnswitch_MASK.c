
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ u32 ;
struct ieee802_11_elems {int dummy; } ;
struct ieee80211_supported_band {int band; } ;
struct TYPE_13__ {int width; } ;
struct TYPE_15__ {TYPE_11__ chandef; } ;
struct TYPE_16__ {TYPE_2__ bss_conf; int addr; } ;
struct TYPE_18__ {scalar_t__ dot11MeshTTL; } ;
struct ieee80211_if_mesh {scalar_t__ chsw_ttl; scalar_t__ pre_value; int csa_role; TYPE_5__ mshcfg; int userspace_handles_dfs; } ;
struct TYPE_14__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_7__* local; TYPE_3__ vif; TYPE_1__ u; } ;
struct TYPE_21__ {TYPE_4__* chan; int center_freq2; int center_freq1; int width; } ;
struct ieee80211_csa_ie {scalar_t__ reason_code; int mode; scalar_t__ ttl; scalar_t__ pre_value; int count; TYPE_8__ chandef; } ;
struct cfg80211_csa_settings {int radar_required; int block_tx; TYPE_8__ chandef; int count; } ;
typedef int params ;
struct TYPE_19__ {int wiphy; } ;
struct TYPE_20__ {TYPE_6__ hw; } ;
struct TYPE_17__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_8__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_8__*,TYPE_11__*) ;
 int FUNC_2 (int ,TYPE_8__*,int ) ;
 int FUNC_3 (int ,TYPE_8__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct cfg80211_csa_settings*) ;
 struct ieee80211_supported_band* FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*,int ,scalar_t__,int ,struct ieee80211_csa_ie*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,...) ;
 int FUNC_9 (struct cfg80211_csa_settings*,int ,int) ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_12(struct ieee80211_sub_if_data *VAR_8,
     struct ieee802_11_elems *VAR_9, bool VAR_10)
{
 struct cfg80211_csa_settings VAR_11;
 struct ieee80211_csa_ie VAR_12;
 struct ieee80211_if_mesh *VAR_13 = &VAR_8->u.mesh;
 struct ieee80211_supported_band *VAR_14;
 int VAR_15;
 u32 VAR_16;

 FUNC_10(VAR_8);

 VAR_14 = FUNC_5(VAR_8);
 if (!VAR_14)
  return 0;

 VAR_16 = 0;
 switch (VAR_8->vif.bss_conf.chandef.width) {
 case 129:
  VAR_16 |= VAR_3;

 case 130:
  VAR_16 |= VAR_2;

 case 128:
  VAR_16 |= VAR_4;
  break;
 default:
  break;
 }

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_15 = FUNC_7(VAR_8, VAR_9, VAR_14->band,
        VAR_16, VAR_8->vif.addr,
        &VAR_12);
 if (VAR_15 < 0)
  return 0;
 if (VAR_15)
  return 0;




 if (VAR_12.reason_code == VAR_7)
  FUNC_6(VAR_8);

 VAR_11.chandef = VAR_12.chandef;
 VAR_11.count = VAR_12.count;

 if (!FUNC_2(VAR_8->local->hw.wiphy, &VAR_11.chandef,
         VAR_0) ||
     !FUNC_3(VAR_8->local->hw.wiphy, &VAR_11.chandef,
         VAR_5)) {
  FUNC_11(VAR_8,
      "mesh STA %pM switches to unsupported channel (%d MHz, width:%d, CF1/2: %d/%d MHz), aborting\n",
      VAR_8->vif.addr,
      VAR_11.chandef.chan->center_freq,
      VAR_11.chandef.width,
      VAR_11.chandef.center_freq1,
      VAR_11.chandef.center_freq2);
  return 0;
 }

 VAR_15 = FUNC_0(VAR_8->local->hw.wiphy,
         &VAR_11.chandef,
         VAR_5);
 if (VAR_15 < 0)
  return 0;
 if (VAR_15 > 0 && !VAR_13->userspace_handles_dfs) {
  FUNC_11(VAR_8,
      "mesh STA %pM switches to channel requiring DFS (%d MHz, width:%d, CF1/2: %d/%d MHz), aborting\n",
      VAR_8->vif.addr,
      VAR_11.chandef.chan->center_freq,
      VAR_11.chandef.width,
      VAR_11.chandef.center_freq1,
      VAR_11.chandef.center_freq2);
  return 0;
 }

 VAR_11.radar_required = VAR_15;

 if (FUNC_1(&VAR_11.chandef,
           &VAR_8->vif.bss_conf.chandef)) {
  FUNC_8(VAR_8,
    "received csa with an identical chandef, ignoring\n");
  return 1;
 }

 FUNC_8(VAR_8,
   "received channel switch announcement to go to channel %d MHz\n",
   VAR_11.chandef.chan->center_freq);

 VAR_11.block_tx = VAR_12.mode & VAR_6;
 if (VAR_10) {
  VAR_13->chsw_ttl = VAR_12.ttl - 1;
  if (VAR_13->pre_value >= VAR_12.pre_value)
   return 0;
  VAR_13->pre_value = VAR_12.pre_value;
 }

 if (VAR_13->chsw_ttl >= VAR_13->mshcfg.dot11MeshTTL)
  return 0;

 VAR_13->csa_role = VAR_1;

 if (FUNC_4(VAR_8->local->hw.wiphy, VAR_8->dev,
         &VAR_11) < 0)
  return 0;

 return 1;
}
