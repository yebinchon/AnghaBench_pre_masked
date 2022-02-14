
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct wiphy_iftype_ext_capab {int iftype; int extended_capabilities_len; struct nl80211_vendor_cmd_info const* extended_capabilities_mask; struct nl80211_vendor_cmd_info const* extended_capabilities; } ;
struct sk_buff {int dummy; } ;
typedef void nlattr ;
struct nl80211_vendor_cmd_info {int dummy; } ;
struct nl80211_dump_wiphy_state {int split_start; int band_start; int chan_start; int capa_start; int split; } ;
struct ieee80211_txrx_stypes {int dummy; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_txq_stats {int dummy; } ;
struct TYPE_11__ {int frag_threshold; int rts_threshold; int max_sched_scan_plans; int max_sched_scan_plan_interval; int max_sched_scan_plan_iterations; int flags; int n_cipher_suites; int available_antennas_tx; int available_antennas_rx; int probe_resp_offload; int features; int max_remain_on_channel_duration; int ap_sme_capa; int max_acl_mac_addrs; int extended_capabilities_len; int n_addresses; int max_ap_assoc_sta; int n_vendor_commands; int n_vendor_events; int regulatory_flags; int max_sched_scan_reqs; int bss_select_support; int num_iftype_ext_capab; int nan_supported_bands; int txq_limit; int txq_memory_limit; int txq_quantum; int n_akm_suites; struct nl80211_vendor_cmd_info const* akm_suites; struct wiphy_iftype_ext_capab* iftype_ext_capab; struct nl80211_vendor_cmd_info const* ext_features; int max_num_csa_counters; struct nl80211_vendor_cmd_info* vendor_events; TYPE_3__* vendor_commands; TYPE_2__* addresses; struct nl80211_vendor_cmd_info const* addr_mask; struct nl80211_vendor_cmd_info const* perm_addr; struct nl80211_vendor_cmd_info const* vht_capa_mod_mask; struct nl80211_vendor_cmd_info const* extended_capabilities_mask; struct nl80211_vendor_cmd_info const* extended_capabilities; struct nl80211_vendor_cmd_info const* ht_capa_mod_mask; int software_iftypes; struct ieee80211_supported_band** bands; int interface_modes; int max_num_pmkids; struct nl80211_vendor_cmd_info const* cipher_suites; int max_match_sets; int max_sched_scan_ie_len; int max_scan_ie_len; int max_sched_scan_ssids; int max_scan_ssids; int coverage_class; int retry_long; int retry_short; struct ieee80211_txrx_stypes* mgmt_stypes; } ;
struct cfg80211_registered_device {int wiphy_idx; TYPE_4__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_10__ {struct nl80211_vendor_cmd_info info; } ;
struct TYPE_9__ {struct nl80211_vendor_cmd_info const* addr; } ;
struct TYPE_8__ {int remain_on_channel; int get_antenna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct nl80211_vendor_cmd_info const*) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,TYPE_4__*,struct ieee80211_channel*,int ) ;
 int FUNC_7 (TYPE_4__*,struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct cfg80211_txq_stats*,int ) ;
 int FUNC_10 (struct sk_buff*,struct ieee80211_supported_band*) ;
 int FUNC_11 (struct sk_buff*,struct cfg80211_registered_device*) ;
 int FUNC_12 (struct sk_buff*,struct ieee80211_txrx_stypes const*) ;
 int FUNC_13 (struct cfg80211_registered_device*,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,struct cfg80211_registered_device*,int ) ;
 void* FUNC_15 (struct sk_buff*,int,int,int,int) ;
 int FUNC_16 (struct sk_buff*,void*) ;
 void* FUNC_17 (struct sk_buff*,int ) ;
 void* FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int,int,struct nl80211_vendor_cmd_info const*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 scalar_t__ FUNC_21 (struct sk_buff*,int ,int ) ;
 int FUNC_22 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_23 (struct sk_buff*,int ,int) ;
 int FUNC_24 (struct sk_buff*,int ,int ) ;
 int FUNC_25 (struct cfg80211_registered_device*,int*,int*) ;
 int FUNC_26 (struct cfg80211_registered_device*,int *,struct cfg80211_txq_stats*) ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int FUNC_27 (TYPE_4__*,int ) ;
 int FUNC_28 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_29(struct cfg80211_registered_device *VAR_105,
         enum nl80211_commands VAR_106,
         struct sk_buff *VAR_107, u32 VAR_108, u32 VAR_109,
         int VAR_110, struct nl80211_dump_wiphy_state *VAR_111)
{
 void *VAR_112;
 struct nlattr *VAR_113, *VAR_114;
 struct nlattr *VAR_115, *VAR_116;
 struct nlattr *VAR_117;
 enum nl80211_band VAR_118;
 struct ieee80211_channel *VAR_119;
 int VAR_120;
 const struct ieee80211_txrx_stypes *VAR_121 =
    VAR_105->wiphy.mgmt_stypes;
 u32 VAR_122;

 VAR_112 = FUNC_15(VAR_107, VAR_108, VAR_109, VAR_110, VAR_106);
 if (!VAR_112)
  return -VAR_6;

 if (FUNC_1(!VAR_111))
  return -VAR_4;

 if (FUNC_23(VAR_107, VAR_59, VAR_105->wiphy_idx) ||
     FUNC_21(VAR_107, VAR_67,
      FUNC_28(&VAR_105->wiphy)) ||
     FUNC_23(VAR_107, VAR_18,
   VAR_97))
  goto nla_put_failure;

 if (VAR_106 != VAR_73)
  goto finish;

 switch (VAR_111->split_start) {
 case 0:
  if (FUNC_24(VAR_107, VAR_69,
          VAR_105->wiphy.retry_short) ||
      FUNC_24(VAR_107, VAR_68,
          VAR_105->wiphy.retry_long) ||
      FUNC_23(VAR_107, VAR_66,
    VAR_105->wiphy.frag_threshold) ||
      FUNC_23(VAR_107, VAR_70,
    VAR_105->wiphy.rts_threshold) ||
      FUNC_24(VAR_107, VAR_65,
          VAR_105->wiphy.coverage_class) ||
      FUNC_24(VAR_107, VAR_30,
          VAR_105->wiphy.max_scan_ssids) ||
      FUNC_24(VAR_107, VAR_32,
          VAR_105->wiphy.max_sched_scan_ssids) ||
      FUNC_22(VAR_107, VAR_34,
    VAR_105->wiphy.max_scan_ie_len) ||
      FUNC_22(VAR_107, VAR_37,
    VAR_105->wiphy.max_sched_scan_ie_len) ||
      FUNC_24(VAR_107, VAR_28,
          VAR_105->wiphy.max_match_sets) ||
      FUNC_23(VAR_107, VAR_31,
    VAR_105->wiphy.max_sched_scan_plans) ||
      FUNC_23(VAR_107, VAR_35,
    VAR_105->wiphy.max_sched_scan_plan_interval) ||
      FUNC_23(VAR_107, VAR_36,
    VAR_105->wiphy.max_sched_scan_plan_iterations))
   goto nla_put_failure;

  if ((VAR_105->wiphy.flags & VAR_89) &&
      FUNC_20(VAR_107, VAR_48))
   goto nla_put_failure;
  if ((VAR_105->wiphy.flags & VAR_90) &&
      FUNC_20(VAR_107, VAR_49))
   goto nla_put_failure;
  if ((VAR_105->wiphy.flags & VAR_84) &&
      FUNC_20(VAR_107, VAR_47))
   goto nla_put_failure;
  if ((VAR_105->wiphy.flags & VAR_93) &&
      FUNC_20(VAR_107, VAR_40))
   goto nla_put_failure;
  if ((VAR_105->wiphy.flags & VAR_94) &&
      FUNC_20(VAR_107, VAR_51))
   goto nla_put_failure;
  if ((VAR_105->wiphy.flags & VAR_95) &&
      FUNC_20(VAR_107, VAR_50))
   goto nla_put_failure;
  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 1:
  if (FUNC_19(VAR_107, VAR_11,
       sizeof(u32) * VAR_105->wiphy.n_cipher_suites,
       VAR_105->wiphy.cipher_suites))
   goto nla_put_failure;

  if (FUNC_24(VAR_107, VAR_29,
          VAR_105->wiphy.max_num_pmkids))
   goto nla_put_failure;

  if ((VAR_105->wiphy.flags & VAR_85) &&
      FUNC_20(VAR_107, VAR_12))
   goto nla_put_failure;

  if (FUNC_23(VAR_107, VAR_61,
    VAR_105->wiphy.available_antennas_tx) ||
      FUNC_23(VAR_107, VAR_60,
    VAR_105->wiphy.available_antennas_rx))
   goto nla_put_failure;

  if ((VAR_105->wiphy.flags & VAR_83) &&
      FUNC_23(VAR_107, VAR_39,
    VAR_105->wiphy.probe_resp_offload))
   goto nla_put_failure;

  if ((VAR_105->wiphy.available_antennas_tx ||
       VAR_105->wiphy.available_antennas_rx) &&
      VAR_105->ops->get_antenna) {
   u32 VAR_123 = 0, VAR_124 = 0;
   int VAR_125;

   VAR_125 = FUNC_25(VAR_105, &VAR_123, &VAR_124);
   if (!VAR_125) {
    if (FUNC_23(VAR_107,
      VAR_63,
      VAR_123) ||
        FUNC_23(VAR_107,
      VAR_62,
      VAR_124))
     goto nla_put_failure;
   }
  }

  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 2:
  if (FUNC_8(VAR_107, VAR_44,
     VAR_105->wiphy.interface_modes))
    goto nla_put_failure;
  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 3:
  VAR_113 = FUNC_18(VAR_107,
       VAR_64);
  if (!VAR_113)
   goto nla_put_failure;

  for (VAR_118 = VAR_111->band_start;
       VAR_118 < VAR_77; VAR_118++) {
   struct ieee80211_supported_band *VAR_126;

   VAR_126 = VAR_105->wiphy.bands[VAR_118];

   if (!VAR_126)
    continue;

   VAR_114 = FUNC_18(VAR_107, VAR_118);
   if (!VAR_114)
    goto nla_put_failure;

   switch (VAR_111->chan_start) {
   case 0:
    if (FUNC_10(VAR_107, VAR_126))
     goto nla_put_failure;
    VAR_111->chan_start++;
    if (VAR_111->split)
     break;

   default:

    VAR_115 = FUNC_18(VAR_107,
         VAR_72);
    if (!VAR_115)
     goto nla_put_failure;

    for (VAR_120 = VAR_111->chan_start - 1;
         VAR_120 < VAR_126->n_channels;
         VAR_120++) {
     VAR_116 = FUNC_18(VAR_107,
         VAR_120);
     if (!VAR_116)
      goto nla_put_failure;

     VAR_119 = &VAR_126->channels[VAR_120];

     if (FUNC_6(
       VAR_107, &VAR_105->wiphy, VAR_119,
       VAR_111->split))
      goto nla_put_failure;

     FUNC_16(VAR_107, VAR_116);
     if (VAR_111->split)
      break;
    }
    if (VAR_120 < VAR_126->n_channels)
     VAR_111->chan_start = VAR_120 + 2;
    else
     VAR_111->chan_start = 0;
    FUNC_16(VAR_107, VAR_115);
   }

   FUNC_16(VAR_107, VAR_114);

   if (VAR_111->split) {

    if (VAR_111->chan_start)
     VAR_118--;
    break;
   }
  }
  FUNC_16(VAR_107, VAR_113);

  if (VAR_118 < VAR_77)
   VAR_111->band_start = VAR_118 + 1;
  else
   VAR_111->band_start = 0;


  if (VAR_111->band_start == 0 && VAR_111->chan_start == 0)
   VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 4:
  VAR_117 = FUNC_18(VAR_107,
      VAR_43);
  if (!VAR_117)
   goto nla_put_failure;

  VAR_120 = FUNC_5(VAR_105, VAR_107);
  if (VAR_120 < 0)
   goto nla_put_failure;
  if (VAR_111->split) {
   FUNC_0(VAR_99, VAR_2);
   FUNC_0(VAR_100, VAR_3);
   if (VAR_105->wiphy.flags & VAR_86)
    FUNC_0(VAR_98, VAR_1);
   FUNC_0(VAR_102, VAR_80);
   if (VAR_105->wiphy.features &
     VAR_76)
    FUNC_0(VAR_96, VAR_0);
   FUNC_0(VAR_101, VAR_79);
   FUNC_0(VAR_103, VAR_81);
   FUNC_0(VAR_104, VAR_82);
  }


  FUNC_16(VAR_107, VAR_117);
  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 5:
  if (VAR_105->ops->remain_on_channel &&
      (VAR_105->wiphy.flags & VAR_87) &&
      FUNC_23(VAR_107,
    VAR_33,
    VAR_105->wiphy.max_remain_on_channel_duration))
   goto nla_put_failure;

  if ((VAR_105->wiphy.flags & VAR_91) &&
      FUNC_20(VAR_107, VAR_38))
   goto nla_put_failure;

  if (FUNC_12(VAR_107, VAR_121))
   goto nla_put_failure;
  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 6:







  VAR_111->split_start++;


 case 7:
  if (FUNC_8(VAR_107, VAR_42,
     VAR_105->wiphy.software_iftypes))
   goto nla_put_failure;

  if (FUNC_7(&VAR_105->wiphy, VAR_107,
         VAR_111->split))
   goto nla_put_failure;

  VAR_111->split_start++;
  if (VAR_111->split)
   break;

 case 8:
  if ((VAR_105->wiphy.flags & VAR_88) &&
      FUNC_23(VAR_107, VAR_13,
    VAR_105->wiphy.ap_sme_capa))
   goto nla_put_failure;

  VAR_122 = VAR_105->wiphy.features;





  if (VAR_111->split)
   VAR_122 |= VAR_75;
  if (FUNC_23(VAR_107, VAR_17, VAR_122))
   goto nla_put_failure;

  if (VAR_105->wiphy.ht_capa_mod_mask &&
      FUNC_19(VAR_107, VAR_19,
       sizeof(*VAR_105->wiphy.ht_capa_mod_mask),
       VAR_105->wiphy.ht_capa_mod_mask))
   goto nla_put_failure;

  if (VAR_105->wiphy.flags & VAR_88 &&
      VAR_105->wiphy.max_acl_mac_addrs &&
      FUNC_23(VAR_107, VAR_23,
    VAR_105->wiphy.max_acl_mac_addrs))
   goto nla_put_failure;
  VAR_111->split_start++;
  break;
 case 9:
  if (VAR_105->wiphy.extended_capabilities &&
      (FUNC_19(VAR_107, VAR_14,
        VAR_105->wiphy.extended_capabilities_len,
        VAR_105->wiphy.extended_capabilities) ||
       FUNC_19(VAR_107, VAR_15,
        VAR_105->wiphy.extended_capabilities_len,
        VAR_105->wiphy.extended_capabilities_mask)))
   goto nla_put_failure;

  if (VAR_105->wiphy.vht_capa_mod_mask &&
      FUNC_19(VAR_107, VAR_58,
       sizeof(*VAR_105->wiphy.vht_capa_mod_mask),
       VAR_105->wiphy.vht_capa_mod_mask))
   goto nla_put_failure;

  if (FUNC_19(VAR_107, VAR_22, VAR_7,
       VAR_105->wiphy.perm_addr))
   goto nla_put_failure;

  if (!FUNC_4(VAR_105->wiphy.addr_mask) &&
      FUNC_19(VAR_107, VAR_25, VAR_7,
       VAR_105->wiphy.addr_mask))
   goto nla_put_failure;

  if (VAR_105->wiphy.n_addresses > 1) {
   void *VAR_127;

   VAR_127 = FUNC_17(VAR_107, VAR_24);
   if (!VAR_127)
    goto nla_put_failure;

   for (VAR_120 = 0; VAR_120 < VAR_105->wiphy.n_addresses; VAR_120++)
    if (FUNC_19(VAR_107, VAR_120 + 1, VAR_7,
         VAR_105->wiphy.addresses[VAR_120].addr))
     goto nla_put_failure;

   FUNC_16(VAR_107, VAR_127);
  }

  VAR_111->split_start++;
  break;
 case 10:
  if (FUNC_11(VAR_107, VAR_105))
   goto nla_put_failure;

  if ((VAR_105->wiphy.flags & VAR_92) &&
      (FUNC_20(VAR_107, VAR_46) ||
       FUNC_20(VAR_107, VAR_45)))
   goto nla_put_failure;

  if (VAR_105->wiphy.max_ap_assoc_sta &&
      FUNC_23(VAR_107, VAR_26,
    VAR_105->wiphy.max_ap_assoc_sta))
   goto nla_put_failure;

  VAR_111->split_start++;
  break;
 case 11:
  if (VAR_105->wiphy.n_vendor_commands) {
   const struct nl80211_vendor_cmd_info *VAR_128;
   struct nlattr *VAR_129;

   VAR_129 = FUNC_18(VAR_107,
             VAR_56);
   if (!VAR_129)
    goto nla_put_failure;

   for (VAR_120 = 0; VAR_120 < VAR_105->wiphy.n_vendor_commands; VAR_120++) {
    VAR_128 = &VAR_105->wiphy.vendor_commands[VAR_120].info;
    if (FUNC_19(VAR_107, VAR_120 + 1, sizeof(*VAR_128), VAR_128))
     goto nla_put_failure;
   }
   FUNC_16(VAR_107, VAR_129);
  }

  if (VAR_105->wiphy.n_vendor_events) {
   const struct nl80211_vendor_cmd_info *VAR_130;
   struct nlattr *VAR_131;

   VAR_131 = FUNC_18(VAR_107,
             VAR_57);
   if (!VAR_131)
    goto nla_put_failure;

   for (VAR_120 = 0; VAR_120 < VAR_105->wiphy.n_vendor_events; VAR_120++) {
    VAR_130 = &VAR_105->wiphy.vendor_events[VAR_120];
    if (FUNC_19(VAR_107, VAR_120 + 1, sizeof(*VAR_130), VAR_130))
     goto nla_put_failure;
   }
   FUNC_16(VAR_107, VAR_131);
  }
  VAR_111->split_start++;
  break;
 case 12:
  if (VAR_105->wiphy.flags & VAR_86 &&
      FUNC_24(VAR_107, VAR_27,
          VAR_105->wiphy.max_num_csa_counters))
   goto nla_put_failure;

  if (VAR_105->wiphy.regulatory_flags & VAR_78 &&
      FUNC_20(VAR_107, VAR_71))
   goto nla_put_failure;

  if (VAR_105->wiphy.max_sched_scan_reqs &&
      FUNC_23(VAR_107, VAR_41,
    VAR_105->wiphy.max_sched_scan_reqs))
   goto nla_put_failure;

  if (FUNC_19(VAR_107, VAR_16,
       sizeof(VAR_105->wiphy.ext_features),
       VAR_105->wiphy.ext_features))
   goto nla_put_failure;

  if (VAR_105->wiphy.bss_select_support) {
   struct nlattr *VAR_132;
   u32 VAR_133 = VAR_105->wiphy.bss_select_support;

   VAR_132 = FUNC_18(VAR_107,
             VAR_10);
   if (!VAR_132)
    goto nla_put_failure;

   VAR_120 = 0;
   while (VAR_133) {
    if ((VAR_133 & 1) &&
        FUNC_20(VAR_107, VAR_120))
     goto nla_put_failure;
    VAR_120++;
    VAR_133 >>= 1;
   }
   FUNC_16(VAR_107, VAR_132);
  }

  VAR_111->split_start++;
  break;
 case 13:
  if (VAR_105->wiphy.num_iftype_ext_capab &&
      VAR_105->wiphy.iftype_ext_capab) {
   struct nlattr *VAR_134, *VAR_135;

   VAR_135 = FUNC_18(VAR_107,
             VAR_21);
   if (!VAR_135)
    goto nla_put_failure;

   for (VAR_120 = VAR_111->capa_start;
        VAR_120 < VAR_105->wiphy.num_iftype_ext_capab; VAR_120++) {
    const struct wiphy_iftype_ext_capab *VAR_136;

    VAR_136 = &VAR_105->wiphy.iftype_ext_capab[VAR_120];

    VAR_134 = FUNC_18(VAR_107,
          VAR_120);
    if (!VAR_134 ||
        FUNC_23(VAR_107, VAR_20,
      VAR_136->iftype) ||
        FUNC_19(VAR_107, VAR_14,
         VAR_136->extended_capabilities_len,
         VAR_136->extended_capabilities) ||
        FUNC_19(VAR_107, VAR_15,
         VAR_136->extended_capabilities_len,
         VAR_136->extended_capabilities_mask))
     goto nla_put_failure;

    FUNC_16(VAR_107, VAR_134);
    if (VAR_111->split)
     break;
   }
   FUNC_16(VAR_107, VAR_135);
   if (VAR_120 < VAR_105->wiphy.num_iftype_ext_capab) {
    VAR_111->capa_start = VAR_120 + 1;
    break;
   }
  }

  if (FUNC_23(VAR_107, VAR_9,
    VAR_105->wiphy.nan_supported_bands))
   goto nla_put_failure;

  if (FUNC_27(&VAR_105->wiphy,
         VAR_74)) {
   struct cfg80211_txq_stats VAR_137 = {};
   int VAR_138;

   VAR_138 = FUNC_26(VAR_105, ((void*)0), &VAR_137);
   if (!VAR_138 &&
       !FUNC_9(VAR_107, &VAR_137,
         VAR_55))
    goto nla_put_failure;

   if (FUNC_23(VAR_107, VAR_52,
     VAR_105->wiphy.txq_limit))
    goto nla_put_failure;
   if (FUNC_23(VAR_107, VAR_53,
     VAR_105->wiphy.txq_memory_limit))
    goto nla_put_failure;
   if (FUNC_23(VAR_107, VAR_54,
     VAR_105->wiphy.txq_quantum))
    goto nla_put_failure;
  }

  VAR_111->split_start++;
  break;
 case 14:
  if (FUNC_13(VAR_105, VAR_107))
   goto nla_put_failure;

  VAR_111->split_start++;
  break;
 case 15:
  if (VAR_105->wiphy.akm_suites &&
      FUNC_19(VAR_107, VAR_8,
       sizeof(u32) * VAR_105->wiphy.n_akm_suites,
       VAR_105->wiphy.akm_suites))
   goto nla_put_failure;


  VAR_111->split_start = 0;
  break;
 }
 finish:
 FUNC_3(VAR_107, VAR_112);
 return 0;

 nla_put_failure:
 FUNC_2(VAR_107, VAR_112);
 return -VAR_5;
}
