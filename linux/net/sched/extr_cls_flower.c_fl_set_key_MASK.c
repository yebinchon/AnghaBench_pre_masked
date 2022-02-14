
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_21__ {int flags; void* addr_type; } ;
struct TYPE_20__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_19__ {scalar_t__ keyid; } ;
struct TYPE_18__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_17__ {void* addr_type; } ;
struct TYPE_16__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_30__ {scalar_t__ n_proto; scalar_t__ ip_proto; } ;
struct TYPE_29__ {scalar_t__ sip; scalar_t__ tip; scalar_t__ op; scalar_t__* sha; scalar_t__* tha; } ;
struct TYPE_28__ {scalar_t__ type; scalar_t__ code; } ;
struct TYPE_27__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_26__ {scalar_t__ flags; } ;
struct TYPE_25__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_24__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_23__ {scalar_t__* dst; scalar_t__* src; } ;
struct TYPE_22__ {int ingress_ifindex; } ;
struct fl_flow_key {TYPE_15__ control; int ct; int enc_ip; TYPE_14__ enc_tp; TYPE_13__ enc_key_id; TYPE_12__ enc_ipv6; TYPE_11__ enc_control; TYPE_10__ enc_ipv4; TYPE_9__ basic; TYPE_8__ arp; int mpls; TYPE_7__ icmp; TYPE_6__ tp; TYPE_5__ tcp; TYPE_4__ ipv6; TYPE_3__ ipv4; int ip; int cvlan; int vlan; TYPE_2__ eth; TYPE_1__ meta; } ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 int VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 int VAR_38 ;
 size_t VAR_39 ;
 int VAR_40 ;
 size_t VAR_41 ;
 int VAR_42 ;
 size_t VAR_43 ;
 int VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 int VAR_48 ;
 size_t VAR_49 ;
 int VAR_50 ;
 size_t VAR_51 ;
 int VAR_52 ;
 size_t VAR_53 ;
 int VAR_54 ;
 size_t VAR_55 ;
 int VAR_56 ;
 size_t VAR_57 ;
 int VAR_58 ;
 size_t VAR_59 ;
 int VAR_60 ;
 size_t VAR_61 ;
 int VAR_62 ;
 size_t VAR_63 ;
 size_t VAR_64 ;
 int VAR_65 ;
 size_t VAR_66 ;
 int VAR_67 ;
 size_t VAR_68 ;
 int VAR_69 ;
 size_t VAR_70 ;
 int VAR_71 ;
 size_t VAR_72 ;
 int VAR_73 ;
 size_t VAR_74 ;
 int VAR_75 ;
 size_t VAR_76 ;
 int VAR_77 ;
 size_t VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct nlattr**,struct fl_flow_key*,struct fl_flow_key*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct nlattr**,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nlattr**,int *,int *) ;
 int FUNC_5 (struct nlattr**,int,int *,int *) ;
 int FUNC_6 (struct nlattr**,int *,int *) ;
 int FUNC_7 (struct nlattr**,struct fl_flow_key*,struct fl_flow_key*) ;
 int FUNC_8 (struct nlattr**,scalar_t__*,size_t,scalar_t__*,int ,int) ;
 int FUNC_9 (struct nlattr**,void*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct net*,struct nlattr*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_82, struct nlattr **VAR_83,
        struct fl_flow_key *VAR_84, struct fl_flow_key *VAR_85,
        struct netlink_ext_ack *VAR_86)
{
 __be16 VAR_87;
 int VAR_88 = 0;

 if (VAR_83[VAR_13]) {
  int VAR_89 = FUNC_12(VAR_82, VAR_83[VAR_13], VAR_86);
  if (VAR_89 < 0)
   return VAR_89;
  VAR_84->meta.ingress_ifindex = VAR_89;
  VAR_85->meta.ingress_ifindex = 0xffffffff;
 }

 FUNC_8(VAR_83, VAR_84->eth.dst, VAR_41,
         VAR_85->eth.dst, VAR_42,
         sizeof(VAR_84->eth.dst));
 FUNC_8(VAR_83, VAR_84->eth.src, VAR_43,
         VAR_85->eth.src, VAR_44,
         sizeof(VAR_84->eth.src));

 if (VAR_83[VAR_45]) {
  VAR_87 = FUNC_11(VAR_83[VAR_45]);

  if (FUNC_1(VAR_87)) {
   FUNC_9(VAR_83, VAR_87, VAR_79,
     VAR_80, &VAR_84->vlan,
     &VAR_85->vlan);

   if (VAR_83[VAR_78]) {
    VAR_87 = FUNC_11(VAR_83[VAR_78]);
    if (FUNC_1(VAR_87)) {
     FUNC_9(VAR_83, VAR_87,
       VAR_25,
       VAR_26,
       &VAR_84->cvlan, &VAR_85->cvlan);
     FUNC_8(VAR_83, &VAR_84->basic.n_proto,
             VAR_24,
             &VAR_85->basic.n_proto,
             VAR_81,
             sizeof(VAR_84->basic.n_proto));
    } else {
     VAR_84->basic.n_proto = VAR_87;
     VAR_85->basic.n_proto = FUNC_0(~0);
    }
   }
  } else {
   VAR_84->basic.n_proto = VAR_87;
   VAR_85->basic.n_proto = FUNC_0(~0);
  }
 }

 if (VAR_84->basic.n_proto == FUNC_10(VAR_1) ||
     VAR_84->basic.n_proto == FUNC_10(VAR_2)) {
  FUNC_8(VAR_83, &VAR_84->basic.ip_proto, VAR_63,
          &VAR_85->basic.ip_proto, VAR_81,
          sizeof(VAR_84->basic.ip_proto));
  FUNC_5(VAR_83, 0, &VAR_84->ip, &VAR_85->ip);
 }

 if (VAR_83[VAR_57] || VAR_83[VAR_55]) {
  VAR_84->control.addr_type = VAR_6;
  VAR_85->control.addr_type = ~0;
  FUNC_8(VAR_83, &VAR_84->ipv4.src, VAR_57,
          &VAR_85->ipv4.src, VAR_58,
          sizeof(VAR_84->ipv4.src));
  FUNC_8(VAR_83, &VAR_84->ipv4.dst, VAR_55,
          &VAR_85->ipv4.dst, VAR_56,
          sizeof(VAR_84->ipv4.dst));
 } else if (VAR_83[VAR_61] || VAR_83[VAR_59]) {
  VAR_84->control.addr_type = VAR_7;
  VAR_85->control.addr_type = ~0;
  FUNC_8(VAR_83, &VAR_84->ipv6.src, VAR_61,
          &VAR_85->ipv6.src, VAR_62,
          sizeof(VAR_84->ipv6.src));
  FUNC_8(VAR_83, &VAR_84->ipv6.dst, VAR_59,
          &VAR_85->ipv6.dst, VAR_60,
          sizeof(VAR_84->ipv6.dst));
 }

 if (VAR_84->basic.ip_proto == VAR_11) {
  FUNC_8(VAR_83, &VAR_84->tp.src, VAR_72,
          &VAR_85->tp.src, VAR_73,
          sizeof(VAR_84->tp.src));
  FUNC_8(VAR_83, &VAR_84->tp.dst, VAR_68,
          &VAR_85->tp.dst, VAR_69,
          sizeof(VAR_84->tp.dst));
  FUNC_8(VAR_83, &VAR_84->tcp.flags, VAR_70,
          &VAR_85->tcp.flags, VAR_71,
          sizeof(VAR_84->tcp.flags));
 } else if (VAR_84->basic.ip_proto == VAR_12) {
  FUNC_8(VAR_83, &VAR_84->tp.src, VAR_76,
          &VAR_85->tp.src, VAR_77,
          sizeof(VAR_84->tp.src));
  FUNC_8(VAR_83, &VAR_84->tp.dst, VAR_74,
          &VAR_85->tp.dst, VAR_75,
          sizeof(VAR_84->tp.dst));
 } else if (VAR_84->basic.ip_proto == VAR_10) {
  FUNC_8(VAR_83, &VAR_84->tp.src, VAR_66,
          &VAR_85->tp.src, VAR_67,
          sizeof(VAR_84->tp.src));
  FUNC_8(VAR_83, &VAR_84->tp.dst, VAR_64,
          &VAR_85->tp.dst, VAR_65,
          sizeof(VAR_84->tp.dst));
 } else if (VAR_84->basic.n_proto == FUNC_10(VAR_1) &&
     VAR_84->basic.ip_proto == VAR_8) {
  FUNC_8(VAR_83, &VAR_84->icmp.type, VAR_49,
          &VAR_85->icmp.type,
          VAR_50,
          sizeof(VAR_84->icmp.type));
  FUNC_8(VAR_83, &VAR_84->icmp.code, VAR_47,
          &VAR_85->icmp.code,
          VAR_48,
          sizeof(VAR_84->icmp.code));
 } else if (VAR_84->basic.n_proto == FUNC_10(VAR_2) &&
     VAR_84->basic.ip_proto == VAR_9) {
  FUNC_8(VAR_83, &VAR_84->icmp.type, VAR_53,
          &VAR_85->icmp.type,
          VAR_54,
          sizeof(VAR_84->icmp.type));
  FUNC_8(VAR_83, &VAR_84->icmp.code, VAR_51,
          &VAR_85->icmp.code,
          VAR_52,
          sizeof(VAR_84->icmp.code));
 } else if (VAR_84->basic.n_proto == FUNC_10(VAR_4) ||
     VAR_84->basic.n_proto == FUNC_10(VAR_3)) {
  VAR_88 = FUNC_6(VAR_83, &VAR_84->mpls, &VAR_85->mpls);
  if (VAR_88)
   return VAR_88;
 } else if (VAR_84->basic.n_proto == FUNC_10(VAR_0) ||
     VAR_84->basic.n_proto == FUNC_10(VAR_5)) {
  FUNC_8(VAR_83, &VAR_84->arp.sip, VAR_18,
          &VAR_85->arp.sip, VAR_19,
          sizeof(VAR_84->arp.sip));
  FUNC_8(VAR_83, &VAR_84->arp.tip, VAR_22,
          &VAR_85->arp.tip, VAR_23,
          sizeof(VAR_84->arp.tip));
  FUNC_8(VAR_83, &VAR_84->arp.op, VAR_14,
          &VAR_85->arp.op, VAR_15,
          sizeof(VAR_84->arp.op));
  FUNC_8(VAR_83, VAR_84->arp.sha, VAR_16,
          VAR_85->arp.sha, VAR_17,
          sizeof(VAR_84->arp.sha));
  FUNC_8(VAR_83, VAR_84->arp.tha, VAR_20,
          VAR_85->arp.tha, VAR_21,
          sizeof(VAR_84->arp.tha));
 }

 if (VAR_84->basic.ip_proto == VAR_11 ||
     VAR_84->basic.ip_proto == VAR_12 ||
     VAR_84->basic.ip_proto == VAR_10) {
  VAR_88 = FUNC_7(VAR_83, VAR_84, VAR_85);
  if (VAR_88)
   return VAR_88;
 }

 if (VAR_83[VAR_29] ||
     VAR_83[VAR_27]) {
  VAR_84->enc_control.addr_type = VAR_6;
  VAR_85->enc_control.addr_type = ~0;
  FUNC_8(VAR_83, &VAR_84->enc_ipv4.src,
          VAR_29,
          &VAR_85->enc_ipv4.src,
          VAR_30,
          sizeof(VAR_84->enc_ipv4.src));
  FUNC_8(VAR_83, &VAR_84->enc_ipv4.dst,
          VAR_27,
          &VAR_85->enc_ipv4.dst,
          VAR_28,
          sizeof(VAR_84->enc_ipv4.dst));
 }

 if (VAR_83[VAR_33] ||
     VAR_83[VAR_31]) {
  VAR_84->enc_control.addr_type = VAR_7;
  VAR_85->enc_control.addr_type = ~0;
  FUNC_8(VAR_83, &VAR_84->enc_ipv6.src,
          VAR_33,
          &VAR_85->enc_ipv6.src,
          VAR_34,
          sizeof(VAR_84->enc_ipv6.src));
  FUNC_8(VAR_83, &VAR_84->enc_ipv6.dst,
          VAR_31,
          &VAR_85->enc_ipv6.dst,
          VAR_32,
          sizeof(VAR_84->enc_ipv6.dst));
 }

 FUNC_8(VAR_83, &VAR_84->enc_key_id.keyid, VAR_35,
         &VAR_85->enc_key_id.keyid, VAR_81,
         sizeof(VAR_84->enc_key_id.keyid));

 FUNC_8(VAR_83, &VAR_84->enc_tp.src, VAR_39,
         &VAR_85->enc_tp.src, VAR_40,
         sizeof(VAR_84->enc_tp.src));

 FUNC_8(VAR_83, &VAR_84->enc_tp.dst, VAR_37,
         &VAR_85->enc_tp.dst, VAR_38,
         sizeof(VAR_84->enc_tp.dst));

 FUNC_5(VAR_83, 1, &VAR_84->enc_ip, &VAR_85->enc_ip);

 if (VAR_83[VAR_36]) {
  VAR_88 = FUNC_2(VAR_83, VAR_84, VAR_85, VAR_86);
  if (VAR_88)
   return VAR_88;
 }

 VAR_88 = FUNC_3(VAR_83, &VAR_84->ct, &VAR_85->ct, VAR_86);
 if (VAR_88)
  return VAR_88;

 if (VAR_83[VAR_46])
  VAR_88 = FUNC_4(VAR_83, &VAR_84->control.flags, &VAR_85->control.flags);

 return VAR_88;
}
