
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ pkt_type; int sk; TYPE_3__* dev; } ;
struct in6_addr {int dummy; } ;
struct rt6_info {int rt6i_flags; struct in6_addr rt6i_gateway; } ;
struct TYPE_9__ {int peers; TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int hop_limit; int saddr; struct in6_addr daddr; } ;
struct inet_peer {int dummy; } ;
struct inet6_skb_parm {int flags; scalar_t__ iif; scalar_t__ srcrt; int ra; } ;
struct inet6_dev {int dummy; } ;
struct dst_entry {TYPE_3__* dev; } ;
struct TYPE_10__ {scalar_t__ ifindex; int hard_header_len; } ;
struct TYPE_8__ {scalar_t__ forwarding; scalar_t__ proxy_ndp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int ,struct net*,int *,struct sk_buff*,TYPE_3__*,TYPE_3__*,int ) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_3 (TYPE_3__*) ;
 struct net* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,scalar_t__) ;
 struct inet_peer* FUNC_6 (int ,struct in6_addr*,int) ;
 scalar_t__ FUNC_7 (struct inet_peer*,int) ;
 int FUNC_8 (struct inet_peer*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 struct inet6_dev* FUNC_10 (struct dst_entry*) ;
 scalar_t__ FUNC_11 (struct dst_entry*) ;
 int VAR_26 ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (int *) ;
 struct ipv6hdr* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int VAR_27 ;
 int FUNC_18 (struct sk_buff*,struct in6_addr*) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int *,struct net*,struct in6_addr*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_21 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (int *,int ,struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;

int FUNC_29(struct sk_buff *VAR_28)
{
 struct inet6_dev *VAR_29 = FUNC_3(VAR_28->dev);
 struct dst_entry *VAR_30 = FUNC_22(VAR_28);
 struct ipv6hdr *VAR_31 = FUNC_16(VAR_28);
 struct inet6_skb_parm *VAR_32 = FUNC_0(VAR_28);
 struct net *VAR_33 = FUNC_4(VAR_30->dev);
 u32 VAR_34;

 if (VAR_33->ipv6.devconf_all->forwarding == 0)
  goto error;

 if (VAR_28->pkt_type != VAR_23)
  goto drop;

 if (FUNC_26(VAR_28->sk))
  goto drop;

 if (FUNC_25(VAR_28))
  goto drop;

 if (!FUNC_27(((void*)0), VAR_25, VAR_28)) {
  FUNC_2(VAR_33, VAR_29, VAR_12);
  goto drop;
 }

 FUNC_23(VAR_28);
 if (FUNC_26(VAR_32->flags & VAR_9)) {
  if (FUNC_9(VAR_28, FUNC_19(VAR_32->ra)))
   return 0;
 }




 if (VAR_31->hop_limit <= 1) {

  VAR_28->dev = VAR_30->dev;
  FUNC_5(VAR_28, VAR_8, VAR_5, 0);
  FUNC_2(VAR_33, VAR_29, VAR_13);

  FUNC_17(VAR_28);
  return -VAR_2;
 }


 if (VAR_33->ipv6.devconf_all->proxy_ndp &&
     FUNC_20(&VAR_27, VAR_33, &VAR_31->daddr, VAR_28->dev, 0)) {
  int VAR_35 = FUNC_12(VAR_28);
  if (VAR_35 > 0)
   return FUNC_13(VAR_28);
  else if (VAR_35 < 0) {
   FUNC_2(VAR_33, VAR_29, VAR_12);
   goto drop;
  }
 }

 if (!FUNC_28(VAR_28)) {
  FUNC_2(VAR_33, VAR_29, VAR_12);
  goto drop;
 }
 VAR_30 = FUNC_22(VAR_28);





 if (FUNC_0(VAR_28)->iif == VAR_30->dev->ifindex &&
     VAR_32->srcrt == 0 && !FUNC_24(VAR_28)) {
  struct in6_addr *VAR_36 = ((void*)0);
  struct inet_peer *VAR_37;
  struct rt6_info *VAR_38;






  VAR_38 = (struct rt6_info *) VAR_30;
  if (VAR_38->rt6i_flags & VAR_24)
   VAR_36 = &VAR_38->rt6i_gateway;
  else
   VAR_36 = &VAR_31->daddr;

  VAR_37 = FUNC_6(VAR_33->ipv6.peers, &VAR_31->daddr, 1);




  if (FUNC_7(VAR_37, 1*VAR_3))
   FUNC_18(VAR_28, VAR_36);
  if (VAR_37)
   FUNC_8(VAR_37);
 } else {
  int VAR_39 = FUNC_15(&VAR_31->saddr);


  if (VAR_39 == VAR_16 ||
      VAR_39 & (VAR_19 | VAR_18))
   goto error;
  if (VAR_39 & VAR_17) {
   FUNC_5(VAR_28, VAR_4,
        VAR_6, 0);
   goto error;
  }
 }

 VAR_34 = FUNC_11(VAR_30);
 if (VAR_34 < VAR_20)
  VAR_34 = VAR_20;

 if (FUNC_14(VAR_28, VAR_34)) {

  VAR_28->dev = VAR_30->dev;
  FUNC_5(VAR_28, VAR_7, 0, VAR_34);
  FUNC_2(VAR_33, VAR_29, VAR_14);
  FUNC_2(VAR_33, FUNC_10(VAR_30),
    VAR_10);
  FUNC_17(VAR_28);
  return -VAR_1;
 }

 if (FUNC_21(VAR_28, VAR_30->dev->hard_header_len)) {
  FUNC_2(VAR_33, FUNC_10(VAR_30),
    VAR_15);
  goto drop;
 }

 VAR_31 = FUNC_16(VAR_28);



 VAR_31->hop_limit--;

 return FUNC_1(VAR_21, VAR_22,
         VAR_33, ((void*)0), VAR_28, VAR_28->dev, VAR_30->dev,
         VAR_26);

error:
 FUNC_2(VAR_33, VAR_29, VAR_11);
drop:
 FUNC_17(VAR_28);
 return -VAR_0;
}
