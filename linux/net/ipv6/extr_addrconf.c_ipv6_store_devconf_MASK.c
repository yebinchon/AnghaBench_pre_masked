
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_devconf {int ndisc_tclass; int disable_policy; int addr_gen_mode; int enhanced_dad; int seg6_require_hmac; int seg6_enabled; int keep_addr_on_down; int drop_unsolicited_na; int drop_unicast_in_l2_multicast; int use_oif_addrs_only; int ignore_routes_with_linkdown; int accept_ra_mtu; int accept_ra_from_local; int suppress_frag_ndisc; int ndisc_notify; int force_tllao; int accept_dad; int disable_ipv6; int mc_forwarding; int use_optimistic; int optimistic_dad; int accept_source_route; int proxy_ndp; int accept_ra_rt_info_max_plen; int accept_ra_rt_info_min_plen; int rtr_probe_interval; int accept_ra_rtr_pref; int accept_ra_pinfo; int accept_ra_min_hop_limit; int accept_ra_defrtr; int max_addresses; int max_desync_factor; int regen_max_retry; int temp_prefered_lft; int temp_valid_lft; int use_tempaddr; int mldv2_unsolicited_report_interval; int mldv1_unsolicited_report_interval; int force_mld_version; int rtr_solicit_delay; int rtr_solicit_max_interval; int rtr_solicit_interval; int rtr_solicits; int dad_transmits; int autoconf; int accept_redirects; int accept_ra; int mtu6; int hop_limit; int forwarding; } ;
typedef int __s32 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct ipv6_devconf *VAR_51,
    __s32 *VAR_52, int VAR_53)
{
 FUNC_0(VAR_53 < (VAR_26 * 4));

 FUNC_2(VAR_52, 0, VAR_53);
 VAR_52[VAR_22] = VAR_51->forwarding;
 VAR_52[VAR_23] = VAR_51->hop_limit;
 VAR_52[VAR_32] = VAR_51->mtu6;
 VAR_52[VAR_1] = VAR_51->accept_ra;
 VAR_52[VAR_10] = VAR_51->accept_redirects;
 VAR_52[VAR_13] = VAR_51->autoconf;
 VAR_52[VAR_14] = VAR_51->dad_transmits;
 VAR_52[VAR_39] = VAR_51->rtr_solicits;
 VAR_52[VAR_41] =
  FUNC_1(VAR_51->rtr_solicit_interval);
 VAR_52[VAR_42] =
  FUNC_1(VAR_51->rtr_solicit_max_interval);
 VAR_52[VAR_40] =
  FUNC_1(VAR_51->rtr_solicit_delay);
 VAR_52[VAR_20] = VAR_51->force_mld_version;
 VAR_52[VAR_30] =
  FUNC_1(VAR_51->mldv1_unsolicited_report_interval);
 VAR_52[VAR_31] =
  FUNC_1(VAR_51->mldv2_unsolicited_report_interval);
 VAR_52[VAR_50] = VAR_51->use_tempaddr;
 VAR_52[VAR_47] = VAR_51->temp_valid_lft;
 VAR_52[VAR_46] = VAR_51->temp_prefered_lft;
 VAR_52[VAR_37] = VAR_51->regen_max_retry;
 VAR_52[VAR_28] = VAR_51->max_desync_factor;
 VAR_52[VAR_27] = VAR_51->max_addresses;
 VAR_52[VAR_2] = VAR_51->accept_ra_defrtr;
 VAR_52[VAR_4] = VAR_51->accept_ra_min_hop_limit;
 VAR_52[VAR_6] = VAR_51->accept_ra_pinfo;
 VAR_52[VAR_36] = VAR_51->proxy_ndp;
 VAR_52[VAR_11] = VAR_51->accept_source_route;







 VAR_52[VAR_15] = VAR_51->disable_ipv6;
 VAR_52[VAR_0] = VAR_51->accept_dad;
 VAR_52[VAR_21] = VAR_51->force_tllao;
 VAR_52[VAR_33] = VAR_51->ndisc_notify;
 VAR_52[VAR_45] = VAR_51->suppress_frag_ndisc;
 VAR_52[VAR_3] = VAR_51->accept_ra_from_local;
 VAR_52[VAR_5] = VAR_51->accept_ra_mtu;
 VAR_52[VAR_24] = VAR_51->ignore_routes_with_linkdown;

 VAR_52[VAR_48] = VAR_51->use_oif_addrs_only;
 VAR_52[VAR_17] = VAR_51->drop_unicast_in_l2_multicast;
 VAR_52[VAR_18] = VAR_51->drop_unsolicited_na;
 VAR_52[VAR_25] = VAR_51->keep_addr_on_down;
 VAR_52[VAR_43] = VAR_51->seg6_enabled;



 VAR_52[VAR_19] = VAR_51->enhanced_dad;
 VAR_52[VAR_12] = VAR_51->addr_gen_mode;
 VAR_52[VAR_16] = VAR_51->disable_policy;
 VAR_52[VAR_34] = VAR_51->ndisc_tclass;
}
