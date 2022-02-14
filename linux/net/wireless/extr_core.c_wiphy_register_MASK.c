
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u16 ;
struct wiphy_iftype_ext_capab {size_t extended_capabilities_len; size_t* extended_capabilities; } ;
struct wiphy {int interface_modes; int features; int nan_supported_bands; int regulatory_flags; int flags; int bss_select_support; size_t extended_capabilities_len; int num_iftype_ext_capab; size_t* extended_capabilities; struct wiphy_iftype_ext_capab* iftype_ext_capab; struct ieee80211_supported_band** bands; TYPE_6__* addresses; int perm_addr; scalar_t__ max_acl_mac_addrs; int n_addresses; scalar_t__ ap_sme_capa; TYPE_4__* coalesce; TYPE_3__* pmsr_capa; TYPE_1__* wowlan; } ;
struct regulatory_request {char* alpha2; int initiator; int wiphy_idx; } ;
struct TYPE_24__ {int cap; scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {int band; int n_channels; int n_bitrates; int n_iftype_data; struct ieee80211_sband_iftype_data* iftype_data; TYPE_8__* channels; TYPE_7__ ht_cap; } ;
struct TYPE_26__ {int has_he; } ;
struct ieee80211_sband_iftype_data {int types_mask; TYPE_9__ he_cap; } ;
struct TYPE_17__ {int flags; int n_vendor_commands; int registered; int debugfsdir; int dev; int features; TYPE_11__* wowlan; TYPE_10__* vendor_commands; } ;
struct cfg80211_registered_device {TYPE_12__ wiphy; int * rfkill; int list; TYPE_5__* ops; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_25__ {int band; int max_power; int orig_mpwr; int orig_mag; int flags; int orig_flags; } ;
struct TYPE_23__ {int addr; } ;
struct TYPE_22__ {scalar_t__ update_connect_params; int del_pmk; int set_pmk; int set_mac_acl; int del_nan_func; int add_nan_func; int stop_nan; int start_nan; int tdls_cancel_channel_switch; int tdls_channel_switch; } ;
struct TYPE_21__ {scalar_t__ pattern_min_len; scalar_t__ pattern_max_len; int n_patterns; int n_rules; } ;
struct TYPE_19__ {size_t preambles; size_t bandwidths; int non_asap; int asap; scalar_t__ supported; } ;
struct TYPE_20__ {TYPE_2__ ftm; } ;
struct TYPE_18__ {int flags; int tcp; int n_patterns; } ;
struct TYPE_16__ {scalar_t__ pattern_min_len; scalar_t__ pattern_max_len; scalar_t__ n_patterns; } ;
struct TYPE_15__ {int dumpit; int doit; int policy; } ;


 int FUNC_0 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wiphy*) ;
 int VAR_50 ;
 int FUNC_6 (struct wiphy*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct cfg80211_registered_device*,int ) ;
 int FUNC_12 (struct regulatory_request*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (TYPE_12__*,int ) ;
 int FUNC_18 (TYPE_12__*) ;
 int FUNC_19 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_20 (struct wiphy*) ;
 int FUNC_21 (TYPE_12__*) ;
 int FUNC_22 (struct wiphy*) ;

int FUNC_23(struct wiphy *VAR_51)
{
 struct cfg80211_registered_device *VAR_52 = FUNC_20(VAR_51);
 int VAR_53;
 enum nl80211_band VAR_54;
 struct ieee80211_supported_band *VAR_55;
 bool VAR_56 = 0;
 int VAR_57;
 u16 VAR_58 = VAR_51->interface_modes;
 if (FUNC_1((VAR_51->features & VAR_18) &&
      (!VAR_52->ops->tdls_channel_switch ||
       !VAR_52->ops->tdls_cancel_channel_switch)))
  return -VAR_0;

 if (FUNC_1((VAR_51->interface_modes & FUNC_0(VAR_23)) &&
      (!VAR_52->ops->start_nan || !VAR_52->ops->stop_nan ||
       !VAR_52->ops->add_nan_func || !VAR_52->ops->del_nan_func ||
       !(VAR_51->nan_supported_bands & FUNC_0(VAR_5)))))
  return -VAR_0;


 if (FUNC_1(VAR_51->interface_modes & FUNC_0(VAR_28)))
  return -VAR_0;


 if (FUNC_1(VAR_51->pmsr_capa && !VAR_51->pmsr_capa->ftm.supported))
  return -VAR_0;

 if (VAR_51->pmsr_capa && VAR_51->pmsr_capa->ftm.supported) {
  if (FUNC_1(!VAR_51->pmsr_capa->ftm.asap &&
       !VAR_51->pmsr_capa->ftm.non_asap))
   return -VAR_0;
  if (FUNC_1(!VAR_51->pmsr_capa->ftm.preambles ||
       !VAR_51->pmsr_capa->ftm.bandwidths))
   return -VAR_0;
  if (FUNC_1(VAR_51->pmsr_capa->ftm.preambles &
    ~(FUNC_0(VAR_31) |
      FUNC_0(VAR_30) |
      FUNC_0(VAR_32) |
      FUNC_0(VAR_29))))
   return -VAR_0;
  if (FUNC_1(VAR_51->pmsr_capa->ftm.bandwidths &
    ~(FUNC_0(VAR_10) |
      FUNC_0(VAR_9) |
      FUNC_0(VAR_11) |
      FUNC_0(VAR_13) |
      FUNC_0(VAR_14) |
      FUNC_0(VAR_8) |
      FUNC_0(VAR_12) |
      FUNC_0(VAR_7))))
   return -VAR_0;
 }





 if (VAR_51->interface_modes & ~(FUNC_0(VAR_27) |
           FUNC_0(VAR_24) |
           FUNC_0(VAR_20) |
           FUNC_0(VAR_26) |
           FUNC_0(VAR_19) |
           FUNC_0(VAR_25) |
           FUNC_0(VAR_23) |
           FUNC_0(VAR_21) |
           FUNC_0(VAR_22)))
  VAR_51->regulatory_flags |= VAR_39;

 if (FUNC_1((VAR_51->regulatory_flags & VAR_41) &&
      (VAR_51->regulatory_flags &
     (VAR_38 |
      VAR_40 |
      VAR_36 |
      VAR_37))))
  return -VAR_0;

 if (FUNC_1(VAR_51->coalesce &&
      (!VAR_51->coalesce->n_rules ||
       !VAR_51->coalesce->n_patterns) &&
      (!VAR_51->coalesce->pattern_min_len ||
       VAR_51->coalesce->pattern_min_len >
   VAR_51->coalesce->pattern_max_len)))
  return -VAR_0;

 if (FUNC_1(VAR_51->ap_sme_capa &&
      !(VAR_51->flags & VAR_42)))
  return -VAR_0;

 if (FUNC_1(VAR_51->addresses && !VAR_51->n_addresses))
  return -VAR_0;

 if (FUNC_1(VAR_51->addresses &&
      !FUNC_7(VAR_51->perm_addr) &&
      FUNC_9(VAR_51->perm_addr, VAR_51->addresses[0].addr,
      VAR_1)))
  return -VAR_0;

 if (FUNC_1(VAR_51->max_acl_mac_addrs &&
      (!(VAR_51->flags & VAR_42) ||
       !VAR_52->ops->set_mac_acl)))
  return -VAR_0;




 if (FUNC_1(VAR_51->bss_select_support &&
      (VAR_51->bss_select_support & ~(FUNC_0(VAR_46) - 2))))
  return -VAR_0;

 if (FUNC_1(FUNC_17(&VAR_52->wiphy,
         VAR_16) &&
      (!VAR_52->ops->set_pmk || !VAR_52->ops->del_pmk)))
  return -VAR_0;

 if (FUNC_1(!(VAR_52->wiphy.flags & VAR_43) &&
      VAR_52->ops->update_connect_params))
  return -VAR_0;

 if (VAR_51->addresses)
  FUNC_10(VAR_51->perm_addr, VAR_51->addresses[0].addr, VAR_1);


 FUNC_1(!VAR_58);
 VAR_58 &= ((1 << VAR_35) - 1) & ~1;
 if (FUNC_1(VAR_58 != VAR_51->interface_modes))
  VAR_51->interface_modes = VAR_58;

 VAR_53 = FUNC_22(VAR_51);
 if (VAR_53)
  return VAR_53;


 for (VAR_54 = 0; VAR_54 < VAR_34; VAR_54++) {
  u16 VAR_59 = 0;

  VAR_55 = VAR_51->bands[VAR_54];
  if (!VAR_55)
   continue;

  VAR_55->band = VAR_54;
  if (FUNC_1(!VAR_55->n_channels))
   return -VAR_0;




  if (FUNC_1(VAR_54 != VAR_6 &&
       !VAR_55->n_bitrates))
   return -VAR_0;






  if (VAR_47 &&
      VAR_54 == VAR_5 &&
      VAR_55->ht_cap.ht_supported) {
   VAR_55->ht_cap.cap &= ~VAR_3;
   VAR_55->ht_cap.cap &= ~VAR_2;
  }






  if (FUNC_1(VAR_55->n_bitrates > 32))
   return -VAR_0;

  for (VAR_57 = 0; VAR_57 < VAR_55->n_channels; VAR_57++) {
   VAR_55->channels[VAR_57].orig_flags =
    VAR_55->channels[VAR_57].flags;
   VAR_55->channels[VAR_57].orig_mag = VAR_4;
   VAR_55->channels[VAR_57].orig_mpwr =
    VAR_55->channels[VAR_57].max_power;
   VAR_55->channels[VAR_57].band = VAR_54;
  }

  for (VAR_57 = 0; VAR_57 < VAR_55->n_iftype_data; VAR_57++) {
   const struct ieee80211_sband_iftype_data *VAR_60;

   VAR_60 = &VAR_55->iftype_data[VAR_57];

   if (FUNC_1(!VAR_60->types_mask))
    return -VAR_0;
   if (FUNC_1(VAR_59 & VAR_60->types_mask))
    return -VAR_0;


   if (FUNC_1(!VAR_60->he_cap.has_he))
    return -VAR_0;

   VAR_59 |= VAR_60->types_mask;
  }

  VAR_56 = 1;
 }

 if (!VAR_56) {
  FUNC_1(1);
  return -VAR_0;
 }

 for (VAR_57 = 0; VAR_57 < VAR_52->wiphy.n_vendor_commands; VAR_57++) {





  if (FUNC_1(!VAR_52->wiphy.vendor_commands[VAR_57].policy))
   return -VAR_0;
  if (FUNC_1(!VAR_52->wiphy.vendor_commands[VAR_57].doit &&
       !VAR_52->wiphy.vendor_commands[VAR_57].dumpit))
   return -VAR_0;
 }
 FUNC_6(VAR_51);

 VAR_52->wiphy.features |= VAR_17;

 FUNC_15();
 VAR_53 = FUNC_4(&VAR_52->wiphy.dev);
 if (VAR_53) {
  FUNC_16();
  return VAR_53;
 }


 FUNC_19(VAR_51);

 FUNC_8(&VAR_52->list, &VAR_48);
 VAR_49++;


 VAR_52->wiphy.debugfsdir = FUNC_3(FUNC_18(&VAR_52->wiphy),
          VAR_50);

 FUNC_2(VAR_52);
 FUNC_11(VAR_52, VAR_15);

 if (VAR_51->regulatory_flags & VAR_38) {
  struct regulatory_request VAR_61;

  VAR_61.wiphy_idx = FUNC_5(VAR_51);
  VAR_61.initiator = VAR_33;
  VAR_61.alpha2[0] = '9';
  VAR_61.alpha2[1] = '9';

  FUNC_12(&VAR_61);
 }




 if (VAR_51->extended_capabilities_len &&
     VAR_51->num_iftype_ext_capab &&
     VAR_51->iftype_ext_capab) {
  u8 VAR_62, VAR_63;
  const struct wiphy_iftype_ext_capab *VAR_64;

  VAR_64 = VAR_51->iftype_ext_capab;
  for (VAR_63 = 0; VAR_63 < VAR_51->extended_capabilities_len; VAR_63++) {
   if (VAR_64[0].extended_capabilities_len > VAR_63)
    VAR_62 =
     VAR_64[0].extended_capabilities[VAR_63];
   else
    VAR_62 = 0x00;
   for (VAR_57 = 1; VAR_57 < VAR_51->num_iftype_ext_capab; VAR_57++) {
    if (VAR_63 >= VAR_64[VAR_57].extended_capabilities_len) {
     VAR_62 = 0x00;
     break;
    }
    VAR_62 &=
     VAR_64[VAR_57].extended_capabilities[VAR_63];
   }
   if (FUNC_1(VAR_51->extended_capabilities[VAR_63] &
        ~VAR_62))
    break;
  }
 }

 VAR_52->wiphy.registered = 1;
 FUNC_16();

 VAR_53 = FUNC_14(VAR_52->rfkill);
 if (VAR_53) {
  FUNC_13(VAR_52->rfkill);
  VAR_52->rfkill = ((void*)0);
  FUNC_21(&VAR_52->wiphy);
  return VAR_53;
 }

 return 0;
}
