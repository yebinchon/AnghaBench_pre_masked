
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int transport_header; scalar_t__ ip_summed; int dev; scalar_t__ encapsulation; } ;
struct TYPE_9__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_sr_hdr {int segments_left; scalar_t__ nexthdr; int hdrlen; struct in6_addr* segments; } ;
struct inet6_skb_parm {int srcrt; int lastopt; scalar_t__* nhoff; } ;
struct TYPE_10__ {int seg6_enabled; } ;
struct inet6_dev {TYPE_3__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_13__ {int hop_limit; struct in6_addr daddr; } ;
struct TYPE_12__ {TYPE_4__* dev; scalar_t__ error; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_8__ {int seg6_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,struct net*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int*) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 struct inet6_dev* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_6__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 TYPE_5__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,int,int) ;
 int FUNC_23 (struct sk_buff*,int) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_28(struct sk_buff *VAR_9)
{
 struct inet6_skb_parm *VAR_10 = FUNC_0(VAR_9);
 struct net *VAR_11 = FUNC_4(VAR_9->dev);
 struct ipv6_sr_hdr *VAR_12;
 struct inet6_dev *VAR_13;
 struct in6_addr *VAR_14;
 int VAR_15;

 VAR_12 = (struct ipv6_sr_hdr *)FUNC_27(VAR_9);

 VAR_13 = FUNC_2(VAR_9->dev);

 VAR_15 = VAR_11->ipv6.devconf_all->seg6_enabled;
 if (VAR_15 > VAR_13->cnf.seg6_enabled)
  VAR_15 = VAR_13->cnf.seg6_enabled;

 if (!VAR_15) {
  FUNC_11(VAR_9);
  return -1;
 }
looped_back:
 if (VAR_12->segments_left == 0) {
  if (VAR_12->nexthdr == VAR_8) {
   int VAR_16 = (VAR_12->hdrlen + 1) << 3;

   FUNC_22(VAR_9, FUNC_20(VAR_9),
        FUNC_21(VAR_9));

   if (!FUNC_14(VAR_9, VAR_16)) {
    FUNC_11(VAR_9);
    return -1;
   }
   FUNC_22(VAR_9, FUNC_27(VAR_9),
        VAR_16);

   FUNC_25(VAR_9);
   FUNC_26(VAR_9);
   VAR_9->encapsulation = 0;

   FUNC_3(VAR_9, VAR_9->dev, VAR_11);

   FUNC_12(VAR_9);
   return -1;
  }

  VAR_10->srcrt = FUNC_21(VAR_9);
  VAR_10->lastopt = VAR_10->srcrt;
  VAR_9->transport_header += (VAR_12->hdrlen + 1) << 3;
  VAR_10->nhoff = (&VAR_12->nexthdr) - FUNC_20(VAR_9);

  return 1;
 }

 if (VAR_12->segments_left >= (VAR_12->hdrlen >> 1)) {
  FUNC_1(VAR_11, VAR_13, VAR_6);
  FUNC_6(VAR_9, VAR_3,
      ((&VAR_12->segments_left) -
       FUNC_20(VAR_9)));
  return -1;
 }

 if (FUNC_17(VAR_9)) {
  if (FUNC_13(VAR_9, 0, 0, VAR_1)) {
   FUNC_1(VAR_11, FUNC_8(FUNC_18(VAR_9)),
     VAR_7);
   FUNC_11(VAR_9);
   return -1;
  }
 }

 VAR_12 = (struct ipv6_sr_hdr *)FUNC_27(VAR_9);

 VAR_12->segments_left--;
 VAR_14 = VAR_12->segments + VAR_12->segments_left;

 FUNC_24(VAR_9, sizeof(struct ipv6hdr));

 if (VAR_9->ip_summed == VAR_0)
  FUNC_16(VAR_9);

 FUNC_10(VAR_9)->daddr = *VAR_14;

 FUNC_19(VAR_9);

 FUNC_9(VAR_9);

 if (FUNC_18(VAR_9)->error) {
  FUNC_5(VAR_9);
  return -1;
 }

 if (FUNC_18(VAR_9)->dev->flags & VAR_5) {
  if (FUNC_10(VAR_9)->hop_limit <= 1) {
   FUNC_1(VAR_11, VAR_13, VAR_6);
   FUNC_7(VAR_9, VAR_4,
        VAR_2, 0);
   FUNC_11(VAR_9);
   return -1;
  }
  FUNC_10(VAR_9)->hop_limit--;

  FUNC_23(VAR_9, sizeof(struct ipv6hdr));
  goto looped_back;
 }

 FUNC_5(VAR_9);

 return -1;
}
