
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcf_tunnel_key_params {int tcft_action; struct metadata_dst* tcft_enc_metadata; } ;
struct tcf_tunnel_key {int tcf_lock; int params; } ;
struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tc_tunnel_key {int t_action; int action; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int mode; int dst_cache; } ;
struct TYPE_3__ {TYPE_2__ tun_info; } ;
struct metadata_dst {int dst; TYPE_1__ u; } ;
struct in6_addr {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;


 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct metadata_dst* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int) ;
 struct metadata_dst* FUNC_2 (struct in6_addr*,struct in6_addr*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_20 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct tcf_tunnel_key_params* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 struct tc_action_net* FUNC_8 (struct net*,int ) ;
 struct tc_tunnel_key* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct nlattr*) ;
 struct in6_addr FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_16 (int ,struct tcf_tunnel_key_params*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_20 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_21 (struct tcf_chain*) ;
 int FUNC_22 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_23 (struct tc_action_net*,int ) ;
 int FUNC_24 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_25 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_26 (struct tc_action*,int) ;
 struct tcf_tunnel_key* FUNC_27 (struct tc_action*) ;
 int FUNC_28 (struct nlattr*,struct netlink_ext_ack*) ;
 int VAR_21 ;
 int FUNC_29 (struct nlattr*,TYPE_2__*,int,struct netlink_ext_ack*) ;
 int VAR_22 ;
 int FUNC_30 (struct tcf_tunnel_key_params*) ;
 scalar_t__ FUNC_31 (int) ;

__attribute__((used)) static int FUNC_32(struct net *VAR_23, struct nlattr *VAR_24,
      struct nlattr *VAR_25, struct tc_action **VAR_26,
      int VAR_27, int VAR_28, bool VAR_29,
      struct tcf_proto *VAR_30,
      struct netlink_ext_ack *VAR_31)
{
 struct tc_action_net *VAR_32 = FUNC_8(VAR_23, VAR_21);
 struct nlattr *VAR_33[VAR_15 + 1];
 struct tcf_tunnel_key_params *VAR_34;
 struct metadata_dst *VAR_35 = ((void*)0);
 struct tcf_chain *VAR_36 = ((void*)0);
 struct tc_tunnel_key *VAR_37;
 struct tcf_tunnel_key *VAR_38;
 bool VAR_39 = 0;
 __be16 VAR_40 = 0;
 __be64 VAR_41 = 0;
 int VAR_42 = 0;
 __be16 VAR_43 = 0;
 u8 VAR_44, VAR_45;
 int VAR_46 = 0;
 u32 VAR_47;
 int VAR_48;

 if (!VAR_24) {
  FUNC_0(VAR_31, "Tunnel requires attributes to be passed");
  return -VAR_2;
 }

 VAR_48 = FUNC_15(VAR_33, VAR_15, VAR_24,
       VAR_22, VAR_31);
 if (VAR_48 < 0) {
  FUNC_0(VAR_31, "Failed to parse nested tunnel key attributes");
  return VAR_48;
 }

 if (!VAR_33[VAR_17]) {
  FUNC_0(VAR_31, "Missing tunnel key parameters");
  return -VAR_2;
 }

 VAR_37 = FUNC_9(VAR_33[VAR_17]);
 VAR_47 = VAR_37->index;
 VAR_48 = FUNC_22(VAR_32, &VAR_47, VAR_26, VAR_28);
 if (VAR_48 < 0)
  return VAR_48;
 VAR_39 = VAR_48;
 if (VAR_39 && VAR_28)
  return 0;

 switch (VAR_37->t_action) {
 case 129:
  break;
 case 128:
  if (VAR_33[VAR_11]) {
   __be32 VAR_49;

   VAR_49 = FUNC_11(VAR_33[VAR_11]);
   VAR_41 = FUNC_5(VAR_49);
   VAR_43 = VAR_19;
  }

  VAR_43 |= VAR_18;
  if (VAR_33[VAR_16] &&
      FUNC_14(VAR_33[VAR_16]))
   VAR_43 &= ~VAR_18;

  if (VAR_33[VAR_6])
   VAR_40 = FUNC_10(VAR_33[VAR_6]);

  if (VAR_33[VAR_12]) {
   VAR_42 = FUNC_28(VAR_33[VAR_12],
          VAR_31);
   if (VAR_42 < 0) {
    VAR_46 = VAR_42;
    goto err_out;
   }
  }

  VAR_44 = 0;
  if (VAR_33[VAR_13])
   VAR_44 = FUNC_14(VAR_33[VAR_13]);
  VAR_45 = 0;
  if (VAR_33[VAR_14])
   VAR_45 = FUNC_14(VAR_33[VAR_14]);

  if (VAR_33[VAR_8] &&
      VAR_33[VAR_7]) {
   __be32 VAR_50;
   __be32 VAR_51;

   VAR_50 = FUNC_13(VAR_33[VAR_8]);
   VAR_51 = FUNC_13(VAR_33[VAR_7]);

   VAR_35 = FUNC_1(VAR_50, VAR_51, VAR_44, VAR_45,
          VAR_40, VAR_43,
          VAR_41, VAR_42);
  } else if (VAR_33[VAR_10] &&
      VAR_33[VAR_9]) {
   struct in6_addr VAR_52;
   struct in6_addr VAR_53;

   VAR_52 = FUNC_12(VAR_33[VAR_10]);
   VAR_53 = FUNC_12(VAR_33[VAR_9]);

   VAR_35 = FUNC_2(&VAR_52, &VAR_53, VAR_44, VAR_45, VAR_40,
            0, VAR_43,
            VAR_41, 0);
  } else {
   FUNC_0(VAR_31, "Missing either ipv4 or ipv6 src and dst");
   VAR_46 = -VAR_2;
   goto err_out;
  }

  if (!VAR_35) {
   FUNC_0(VAR_31, "Cannot allocate tunnel metadata dst");
   VAR_46 = -VAR_3;
   goto err_out;
  }







  if (VAR_42) {
   VAR_46 = FUNC_29(VAR_33[VAR_12],
        &VAR_35->u.tun_info,
        VAR_42, VAR_31);
   if (VAR_46 < 0)
    goto release_tun_meta;
  }

  VAR_35->u.tun_info.mode |= VAR_5;
  break;
 default:
  FUNC_0(VAR_31, "Unknown tunnel key action");
  VAR_46 = -VAR_2;
  goto err_out;
 }

 if (!VAR_39) {
  VAR_46 = FUNC_24(VAR_32, VAR_47, VAR_25, VAR_26,
         &VAR_20, VAR_28, 1);
  if (VAR_46) {
   FUNC_0(VAR_31, "Cannot create TC IDR");
   goto release_tun_meta;
  }

  VAR_46 = VAR_0;
 } else if (!VAR_27) {
  FUNC_0(VAR_31, "TC IDR already exists");
  VAR_46 = -VAR_1;
  goto release_tun_meta;
 }

 VAR_48 = FUNC_19(VAR_37->action, VAR_30, &VAR_36, VAR_31);
 if (VAR_48 < 0) {
  VAR_46 = VAR_48;
  VAR_39 = 1;
  goto release_tun_meta;
 }
 VAR_38 = FUNC_27(*VAR_26);

 VAR_34 = FUNC_6(sizeof(*VAR_34), VAR_4);
 if (FUNC_31(!VAR_34)) {
  FUNC_0(VAR_31, "Cannot allocate tunnel key parameters");
  VAR_46 = -VAR_3;
  VAR_39 = 1;
  goto put_chain;
 }
 VAR_34->tcft_action = VAR_37->t_action;
 VAR_34->tcft_enc_metadata = VAR_35;

 FUNC_17(&VAR_38->tcf_lock);
 VAR_36 = FUNC_20(*VAR_26, VAR_37->action, VAR_36);
 FUNC_16(VAR_38->params, VAR_34,
      FUNC_7(&VAR_38->tcf_lock));
 FUNC_18(&VAR_38->tcf_lock);
 FUNC_30(VAR_34);
 if (VAR_36)
  FUNC_21(VAR_36);

 if (VAR_46 == VAR_0)
  FUNC_25(VAR_32, *VAR_26);

 return VAR_46;

put_chain:
 if (VAR_36)
  FUNC_21(VAR_36);

release_tun_meta:
 if (VAR_35)
  FUNC_4(&VAR_35->dst);

err_out:
 if (VAR_39)
  FUNC_26(*VAR_26, VAR_28);
 else
  FUNC_23(VAR_32, VAR_47);
 return VAR_46;
}
