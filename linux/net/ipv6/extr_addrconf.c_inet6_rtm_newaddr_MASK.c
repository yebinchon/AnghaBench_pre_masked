
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {int ifa_flags; int ifa_index; int ifa_prefixlen; } ;
struct ifa_cacheinfo {void* ifa_prefered; void* ifa_valid; } ;
struct ifa6_config {int ifa_flags; int pfx; void* preferred_lft; void* valid_lft; void* rt_priority; int plen; struct in6_addr* peer_pfx; } ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_0 (struct inet6_dev*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct inet6_dev*) ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct nlattr*,struct nlattr*,struct in6_addr**) ;
 int VAR_18 ;
 int FUNC_5 (struct inet6_ifaddr*) ;
 int FUNC_6 (struct net*,int ,struct ifa6_config*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct inet6_ifaddr*,struct ifa6_config*) ;
 int FUNC_8 (struct net*,struct inet6_dev*) ;
 struct inet6_dev* FUNC_9 (struct net_device*) ;
 struct inet6_ifaddr* FUNC_10 (struct net*,int ,struct net_device*,int) ;
 int FUNC_11 (struct ifa6_config*,int ,int) ;
 struct ifa_cacheinfo* FUNC_12 (struct nlattr*) ;
 void* FUNC_13 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_14 (struct nlmsghdr*) ;
 int FUNC_15 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(struct sk_buff *VAR_19, struct nlmsghdr *VAR_20,
    struct netlink_ext_ack *VAR_21)
{
 struct net *VAR_22 = FUNC_16(VAR_19->sk);
 struct ifaddrmsg *VAR_23;
 struct nlattr *VAR_24[VAR_13+1];
 struct in6_addr *VAR_25;
 struct inet6_ifaddr *VAR_26;
 struct net_device *VAR_27;
 struct inet6_dev *VAR_28;
 struct ifa6_config VAR_29;
 int VAR_30;

 VAR_30 = FUNC_15(VAR_20, sizeof(*VAR_23), VAR_24, VAR_13,
         VAR_18, VAR_21);
 if (VAR_30 < 0)
  return VAR_30;

 FUNC_11(&VAR_29, 0, sizeof(VAR_29));

 VAR_23 = FUNC_14(VAR_20);
 VAR_29.pfx = FUNC_4(VAR_24[VAR_3], VAR_24[VAR_12], &VAR_25);
 if (!VAR_29.pfx)
  return -VAR_1;

 VAR_29.peer_pfx = VAR_25;
 VAR_29.plen = VAR_23->ifa_prefixlen;
 if (VAR_24[VAR_14])
  VAR_29.rt_priority = FUNC_13(VAR_24[VAR_14]);

 VAR_29.valid_lft = VAR_15;
 VAR_29.preferred_lft = VAR_15;

 if (VAR_24[VAR_4]) {
  struct ifa_cacheinfo *VAR_31;

  VAR_31 = FUNC_12(VAR_24[VAR_4]);
  VAR_29.valid_lft = VAR_31->ifa_valid;
  VAR_29.preferred_lft = VAR_31->ifa_prefered;
 }

 VAR_27 = FUNC_3(VAR_22, VAR_23->ifa_index);
 if (!VAR_27)
  return -VAR_2;

 if (VAR_24[VAR_5])
  VAR_29.ifa_flags = FUNC_13(VAR_24[VAR_5]);
 else
  VAR_29.ifa_flags = VAR_23->ifa_flags;


 VAR_29.ifa_flags &= VAR_9 | VAR_6 |
    VAR_7 | VAR_10 |
    VAR_8 | VAR_11;

 VAR_28 = FUNC_9(VAR_27);
 if (FUNC_0(VAR_28))
  return FUNC_2(VAR_28);

 if (!FUNC_8(VAR_22, VAR_28))
  VAR_29.ifa_flags &= ~VAR_11;

 if (VAR_29.ifa_flags & VAR_9 &&
     VAR_29.ifa_flags & VAR_11) {
  FUNC_1(VAR_21, "IFA_F_NODAD and IFA_F_OPTIMISTIC are mutually exclusive");
  return -VAR_1;
 }

 VAR_26 = FUNC_10(VAR_22, VAR_29.pfx, VAR_27, 1);
 if (!VAR_26) {




  return FUNC_6(VAR_22, VAR_23->ifa_index, &VAR_29, VAR_21);
 }

 if (VAR_20->nlmsg_flags & VAR_16 ||
     !(VAR_20->nlmsg_flags & VAR_17))
  VAR_30 = -VAR_0;
 else
  VAR_30 = FUNC_7(VAR_26, &VAR_29);

 FUNC_5(VAR_26);

 return VAR_30;
}
