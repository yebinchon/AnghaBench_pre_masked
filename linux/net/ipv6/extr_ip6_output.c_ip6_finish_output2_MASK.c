
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int len; int dev; } ;
struct rt6_info {int dummy; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {struct net_device* dev; int lwtstate; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ hop_limit; int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct neighbour*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ) ;
 int VAR_10 ;
 struct neighbour* FUNC_6 (struct net_device*,struct in6_addr const*) ;
 struct neighbour* FUNC_7 (int *,struct in6_addr const*,struct net_device*,int) ;
 int VAR_11 ;
 struct inet6_dev* FUNC_8 (struct dst_entry*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct net_device*,int *,int *) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct net*,struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_16 (struct neighbour*,struct sk_buff*,int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 struct in6_addr* FUNC_19 (struct rt6_info*,int *) ;
 scalar_t__ FUNC_20 (struct sock*) ;
 struct sk_buff* FUNC_21 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*,struct neighbour*) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct net *VAR_13, struct sock *VAR_14, struct sk_buff *VAR_15)
{
 struct dst_entry *VAR_16 = FUNC_22(VAR_15);
 struct net_device *VAR_17 = VAR_16->dev;
 const struct in6_addr *VAR_18;
 struct neighbour *VAR_19;
 int VAR_20;

 if (FUNC_9(&FUNC_11(VAR_15)->daddr)) {
  struct inet6_dev *VAR_21 = FUNC_8(FUNC_22(VAR_15));

  if (!(VAR_17->flags & VAR_2) && FUNC_20(VAR_14) &&
      ((FUNC_15(VAR_13, VAR_15) &&
       !(FUNC_0(VAR_15)->flags & VAR_3)) ||
       FUNC_10(VAR_17, &FUNC_11(VAR_15)->daddr,
      &FUNC_11(VAR_15)->saddr))) {
   struct sk_buff *VAR_22 = FUNC_21(VAR_15, VAR_1);




   if (VAR_22)
    FUNC_5(VAR_9, VAR_10,
     VAR_13, VAR_14, VAR_22, ((void*)0), VAR_22->dev,
     VAR_11);

   if (FUNC_11(VAR_15)->hop_limit == 0) {
    FUNC_1(VAR_13, VAR_21,
           VAR_4);
    FUNC_12(VAR_15);
    return 0;
   }
  }

  FUNC_2(VAR_13, VAR_21, VAR_5, VAR_15->len);

  if (FUNC_3(&FUNC_11(VAR_15)->daddr) <=
      VAR_7 &&
      !(VAR_17->flags & VAR_2)) {
   FUNC_12(VAR_15);
   return 0;
  }
 }

 if (FUNC_14(VAR_16->lwtstate)) {
  int VAR_23 = FUNC_13(VAR_15);

  if (VAR_23 < 0 || VAR_23 == VAR_8)
   return VAR_23;
 }

 FUNC_17();
 VAR_18 = FUNC_19((struct rt6_info *)VAR_16, &FUNC_11(VAR_15)->daddr);
 VAR_19 = FUNC_6(VAR_16->dev, VAR_18);
 if (FUNC_24(!VAR_19))
  VAR_19 = FUNC_7(&VAR_12, VAR_18, VAR_16->dev, 0);
 if (!FUNC_4(VAR_19)) {
  FUNC_23(VAR_15, VAR_19);
  VAR_20 = FUNC_16(VAR_19, VAR_15, 0);
  FUNC_18();
  return VAR_20;
 }
 FUNC_18();

 FUNC_1(VAR_13, FUNC_8(VAR_16), VAR_6);
 FUNC_12(VAR_15);
 return -VAR_0;
}
