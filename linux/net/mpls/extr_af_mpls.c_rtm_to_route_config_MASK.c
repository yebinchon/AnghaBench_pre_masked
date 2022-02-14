
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int sk; } ;
struct rtmsg {scalar_t__ rtm_family; int rtm_dst_len; scalar_t__ rtm_src_len; scalar_t__ rtm_tos; scalar_t__ rtm_table; scalar_t__ rtm_scope; scalar_t__ rtm_type; scalar_t__ rtm_flags; int rtm_protocol; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {int nl_net; struct nlmsghdr* nlh; int portid; } ;
struct mpls_route_config {int rc_output_labels; int rc_ttl_propagate; int rc_mp_len; int rc_mp; int rc_via; int rc_via_table; int rc_via_alen; int rc_label; TYPE_1__ rc_nlinfo; int * rc_output_label; int rc_ifindex; int rc_nlflags; int rc_protocol; } ;
struct TYPE_4__ {int portid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr*,char*) ;


 int VAR_8 ;





 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int *,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*,int,int*,int *,struct netlink_ext_ack*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*,int *,int *,int ,struct netlink_ext_ack*) ;
 int FUNC_9 (struct nlattr*) ;
 struct rtmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct nlmsghdr*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_13,
          struct nlmsghdr *VAR_14,
          struct mpls_route_config *VAR_15,
          struct netlink_ext_ack *VAR_16)
{
 struct rtmsg *VAR_17;
 struct nlattr *VAR_18[VAR_8+1];
 int VAR_19;
 int VAR_20;

 VAR_20 = FUNC_11(VAR_14, sizeof(*VAR_17), VAR_18, VAR_8,
         VAR_12, VAR_16);
 if (VAR_20 < 0)
  goto errout;

 VAR_20 = -VAR_1;
 VAR_17 = FUNC_10(VAR_14);

 if (VAR_17->rtm_family != VAR_0) {
  FUNC_1(VAR_16, "Invalid address family in rtmsg");
  goto errout;
 }
 if (VAR_17->rtm_dst_len != 20) {
  FUNC_1(VAR_16, "rtm_dst_len must be 20 for MPLS");
  goto errout;
 }
 if (VAR_17->rtm_src_len != 0) {
  FUNC_1(VAR_16, "rtm_src_len must be 0 for MPLS");
  goto errout;
 }
 if (VAR_17->rtm_tos != 0) {
  FUNC_1(VAR_16, "rtm_tos must be 0 for MPLS");
  goto errout;
 }
 if (VAR_17->rtm_table != VAR_11) {
  FUNC_1(VAR_16,
          "MPLS only supports the main route table");
  goto errout;
 }






 if (VAR_17->rtm_scope != VAR_10) {
  FUNC_1(VAR_16,
          "Invalid route scope  - MPLS only supports UNIVERSE");
  goto errout;
 }
 if (VAR_17->rtm_type != VAR_9) {
  FUNC_1(VAR_16,
          "Invalid route type - MPLS only supports UNICAST");
  goto errout;
 }
 if (VAR_17->rtm_flags != 0) {
  FUNC_1(VAR_16, "rtm_flags must be 0 for MPLS");
  goto errout;
 }

 VAR_15->rc_label = VAR_2;
 VAR_15->rc_protocol = VAR_17->rtm_protocol;
 VAR_15->rc_via_table = VAR_4;
 VAR_15->rc_ttl_propagate = VAR_5;
 VAR_15->rc_nlflags = VAR_14->nlmsg_flags;
 VAR_15->rc_nlinfo.portid = FUNC_0(VAR_13).portid;
 VAR_15->rc_nlinfo.nlh = VAR_14;
 VAR_15->rc_nlinfo.nl_net = FUNC_12(VAR_13->sk);

 for (VAR_19 = 0; VAR_19 <= VAR_8; VAR_19++) {
  struct nlattr *VAR_21 = VAR_18[VAR_19];
  if (!VAR_21)
   continue;

  switch (VAR_19) {
  case 130:
   VAR_15->rc_ifindex = FUNC_6(VAR_21);
   break;
  case 131:
   if (FUNC_5(VAR_21, VAR_3,
        &VAR_15->rc_output_labels,
        VAR_15->rc_output_label, VAR_16))
    goto errout;
   break;
  case 134:
  {
   u8 VAR_22;
   if (FUNC_5(VAR_21, 1, &VAR_22,
        &VAR_15->rc_label, VAR_16))
    goto errout;

   if (!FUNC_3(VAR_15->rc_nlinfo.nl_net,
        &VAR_15->rc_label, VAR_16))
    goto errout;
   break;
  }
  case 133:
   FUNC_1(VAR_16, "MPLS does not support RTA_GATEWAY attribute");
   goto errout;
  case 128:
  {
   if (FUNC_8(VAR_21, &VAR_15->rc_via_alen,
     &VAR_15->rc_via_table, VAR_15->rc_via,
     VAR_16))
    goto errout;
   break;
  }
  case 132:
  {
   VAR_15->rc_mp = FUNC_4(VAR_21);
   VAR_15->rc_mp_len = FUNC_9(VAR_21);
   break;
  }
  case 129:
  {
   u8 VAR_23 = FUNC_7(VAR_21);

   if (VAR_23 > 1) {
    FUNC_2(VAR_16, VAR_21,
          "RTA_TTL_PROPAGATE can only be 0 or 1");
    goto errout;
   }
   VAR_15->rc_ttl_propagate = VAR_23 ?
    VAR_7 :
    VAR_6;
   break;
  }
  default:
   FUNC_2(VAR_16, VAR_21, "Unknown attribute");

   goto errout;
  }
 }

 VAR_20 = 0;
errout:
 return VAR_20;
}
