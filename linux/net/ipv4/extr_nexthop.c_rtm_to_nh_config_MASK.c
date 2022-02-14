
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nhmsg {int nh_flags; int nh_family; int nh_protocol; scalar_t__ nh_scope; scalar_t__ resvd; } ;
struct TYPE_7__ {int ipv6; int ipv4; } ;
struct TYPE_6__ {struct net* nl_net; struct nlmsghdr* nlh; int portid; } ;
struct nh_config {int nh_family; int nh_flags; scalar_t__ nh_grp_type; int nh_blackhole; void* nh_encap_type; struct nlattr* nh_encap; TYPE_2__ gw; TYPE_3__* dev; void* nh_ifindex; struct nlattr* nh_grp; void* nh_id; int nh_protocol; TYPE_1__ nlinfo; int nlflags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_9__ {int portid; } ;
struct TYPE_8__ {int flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
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
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_17 ;
 TYPE_3__* FUNC_2 (struct net*,void*) ;
 int FUNC_3 (void*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nh_config*,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct net*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 void* FUNC_9 (struct nlattr*) ;
 void* FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct nlattr*) ;
 struct nhmsg* FUNC_12 (struct nlmsghdr*) ;
 int FUNC_13 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_14(struct net *VAR_19, struct sk_buff *VAR_20,
       struct nlmsghdr *VAR_21, struct nh_config *VAR_22,
       struct netlink_ext_ack *VAR_23)
{
 struct nhmsg *VAR_24 = FUNC_12(VAR_21);
 struct nlattr *VAR_25[VAR_15 + 1];
 int VAR_26;

 VAR_26 = FUNC_13(VAR_21, sizeof(*VAR_24), VAR_25, VAR_15, VAR_18,
     VAR_23);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = -VAR_0;
 if (VAR_24->resvd || VAR_24->nh_scope) {
  FUNC_1(VAR_23, "Invalid values in ancillary header");
  goto out;
 }
 if (VAR_24->nh_flags & ~VAR_5) {
  FUNC_1(VAR_23, "Invalid nexthop flags in ancillary header");
  goto out;
 }

 switch (VAR_24->nh_family) {
 case 130:
 case 129:
  break;
 case 128:
  if (VAR_25[VAR_10])
   break;

 default:
  FUNC_1(VAR_23, "Invalid address family");
  goto out;
 }

 if (VAR_25[VAR_11] || VAR_25[VAR_14]) {
  FUNC_1(VAR_23, "Invalid attributes in request");
  goto out;
 }

 FUNC_4(VAR_22, 0, sizeof(*VAR_22));
 VAR_22->nlflags = VAR_21->nlmsg_flags;
 VAR_22->nlinfo.portid = FUNC_0(VAR_20).portid;
 VAR_22->nlinfo.nlh = VAR_21;
 VAR_22->nlinfo.nl_net = VAR_19;

 VAR_22->nh_family = VAR_24->nh_family;
 VAR_22->nh_protocol = VAR_24->nh_protocol;
 VAR_22->nh_flags = VAR_24->nh_flags;

 if (VAR_25[VAR_13])
  VAR_22->nh_id = FUNC_10(VAR_25[VAR_13]);

 if (VAR_25[VAR_10]) {
  if (VAR_24->nh_family != 128) {
   FUNC_1(VAR_23, "Invalid family for group");
   goto out;
  }
  VAR_22->nh_grp = VAR_25[VAR_10];

  VAR_22->nh_grp_type = VAR_4;
  if (VAR_25[VAR_12])
   VAR_22->nh_grp_type = FUNC_9(VAR_25[VAR_12]);

  if (VAR_22->nh_grp_type > VAR_3) {
   FUNC_1(VAR_23, "Invalid group type");
   goto out;
  }
  VAR_26 = FUNC_6(VAR_19, VAR_25, VAR_23);


  goto out;
 }

 if (VAR_25[VAR_6]) {
  if (VAR_25[VAR_9] || VAR_25[VAR_16] ||
      VAR_25[VAR_7] || VAR_25[VAR_8]) {
   FUNC_1(VAR_23, "Blackhole attribute can not be used with gateway or oif");
   goto out;
  }

  VAR_22->nh_blackhole = 1;
  VAR_26 = 0;
  goto out;
 }

 if (!VAR_25[VAR_16]) {
  FUNC_1(VAR_23, "Device attribute required for non-blackhole nexthops");
  goto out;
 }

 VAR_22->nh_ifindex = FUNC_10(VAR_25[VAR_16]);
 if (VAR_22->nh_ifindex)
  VAR_22->dev = FUNC_2(VAR_19, VAR_22->nh_ifindex);

 if (!VAR_22->dev) {
  FUNC_1(VAR_23, "Invalid device index");
  goto out;
 } else if (!(VAR_22->dev->flags & VAR_2)) {
  FUNC_1(VAR_23, "Nexthop device is not up");
  VAR_26 = -VAR_1;
  goto out;
 } else if (!FUNC_5(VAR_22->dev)) {
  FUNC_1(VAR_23, "Carrier for nexthop device is down");
  VAR_26 = -VAR_1;
  goto out;
 }

 VAR_26 = -VAR_0;
 if (VAR_25[VAR_9]) {
  struct nlattr *VAR_27 = VAR_25[VAR_9];

  switch (VAR_22->nh_family) {
  case 130:
   if (FUNC_11(VAR_27) != sizeof(u32)) {
    FUNC_1(VAR_23, "Invalid gateway");
    goto out;
   }
   VAR_22->gw.ipv4 = FUNC_7(VAR_27);
   break;
  case 129:
   if (FUNC_11(VAR_27) != sizeof(struct in6_addr)) {
    FUNC_1(VAR_23, "Invalid gateway");
    goto out;
   }
   VAR_22->gw.ipv6 = FUNC_8(VAR_27);
   break;
  default:
   FUNC_1(VAR_23,
           "Unknown address family for gateway");
   goto out;
  }
 } else {

  if (VAR_22->nh_flags & VAR_17) {
   FUNC_1(VAR_23,
           "ONLINK flag can not be set for nexthop without a gateway");
   goto out;
  }
 }

 if (VAR_25[VAR_7]) {
  VAR_22->nh_encap = VAR_25[VAR_7];

  if (!VAR_25[VAR_8]) {
   FUNC_1(VAR_23, "LWT encapsulation type is missing");
   goto out;
  }

  VAR_22->nh_encap_type = FUNC_9(VAR_25[VAR_8]);
  VAR_26 = FUNC_3(VAR_22->nh_encap_type, VAR_23);
  if (VAR_26 < 0)
   goto out;

 } else if (VAR_25[VAR_8]) {
  FUNC_1(VAR_23, "LWT encapsulation attribute is missing");
  goto out;
 }


 VAR_26 = 0;
out:
 return VAR_26;
}
