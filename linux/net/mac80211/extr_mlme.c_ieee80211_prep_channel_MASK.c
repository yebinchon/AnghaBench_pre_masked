
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct TYPE_12__ {scalar_t__ vht_supported; } ;
struct TYPE_11__ {scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {size_t n_channels; TYPE_6__* channels; TYPE_5__ vht_cap; TYPE_4__ ht_cap; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int smps_mode; int needed_rx_chains; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_10__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int mtx; int rx_chains; TYPE_3__ hw; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_he_operation {int dummy; } ;
struct cfg80211_chan_def {scalar_t__ width; } ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {TYPE_7__* channel; int ies; } ;
struct TYPE_14__ {size_t band; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int* FUNC_0 (int ,int ,int ) ;
 int* FUNC_1 (struct cfg80211_bss*,int ) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,TYPE_7__*,struct ieee80211_ht_operation const*,struct ieee80211_vht_operation const*,struct ieee80211_he_operation const*,struct cfg80211_chan_def*,int) ;
 int FUNC_4 (struct ieee80211_supported_band*) ;
 int const FUNC_5 (int const*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct cfg80211_bss*) ;
 int FUNC_7 (struct ieee80211_supported_band*,struct ieee80211_he_operation const*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct cfg80211_bss_ies* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*) ;

__attribute__((used)) static int FUNC_16(struct ieee80211_sub_if_data *VAR_18,
      struct cfg80211_bss *VAR_19)
{
 struct ieee80211_local *VAR_20 = VAR_18->local;
 struct ieee80211_if_managed *VAR_21 = &VAR_18->u.mgd;
 const struct ieee80211_ht_cap *VAR_22 = ((void*)0);
 const struct ieee80211_ht_operation *VAR_23 = ((void*)0);
 const struct ieee80211_vht_operation *VAR_24 = ((void*)0);
 const struct ieee80211_he_operation *VAR_25 = ((void*)0);
 struct ieee80211_supported_band *VAR_26;
 struct cfg80211_chan_def VAR_27;
 int VAR_28;
 u32 VAR_29;
 bool VAR_30;

 VAR_26 = VAR_20->hw.wiphy->bands[VAR_19->channel->band];

 VAR_21->flags &= ~(VAR_5 |
     VAR_6 |
     VAR_4);

 FUNC_13();

 if (!(VAR_21->flags & VAR_8) &&
     VAR_26->ht_cap.ht_supported) {
  const u8 *VAR_31, *VAR_32;

  VAR_31 = FUNC_1(VAR_19, VAR_15);
  if (VAR_31 && VAR_31[1] >= sizeof(*VAR_23))
   VAR_23 = (void *)(VAR_31 + 2);

  VAR_32 = FUNC_1(VAR_19, VAR_14);
  if (VAR_32 && VAR_32[1] >= sizeof(*VAR_22))
   VAR_22 = (void *)(VAR_32 + 2);

  if (!VAR_22) {
   VAR_21->flags |= VAR_8;
   VAR_23 = ((void*)0);
  }
 }

 if (!(VAR_21->flags & VAR_9) &&
     VAR_26->vht_cap.vht_supported) {
  const u8 *VAR_33, *VAR_34;

  VAR_33 = FUNC_1(VAR_19,
         VAR_17);
  if (VAR_33 && VAR_33[1] >= sizeof(*VAR_24))
   VAR_24 = (void *)(VAR_33 + 2);
  if (VAR_24 && !VAR_23) {
   VAR_24 = ((void*)0);
   FUNC_15(VAR_18,
       "AP advertised VHT without HT, disabling both\n");
   VAR_21->flags |= VAR_8;
   VAR_21->flags |= VAR_9;
  }

  VAR_34 = FUNC_1(VAR_19, VAR_16);
  if (!VAR_34 || VAR_34[1] < sizeof(struct ieee80211_vht_cap)) {
   VAR_21->flags |= VAR_9;
   VAR_24 = ((void*)0);
  }
 }

 if (!FUNC_4(VAR_26))
  VAR_21->flags |= VAR_7;

 if (!(VAR_21->flags & VAR_7)) {
  const struct cfg80211_bss_ies *VAR_35;
  const u8 *VAR_36;

  VAR_35 = FUNC_12(VAR_19->ies);
  VAR_36 = FUNC_0(VAR_13,
        VAR_35->data, VAR_35->len);
  if (VAR_36 &&
      VAR_36[1] == FUNC_5(&VAR_36[3]))
   VAR_25 = (void *)(VAR_36 + 3);
  else
   VAR_25 = ((void*)0);

  if (!FUNC_7(VAR_26, VAR_25))
   VAR_21->flags |= VAR_7;
 }


 VAR_30 = 0;
 for (VAR_29 = 0; VAR_29 < VAR_26->n_channels; VAR_29++) {
  if (VAR_26->channels[VAR_29].flags & (VAR_1 |
      VAR_2))
   continue;

  VAR_30 = 1;
  break;
 }

 if (!VAR_30)
  VAR_21->flags |= VAR_9;

 VAR_21->flags |= FUNC_3(VAR_18, VAR_26,
           VAR_19->channel,
           VAR_23, VAR_24, VAR_25,
           &VAR_27, 0);

 VAR_18->needed_rx_chains = FUNC_9(FUNC_6(VAR_18, VAR_19),
          VAR_20->rx_chains);

 FUNC_14();


 VAR_18->smps_mode = VAR_3;

 FUNC_10(&VAR_20->mtx);





 VAR_28 = FUNC_8(VAR_18, &VAR_27,
     VAR_0);


 if (VAR_27.width == VAR_12 ||
     VAR_27.width == VAR_10)
  goto out;

 while (VAR_28 && VAR_27.width != VAR_11) {
  VAR_21->flags |= FUNC_2(&VAR_27);
  VAR_28 = FUNC_8(VAR_18, &VAR_27,
      VAR_0);
 }
 out:
 FUNC_11(&VAR_20->mtx);
 return VAR_28;
}
