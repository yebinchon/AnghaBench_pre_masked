
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; int len; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int nexthdr; int daddr; } ;
struct inet6_skb_parm {int flags; scalar_t__ ra; } ;
typedef int __be16 ;
struct TYPE_8__ {TYPE_1__* devconf_all; } ;
struct TYPE_10__ {TYPE_2__ ipv6; } ;
struct TYPE_9__ {struct net_device* dev; } ;
struct TYPE_7__ {scalar_t__ mc_forwarding; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,int *,int *) ;
 int FUNC_11 (int ) ;
 struct ipv6hdr* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int) ;
 int FUNC_14 (struct sk_buff*,int,int *,int *) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 struct sk_buff* FUNC_19 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(struct sk_buff *VAR_8)
{
 int VAR_9 = FUNC_6(VAR_8);
 const struct ipv6hdr *VAR_10;
 struct net_device *VAR_11;
 bool VAR_12;

 FUNC_1(FUNC_4(FUNC_20(VAR_8)->dev),
    FUNC_2(VAR_8->dev), VAR_4,
    VAR_8->len);


 if (VAR_9) {
  FUNC_17();
  VAR_11 = FUNC_3(FUNC_4(VAR_8->dev), VAR_9);
  if (!VAR_11) {
   FUNC_18();
   FUNC_15(VAR_8);
   return -VAR_0;
  }
 } else {
  VAR_11 = VAR_8->dev;
 }

 VAR_10 = FUNC_12(VAR_8);
 VAR_12 = FUNC_10(VAR_11, &VAR_10->daddr, ((void*)0));
 if (VAR_9)
  FUNC_18();
 if (FUNC_16(VAR_12))
  FUNC_7(VAR_8);
 else {

  FUNC_15(VAR_8);
 }

 return 0;
}
