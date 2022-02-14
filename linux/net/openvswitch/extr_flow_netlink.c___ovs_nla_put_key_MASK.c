
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
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u16 ;
struct TYPE_14__ {int tll; int sll; int target; } ;
struct TYPE_19__ {int dst; int src; } ;
struct TYPE_15__ {TYPE_10__ nd; int label; TYPE_2__ addr; } ;
struct TYPE_26__ {int dst; int src; scalar_t__ flags; } ;
struct TYPE_25__ {scalar_t__ proto; scalar_t__ frag; int ttl; int tos; } ;
struct TYPE_16__ {scalar_t__ tci; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_12__ cvlan; TYPE_12__ vlan; int dst; int src; } ;
struct TYPE_23__ {int top_lse; } ;
struct TYPE_21__ {int tha; int sha; } ;
struct TYPE_20__ {int dst; int src; } ;
struct TYPE_22__ {TYPE_4__ arp; TYPE_3__ addr; } ;
struct TYPE_18__ {int priority; scalar_t__ in_port; int skb_mark; } ;
struct TYPE_17__ {int tun_flags; } ;
struct sw_flow_key {int recirc_id; int ovs_flow_hash; TYPE_11__ ipv6; TYPE_9__ tp; TYPE_8__ ip; TYPE_7__ eth; TYPE_6__ mpls; TYPE_5__ ipv4; int nsh; TYPE_1__ phy; scalar_t__ tun_proto; int tun_opts_len; TYPE_13__ tun_key; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_udp {int udp_dst; int udp_src; } ;
struct ovs_key_tcp {int tcp_dst; int tcp_src; } ;
struct ovs_key_sctp {int sctp_dst; int sctp_src; } ;
struct ovs_key_nd {int nd_tll; int nd_sll; int nd_target; } ;
struct ovs_key_mpls {int mpls_lse; } ;
struct ovs_key_ipv6 {scalar_t__ ipv6_proto; scalar_t__ ipv6_frag; int ipv6_hlimit; int ipv6_tclass; int ipv6_label; int ipv6_dst; int ipv6_src; } ;
struct ovs_key_ipv4 {scalar_t__ ipv4_proto; scalar_t__ ipv4_frag; int ipv4_ttl; int ipv4_tos; int ipv4_dst; int ipv4_src; } ;
struct ovs_key_icmpv6 {scalar_t__ icmpv6_type; void* icmpv6_code; } ;
struct ovs_key_icmp {void* icmp_code; void* icmp_type; } ;
struct ovs_key_ethernet {int eth_dst; int eth_src; } ;
struct ovs_key_arp {int arp_tha; int arp_sha; scalar_t__ arp_op; int arp_tip; int arp_sip; } ;
struct nlattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
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
 void* FUNC_0 (struct sw_flow_key const*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,TYPE_13__*,void const*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct ovs_key_arp*,int ,int) ;
 void* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int) ;
 struct nlattr* FUNC_14 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_15 (int *,int,struct sk_buff*) ;
 void* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct sw_flow_key const*,struct sw_flow_key const*,struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sw_flow_key const*) ;
 scalar_t__ FUNC_19 (struct sk_buff*,TYPE_12__*,int) ;

__attribute__((used)) static int FUNC_20(const struct sw_flow_key *VAR_37,
        const struct sw_flow_key *VAR_38, bool VAR_39,
        struct sk_buff *VAR_40)
{
 struct ovs_key_ethernet *VAR_41;
 struct nlattr *VAR_42;
 struct nlattr *VAR_43 = ((void*)0);
 struct nlattr *VAR_44 = ((void*)0);

 if (FUNC_13(VAR_40, VAR_30, VAR_38->recirc_id))
  goto nla_put_failure;

 if (FUNC_13(VAR_40, VAR_18, VAR_38->ovs_flow_hash))
  goto nla_put_failure;

 if (FUNC_13(VAR_40, VAR_29, VAR_38->phy.priority))
  goto nla_put_failure;

 if ((VAR_37->tun_proto || VAR_39)) {
  const void *VAR_45 = ((void*)0);

  if (VAR_38->tun_key.tun_flags & VAR_36)
   VAR_45 = FUNC_0(VAR_38, VAR_37->tun_opts_len);

  if (FUNC_6(VAR_40, &VAR_38->tun_key, VAR_45,
         VAR_37->tun_opts_len, VAR_37->tun_proto, 0))
   goto nla_put_failure;
 }

 if (VAR_37->phy.in_port == VAR_0) {
  if (VAR_39 && (VAR_38->phy.in_port == 0xffff))
   if (FUNC_13(VAR_40, VAR_24, 0xffffffff))
    goto nla_put_failure;
 } else {
  u16 VAR_46;
  VAR_46 = !VAR_39 ? 0 : 0xffff;

  if (FUNC_13(VAR_40, VAR_24,
    (VAR_46 << 16) | VAR_38->phy.in_port))
   goto nla_put_failure;
 }

 if (FUNC_13(VAR_40, VAR_32, VAR_38->phy.skb_mark))
  goto nla_put_failure;

 if (FUNC_17(VAR_37, VAR_38, VAR_40))
  goto nla_put_failure;

 if (FUNC_18(VAR_37) == VAR_13) {
  VAR_42 = FUNC_14(VAR_40, VAR_20, sizeof(*VAR_41));
  if (!VAR_42)
   goto nla_put_failure;

  VAR_41 = FUNC_9(VAR_42);
  FUNC_4(VAR_41->eth_src, VAR_38->eth.src);
  FUNC_4(VAR_41->eth_dst, VAR_38->eth.dst);

  if (VAR_37->eth.vlan.tci || FUNC_3(VAR_37->eth.type)) {
   if (FUNC_19(VAR_40, &VAR_38->eth.vlan, VAR_39))
    goto nla_put_failure;
   VAR_43 = FUNC_11(VAR_40, VAR_19);
   if (!VAR_37->eth.vlan.tci)
    goto unencap;

   if (VAR_37->eth.cvlan.tci || FUNC_3(VAR_37->eth.type)) {
    if (FUNC_19(VAR_40, &VAR_38->eth.cvlan, VAR_39))
     goto nla_put_failure;
    VAR_44 = FUNC_11(VAR_40,
         VAR_19);
    if (!VAR_37->eth.cvlan.tci)
     goto unencap;
   }
  }

  if (VAR_37->eth.type == FUNC_5(VAR_2)) {






   if (VAR_39 && VAR_38->eth.type)
    if (FUNC_12(VAR_40, VAR_21,
       VAR_38->eth.type))
     goto nla_put_failure;
   goto unencap;
  }
 }

 if (FUNC_12(VAR_40, VAR_21, VAR_38->eth.type))
  goto nla_put_failure;

 if (FUNC_3(VAR_37->eth.type)) {



  FUNC_1(!(VAR_43 && VAR_44));
  goto unencap;
 }

 if (VAR_37->eth.type == FUNC_5(VAR_4)) {
  struct ovs_key_ipv4 *VAR_47;

  VAR_42 = FUNC_14(VAR_40, VAR_25, sizeof(*VAR_47));
  if (!VAR_42)
   goto nla_put_failure;
  VAR_47 = FUNC_9(VAR_42);
  VAR_47->ipv4_src = VAR_38->ipv4.addr.src;
  VAR_47->ipv4_dst = VAR_38->ipv4.addr.dst;
  VAR_47->ipv4_proto = VAR_38->ip.proto;
  VAR_47->ipv4_tos = VAR_38->ip.tos;
  VAR_47->ipv4_ttl = VAR_38->ip.ttl;
  VAR_47->ipv4_frag = VAR_38->ip.frag;
 } else if (VAR_37->eth.type == FUNC_5(VAR_5)) {
  struct ovs_key_ipv6 *VAR_48;

  VAR_42 = FUNC_14(VAR_40, VAR_26, sizeof(*VAR_48));
  if (!VAR_42)
   goto nla_put_failure;
  VAR_48 = FUNC_9(VAR_42);
  FUNC_7(VAR_48->ipv6_src, &VAR_38->ipv6.addr.src,
    sizeof(VAR_48->ipv6_src));
  FUNC_7(VAR_48->ipv6_dst, &VAR_38->ipv6.addr.dst,
    sizeof(VAR_48->ipv6_dst));
  VAR_48->ipv6_label = VAR_38->ipv6.label;
  VAR_48->ipv6_proto = VAR_38->ip.proto;
  VAR_48->ipv6_tclass = VAR_38->ip.tos;
  VAR_48->ipv6_hlimit = VAR_38->ip.ttl;
  VAR_48->ipv6_frag = VAR_38->ip.frag;
 } else if (VAR_37->eth.type == FUNC_5(VAR_6)) {
  if (FUNC_15(&VAR_38->nsh, VAR_39, VAR_40))
   goto nla_put_failure;
 } else if (VAR_37->eth.type == FUNC_5(VAR_3) ||
     VAR_37->eth.type == FUNC_5(VAR_7)) {
  struct ovs_key_arp *VAR_49;

  VAR_42 = FUNC_14(VAR_40, VAR_17, sizeof(*VAR_49));
  if (!VAR_42)
   goto nla_put_failure;
  VAR_49 = FUNC_9(VAR_42);
  FUNC_8(VAR_49, 0, sizeof(struct ovs_key_arp));
  VAR_49->arp_sip = VAR_38->ipv4.addr.src;
  VAR_49->arp_tip = VAR_38->ipv4.addr.dst;
  VAR_49->arp_op = FUNC_5(VAR_38->ip.proto);
  FUNC_4(VAR_49->arp_sha, VAR_38->ipv4.arp.sha);
  FUNC_4(VAR_49->arp_tha, VAR_38->ipv4.arp.tha);
 } else if (FUNC_2(VAR_37->eth.type)) {
  struct ovs_key_mpls *VAR_50;

  VAR_42 = FUNC_14(VAR_40, VAR_27, sizeof(*VAR_50));
  if (!VAR_42)
   goto nla_put_failure;
  VAR_50 = FUNC_9(VAR_42);
  VAR_50->mpls_lse = VAR_38->mpls.top_lse;
 }

 if ((VAR_37->eth.type == FUNC_5(VAR_4) ||
      VAR_37->eth.type == FUNC_5(VAR_5)) &&
      VAR_37->ip.frag != VAR_16) {

  if (VAR_37->ip.proto == VAR_11) {
   struct ovs_key_tcp *VAR_51;

   VAR_42 = FUNC_14(VAR_40, VAR_33, sizeof(*VAR_51));
   if (!VAR_42)
    goto nla_put_failure;
   VAR_51 = FUNC_9(VAR_42);
   VAR_51->tcp_src = VAR_38->tp.src;
   VAR_51->tcp_dst = VAR_38->tp.dst;
   if (FUNC_12(VAR_40, VAR_34,
      VAR_38->tp.flags))
    goto nla_put_failure;
  } else if (VAR_37->ip.proto == VAR_12) {
   struct ovs_key_udp *VAR_52;

   VAR_42 = FUNC_14(VAR_40, VAR_35, sizeof(*VAR_52));
   if (!VAR_42)
    goto nla_put_failure;
   VAR_52 = FUNC_9(VAR_42);
   VAR_52->udp_src = VAR_38->tp.src;
   VAR_52->udp_dst = VAR_38->tp.dst;
  } else if (VAR_37->ip.proto == VAR_10) {
   struct ovs_key_sctp *VAR_53;

   VAR_42 = FUNC_14(VAR_40, VAR_31, sizeof(*VAR_53));
   if (!VAR_42)
    goto nla_put_failure;
   VAR_53 = FUNC_9(VAR_42);
   VAR_53->sctp_src = VAR_38->tp.src;
   VAR_53->sctp_dst = VAR_38->tp.dst;
  } else if (VAR_37->eth.type == FUNC_5(VAR_4) &&
      VAR_37->ip.proto == VAR_8) {
   struct ovs_key_icmp *VAR_54;

   VAR_42 = FUNC_14(VAR_40, VAR_22, sizeof(*VAR_54));
   if (!VAR_42)
    goto nla_put_failure;
   VAR_54 = FUNC_9(VAR_42);
   VAR_54->icmp_type = FUNC_16(VAR_38->tp.src);
   VAR_54->icmp_code = FUNC_16(VAR_38->tp.dst);
  } else if (VAR_37->eth.type == FUNC_5(VAR_5) &&
      VAR_37->ip.proto == VAR_9) {
   struct ovs_key_icmpv6 *VAR_55;

   VAR_42 = FUNC_14(VAR_40, VAR_23,
      sizeof(*VAR_55));
   if (!VAR_42)
    goto nla_put_failure;
   VAR_55 = FUNC_9(VAR_42);
   VAR_55->icmpv6_type = FUNC_16(VAR_38->tp.src);
   VAR_55->icmpv6_code = FUNC_16(VAR_38->tp.dst);

   if (VAR_55->icmpv6_type == VAR_15 ||
       VAR_55->icmpv6_type == VAR_14) {
    struct ovs_key_nd *VAR_56;

    VAR_42 = FUNC_14(VAR_40, VAR_28, sizeof(*VAR_56));
    if (!VAR_42)
     goto nla_put_failure;
    VAR_56 = FUNC_9(VAR_42);
    FUNC_7(VAR_56->nd_target, &VAR_38->ipv6.nd.target,
       sizeof(VAR_56->nd_target));
    FUNC_4(VAR_56->nd_sll, VAR_38->ipv6.nd.sll);
    FUNC_4(VAR_56->nd_tll, VAR_38->ipv6.nd.tll);
   }
  }
 }

unencap:
 if (VAR_44)
  FUNC_10(VAR_40, VAR_44);
 if (VAR_43)
  FUNC_10(VAR_40, VAR_43);

 return 0;

nla_put_failure:
 return -VAR_1;
}
