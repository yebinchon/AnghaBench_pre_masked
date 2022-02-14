
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct in6_addr {int dummy; } ;
struct mld_msg {struct in6_addr mld_mca; } ;
struct mld2_query {scalar_t__ mld2q_nsrcs; int mld2q_srcs; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_addr; struct ifmcaddr6* next; } ;
struct icmp6hdr {int dummy; } ;
struct TYPE_4__ {int flags; scalar_t__ ra; } ;
struct TYPE_3__ {scalar_t__ payload_len; int hop_limit; struct in6_addr const saddr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct inet6_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ifmcaddr6*,unsigned long) ;
 int FUNC_5 (struct in6_addr const*,int *) ;
 int FUNC_6 (struct in6_addr const*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct inet6_dev*) ;
 scalar_t__ FUNC_9 (struct inet6_dev*) ;
 scalar_t__ FUNC_10 (struct ifmcaddr6*,int,int ) ;
 int FUNC_11 (struct inet6_dev*,struct mld_msg*,unsigned long*,int) ;
 int FUNC_12 (struct inet6_dev*,struct mld2_query*,unsigned long*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct sk_buff *VAR_10)
{
 struct mld2_query *VAR_11 = ((void*)0);
 struct ifmcaddr6 *VAR_12;
 const struct in6_addr *VAR_13;
 unsigned long VAR_14;
 struct inet6_dev *VAR_15;
 struct mld_msg *VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19, VAR_20;

 if (!FUNC_14(VAR_10, sizeof(struct in6_addr)))
  return -VAR_0;


 VAR_19 = FUNC_13(FUNC_7(VAR_10)->payload_len) + sizeof(struct ipv6hdr);
 VAR_19 -= FUNC_17(VAR_10);
 if (!(FUNC_6(&FUNC_7(VAR_10)->saddr) & VAR_3) ||
     FUNC_7(VAR_10)->hop_limit != 1 ||
     !(FUNC_0(VAR_10)->flags & VAR_1) ||
     FUNC_0(VAR_10)->ra != FUNC_2(VAR_5))
  return -VAR_0;

 VAR_15 = FUNC_1(VAR_10->dev);
 if (!VAR_15)
  return 0;

 VAR_16 = (struct mld_msg *)FUNC_3(VAR_10);
 VAR_13 = &VAR_16->mld_mca;
 VAR_17 = FUNC_6(VAR_13);

 if (VAR_17 != VAR_2 &&
     !(VAR_17&VAR_4))
  return -VAR_0;

 if (VAR_19 < VAR_8) {
  return -VAR_0;
 } else if (VAR_19 == VAR_8 || FUNC_9(VAR_15)) {
  VAR_20 = FUNC_11(VAR_15, VAR_16, &VAR_14,
         VAR_19 == VAR_8);
  if (VAR_20 < 0)
   return VAR_20;
 } else if (VAR_19 >= VAR_9) {
  int VAR_21 = sizeof(struct mld2_query) -
      sizeof(struct icmp6hdr);

  if (!FUNC_14(VAR_10, VAR_21))
   return -VAR_0;

  VAR_11 = (struct mld2_query *)FUNC_18(VAR_10);

  VAR_20 = FUNC_12(VAR_15, VAR_11, &VAR_14);
  if (VAR_20 < 0)
   return VAR_20;

  if (VAR_17 == VAR_2) {
   if (VAR_11->mld2q_nsrcs)
    return -VAR_0;

   FUNC_8(VAR_15);
   return 0;
  }

  if (VAR_11->mld2q_nsrcs != 0) {
   if (!FUNC_14(VAR_10, VAR_21 +
       FUNC_13(VAR_11->mld2q_nsrcs) * sizeof(struct in6_addr)))
    return -VAR_0;

   VAR_11 = (struct mld2_query *)FUNC_18(VAR_10);
   VAR_18 = 1;
  }
 } else {
  return -VAR_0;
 }

 FUNC_15(&VAR_15->lock);
 if (VAR_17 == VAR_2) {
  for (VAR_12 = VAR_15->mc_list; VAR_12; VAR_12 = VAR_12->next) {
   FUNC_19(&VAR_12->mca_lock);
   FUNC_4(VAR_12, VAR_14);
   FUNC_20(&VAR_12->mca_lock);
  }
 } else {
  for (VAR_12 = VAR_15->mc_list; VAR_12; VAR_12 = VAR_12->next) {
   if (!FUNC_5(VAR_13, &VAR_12->mca_addr))
    continue;
   FUNC_19(&VAR_12->mca_lock);
   if (VAR_12->mca_flags & VAR_7) {

    if (!VAR_18)
     VAR_12->mca_flags &= ~VAR_6;
   } else {

    if (VAR_18)
     VAR_12->mca_flags |= VAR_6;
    else
     VAR_12->mca_flags &= ~VAR_6;
   }
   if (!(VAR_12->mca_flags & VAR_6) ||
       FUNC_10(VAR_12, FUNC_13(VAR_11->mld2q_nsrcs), VAR_11->mld2q_srcs))
    FUNC_4(VAR_12, VAR_14);
   FUNC_20(&VAR_12->mca_lock);
   break;
  }
 }
 FUNC_16(&VAR_15->lock);

 return 0;
}
