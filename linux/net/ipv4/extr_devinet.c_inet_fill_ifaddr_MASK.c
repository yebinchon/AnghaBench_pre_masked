
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet_fill_args {scalar_t__ netnsid; int flags; int event; int seq; int portid; } ;
struct in_ifaddr {int ifa_flags; scalar_t__ ifa_preferred_lft; scalar_t__ ifa_valid_lft; long ifa_tstamp; int ifa_rt_priority; int ifa_cstamp; scalar_t__* ifa_label; scalar_t__ ifa_broadcast; scalar_t__ ifa_local; scalar_t__ ifa_address; TYPE_2__* ifa_dev; int ifa_scope; int ifa_prefixlen; } ;
struct ifaddrmsg {int ifa_flags; int ifa_index; int ifa_scope; int ifa_prefixlen; int ifa_family; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 long VAR_12 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifaddrmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,long,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_13, struct in_ifaddr *VAR_14,
       struct inet_fill_args *VAR_15)
{
 struct ifaddrmsg *VAR_16;
 struct nlmsghdr *VAR_17;
 u32 VAR_18, VAR_19;

 VAR_17 = FUNC_7(VAR_13, VAR_15->portid, VAR_15->seq, VAR_15->event, sizeof(*VAR_16),
   VAR_15->flags);
 if (!VAR_17)
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_17);
 VAR_16->ifa_family = VAR_0;
 VAR_16->ifa_prefixlen = VAR_14->ifa_prefixlen;
 VAR_16->ifa_flags = VAR_14->ifa_flags;
 VAR_16->ifa_scope = VAR_14->ifa_scope;
 VAR_16->ifa_index = VAR_14->ifa_dev->dev->ifindex;

 if (VAR_15->netnsid >= 0 &&
     FUNC_1(VAR_13, VAR_10, VAR_15->netnsid))
  goto nla_put_failure;

 if (!(VAR_16->ifa_flags & VAR_6)) {
  VAR_18 = VAR_14->ifa_preferred_lft;
  VAR_19 = VAR_14->ifa_valid_lft;
  if (VAR_18 != VAR_11) {
   long VAR_20 = (VAR_12 - VAR_14->ifa_tstamp) / VAR_2;

   if (VAR_18 > VAR_20)
    VAR_18 -= VAR_20;
   else
    VAR_18 = 0;
   if (VAR_19 != VAR_11) {
    if (VAR_19 > VAR_20)
     VAR_19 -= VAR_20;
    else
     VAR_19 = 0;
   }
  }
 } else {
  VAR_18 = VAR_11;
  VAR_19 = VAR_11;
 }
 if ((VAR_14->ifa_address &&
      FUNC_0(VAR_13, VAR_3, VAR_14->ifa_address)) ||
     (VAR_14->ifa_local &&
      FUNC_0(VAR_13, VAR_8, VAR_14->ifa_local)) ||
     (VAR_14->ifa_broadcast &&
      FUNC_0(VAR_13, VAR_4, VAR_14->ifa_broadcast)) ||
     (VAR_14->ifa_label[0] &&
      FUNC_2(VAR_13, VAR_7, VAR_14->ifa_label)) ||
     FUNC_3(VAR_13, VAR_5, VAR_14->ifa_flags) ||
     (VAR_14->ifa_rt_priority &&
      FUNC_3(VAR_13, VAR_9, VAR_14->ifa_rt_priority)) ||
     FUNC_8(VAR_13, VAR_14->ifa_cstamp, VAR_14->ifa_tstamp,
     VAR_18, VAR_19))
  goto nla_put_failure;

 FUNC_6(VAR_13, VAR_17);
 return 0;

nla_put_failure:
 FUNC_4(VAR_13, VAR_17);
 return -VAR_1;
}
