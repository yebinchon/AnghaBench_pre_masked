
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int ifindex; } ;
struct msghdr {int dummy; } ;
struct can_skb_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ skbcnt; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct sock*) ;
 struct net_device* FUNC_5 (int ,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,struct msghdr*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct msghdr *VAR_4, int VAR_5, struct sock *VAR_6,
         int VAR_7)
{
 struct sk_buff *VAR_8;
 struct net_device *VAR_9;
 int VAR_10;


 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7 + sizeof(struct can_skb_priv), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_3(VAR_8);

 VAR_10 = FUNC_8(FUNC_9(VAR_8, VAR_7), VAR_4, VAR_7);
 if (VAR_10 < 0) {
  FUNC_7(VAR_8);
  return VAR_10;
 }

 VAR_9 = FUNC_5(FUNC_10(VAR_6), VAR_5);
 if (!VAR_9) {
  FUNC_7(VAR_8);
  return -VAR_0;
 }

 FUNC_2(VAR_8)->ifindex = VAR_9->ifindex;
 FUNC_2(VAR_8)->skbcnt = 0;
 VAR_8->dev = VAR_9;
 FUNC_4(VAR_8, VAR_6);
 VAR_10 = FUNC_1(VAR_8, 1);
 FUNC_6(VAR_9);

 if (VAR_10)
  return VAR_10;

 return VAR_7 + VAR_3;
}
