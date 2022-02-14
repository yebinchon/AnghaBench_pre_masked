
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_1__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct inet6_skb_parm {int dummy; } ;
struct icmp6hdr {scalar_t__ icmp6_type; } ;
typedef int __be32 ;
struct TYPE_2__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct net*,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct inet6_skb_parm *VAR_5,
         u8 VAR_6, u8 VAR_7, int VAR_8, __be32 VAR_9)
{

 struct icmp6hdr *VAR_10 = (struct icmp6hdr *) (VAR_4->data + VAR_8);
 struct net *VAR_11 = FUNC_0(VAR_4->dev);

 if (VAR_6 == VAR_2)
  FUNC_2(VAR_4, VAR_11, VAR_9, VAR_4->dev->ifindex, 0, FUNC_5(VAR_11, ((void*)0)));
 else if (VAR_6 == VAR_3)
  FUNC_1(VAR_4, VAR_11, VAR_4->dev->ifindex, 0,
        FUNC_5(VAR_11, ((void*)0)));

 if (!(VAR_6 & VAR_1))
  if (VAR_10->icmp6_type == VAR_0)
   FUNC_4(VAR_4, VAR_8, FUNC_3(VAR_9));

 return 0;
}
