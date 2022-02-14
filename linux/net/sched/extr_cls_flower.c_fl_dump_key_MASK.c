
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct TYPE_21__ {scalar_t__ addr_type; int flags; } ;
struct TYPE_20__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_19__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_18__ {scalar_t__ addr_type; } ;
struct TYPE_17__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_31__ {scalar_t__ n_proto; scalar_t__ ip_proto; } ;
struct TYPE_30__ {scalar_t__ sip; scalar_t__ tip; scalar_t__ op; scalar_t__* sha; scalar_t__* tha; } ;
struct TYPE_29__ {scalar_t__ type; scalar_t__ code; } ;
struct TYPE_28__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_27__ {scalar_t__ flags; } ;
struct TYPE_26__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_25__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_22__ {scalar_t__ vlan_tpid; } ;
struct TYPE_24__ {scalar_t__* dst; scalar_t__* src; } ;
struct TYPE_23__ {scalar_t__ ingress_ifindex; } ;
struct fl_flow_key {scalar_t__ enc_key_id; TYPE_14__ control; int ct; int enc_opts; int enc_ip; TYPE_13__ enc_tp; TYPE_12__ enc_ipv6; TYPE_11__ enc_control; TYPE_10__ enc_ipv4; TYPE_9__ basic; TYPE_8__ arp; TYPE_7__ icmp; TYPE_6__ tp; TYPE_5__ tcp; TYPE_4__ ipv6; TYPE_3__ ipv4; int ip; TYPE_15__ vlan; TYPE_15__ cvlan; int mpls; TYPE_2__ eth; TYPE_1__ meta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,int *,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct fl_flow_key*,struct fl_flow_key*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,scalar_t__*,int ,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,TYPE_15__*,TYPE_15__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_79, struct net *VAR_80,
         struct fl_flow_key *VAR_81, struct fl_flow_key *VAR_82)
{
 if (VAR_82->meta.ingress_ifindex) {
  struct net_device *VAR_83;

  VAR_83 = FUNC_0(VAR_80, VAR_81->meta.ingress_ifindex);
  if (VAR_83 && FUNC_11(VAR_79, VAR_12, VAR_83->name))
   goto nla_put_failure;
 }

 if (FUNC_7(VAR_79, VAR_81->eth.dst, VAR_39,
       VAR_82->eth.dst, VAR_40,
       sizeof(VAR_81->eth.dst)) ||
     FUNC_7(VAR_79, VAR_81->eth.src, VAR_41,
       VAR_82->eth.src, VAR_42,
       sizeof(VAR_81->eth.src)) ||
     FUNC_7(VAR_79, &VAR_81->basic.n_proto, VAR_43,
       &VAR_82->basic.n_proto, VAR_78,
       sizeof(VAR_81->basic.n_proto)))
  goto nla_put_failure;

 if (FUNC_5(VAR_79, &VAR_81->mpls, &VAR_82->mpls))
  goto nla_put_failure;

 if (FUNC_8(VAR_79, VAR_76,
        VAR_77, &VAR_81->vlan, &VAR_82->vlan))
  goto nla_put_failure;

 if (FUNC_8(VAR_79, VAR_24,
        VAR_25,
        &VAR_81->cvlan, &VAR_82->cvlan) ||
     (VAR_82->cvlan.vlan_tpid &&
      FUNC_10(VAR_79, VAR_75,
     VAR_81->cvlan.vlan_tpid)))
  goto nla_put_failure;

 if (VAR_82->basic.n_proto) {
  if (VAR_82->cvlan.vlan_tpid) {
   if (FUNC_10(VAR_79, VAR_23,
      VAR_81->basic.n_proto))
    goto nla_put_failure;
  } else if (VAR_82->vlan.vlan_tpid) {
   if (FUNC_10(VAR_79, VAR_75,
      VAR_81->basic.n_proto))
    goto nla_put_failure;
  }
 }

 if ((VAR_81->basic.n_proto == FUNC_9(VAR_2) ||
      VAR_81->basic.n_proto == FUNC_9(VAR_3)) &&
     (FUNC_7(VAR_79, &VAR_81->basic.ip_proto, VAR_60,
       &VAR_82->basic.ip_proto, VAR_78,
       sizeof(VAR_81->basic.ip_proto)) ||
     FUNC_4(VAR_79, 0, &VAR_81->ip, &VAR_82->ip)))
  goto nla_put_failure;

 if (VAR_81->control.addr_type == VAR_5 &&
     (FUNC_7(VAR_79, &VAR_81->ipv4.src, VAR_54,
        &VAR_82->ipv4.src, VAR_55,
        sizeof(VAR_81->ipv4.src)) ||
      FUNC_7(VAR_79, &VAR_81->ipv4.dst, VAR_52,
        &VAR_82->ipv4.dst, VAR_53,
        sizeof(VAR_81->ipv4.dst))))
  goto nla_put_failure;
 else if (VAR_81->control.addr_type == VAR_6 &&
   (FUNC_7(VAR_79, &VAR_81->ipv6.src, VAR_58,
      &VAR_82->ipv6.src, VAR_59,
      sizeof(VAR_81->ipv6.src)) ||
    FUNC_7(VAR_79, &VAR_81->ipv6.dst, VAR_56,
      &VAR_82->ipv6.dst, VAR_57,
      sizeof(VAR_81->ipv6.dst))))
  goto nla_put_failure;

 if (VAR_81->basic.ip_proto == VAR_10 &&
     (FUNC_7(VAR_79, &VAR_81->tp.src, VAR_69,
        &VAR_82->tp.src, VAR_70,
        sizeof(VAR_81->tp.src)) ||
      FUNC_7(VAR_79, &VAR_81->tp.dst, VAR_65,
        &VAR_82->tp.dst, VAR_66,
        sizeof(VAR_81->tp.dst)) ||
      FUNC_7(VAR_79, &VAR_81->tcp.flags, VAR_67,
        &VAR_82->tcp.flags, VAR_68,
        sizeof(VAR_81->tcp.flags))))
  goto nla_put_failure;
 else if (VAR_81->basic.ip_proto == VAR_11 &&
   (FUNC_7(VAR_79, &VAR_81->tp.src, VAR_73,
      &VAR_82->tp.src, VAR_74,
      sizeof(VAR_81->tp.src)) ||
    FUNC_7(VAR_79, &VAR_81->tp.dst, VAR_71,
      &VAR_82->tp.dst, VAR_72,
      sizeof(VAR_81->tp.dst))))
  goto nla_put_failure;
 else if (VAR_81->basic.ip_proto == VAR_9 &&
   (FUNC_7(VAR_79, &VAR_81->tp.src, VAR_63,
      &VAR_82->tp.src, VAR_64,
      sizeof(VAR_81->tp.src)) ||
    FUNC_7(VAR_79, &VAR_81->tp.dst, VAR_61,
      &VAR_82->tp.dst, VAR_62,
      sizeof(VAR_81->tp.dst))))
  goto nla_put_failure;
 else if (VAR_81->basic.n_proto == FUNC_9(VAR_2) &&
   VAR_81->basic.ip_proto == VAR_7 &&
   (FUNC_7(VAR_79, &VAR_81->icmp.type,
      VAR_46, &VAR_82->icmp.type,
      VAR_47,
      sizeof(VAR_81->icmp.type)) ||
    FUNC_7(VAR_79, &VAR_81->icmp.code,
      VAR_44, &VAR_82->icmp.code,
      VAR_45,
      sizeof(VAR_81->icmp.code))))
  goto nla_put_failure;
 else if (VAR_81->basic.n_proto == FUNC_9(VAR_3) &&
   VAR_81->basic.ip_proto == VAR_8 &&
   (FUNC_7(VAR_79, &VAR_81->icmp.type,
      VAR_50, &VAR_82->icmp.type,
      VAR_51,
      sizeof(VAR_81->icmp.type)) ||
    FUNC_7(VAR_79, &VAR_81->icmp.code,
      VAR_48, &VAR_82->icmp.code,
      VAR_49,
      sizeof(VAR_81->icmp.code))))
  goto nla_put_failure;
 else if ((VAR_81->basic.n_proto == FUNC_9(VAR_1) ||
    VAR_81->basic.n_proto == FUNC_9(VAR_4)) &&
   (FUNC_7(VAR_79, &VAR_81->arp.sip,
      VAR_17, &VAR_82->arp.sip,
      VAR_18,
      sizeof(VAR_81->arp.sip)) ||
    FUNC_7(VAR_79, &VAR_81->arp.tip,
      VAR_21, &VAR_82->arp.tip,
      VAR_22,
      sizeof(VAR_81->arp.tip)) ||
    FUNC_7(VAR_79, &VAR_81->arp.op,
      VAR_13, &VAR_82->arp.op,
      VAR_14,
      sizeof(VAR_81->arp.op)) ||
    FUNC_7(VAR_79, VAR_81->arp.sha, VAR_15,
      VAR_82->arp.sha, VAR_16,
      sizeof(VAR_81->arp.sha)) ||
    FUNC_7(VAR_79, VAR_81->arp.tha, VAR_19,
      VAR_82->arp.tha, VAR_20,
      sizeof(VAR_81->arp.tha))))
  goto nla_put_failure;

 if ((VAR_81->basic.ip_proto == VAR_10 ||
      VAR_81->basic.ip_proto == VAR_11 ||
      VAR_81->basic.ip_proto == VAR_9) &&
      FUNC_6(VAR_79, VAR_81, VAR_82))
  goto nla_put_failure;

 if (VAR_81->enc_control.addr_type == VAR_5 &&
     (FUNC_7(VAR_79, &VAR_81->enc_ipv4.src,
       VAR_28, &VAR_82->enc_ipv4.src,
       VAR_29,
       sizeof(VAR_81->enc_ipv4.src)) ||
      FUNC_7(VAR_79, &VAR_81->enc_ipv4.dst,
        VAR_26, &VAR_82->enc_ipv4.dst,
        VAR_27,
        sizeof(VAR_81->enc_ipv4.dst))))
  goto nla_put_failure;
 else if (VAR_81->enc_control.addr_type == VAR_6 &&
   (FUNC_7(VAR_79, &VAR_81->enc_ipv6.src,
       VAR_32, &VAR_82->enc_ipv6.src,
       VAR_33,
       sizeof(VAR_81->enc_ipv6.src)) ||
   FUNC_7(VAR_79, &VAR_81->enc_ipv6.dst,
     VAR_30,
     &VAR_82->enc_ipv6.dst,
     VAR_31,
       sizeof(VAR_81->enc_ipv6.dst))))
  goto nla_put_failure;

 if (FUNC_7(VAR_79, &VAR_81->enc_key_id, VAR_34,
       &VAR_82->enc_key_id, VAR_78,
       sizeof(VAR_81->enc_key_id)) ||
     FUNC_7(VAR_79, &VAR_81->enc_tp.src,
       VAR_37,
       &VAR_82->enc_tp.src,
       VAR_38,
       sizeof(VAR_81->enc_tp.src)) ||
     FUNC_7(VAR_79, &VAR_81->enc_tp.dst,
       VAR_35,
       &VAR_82->enc_tp.dst,
       VAR_36,
       sizeof(VAR_81->enc_tp.dst)) ||
     FUNC_4(VAR_79, 1, &VAR_81->enc_ip, &VAR_82->enc_ip) ||
     FUNC_2(VAR_79, &VAR_81->enc_opts, &VAR_82->enc_opts))
  goto nla_put_failure;

 if (FUNC_1(VAR_79, &VAR_81->ct, &VAR_82->ct))
  goto nla_put_failure;

 if (FUNC_3(VAR_79, VAR_81->control.flags, VAR_82->control.flags))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
