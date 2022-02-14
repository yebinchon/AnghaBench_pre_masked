
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_5__ {int disable_ipv6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {struct net_device* dev; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct inet6_dev* FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct net *VAR_6, struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = FUNC_6(VAR_8)->dev;
 struct inet6_dev *VAR_10 = FUNC_4(FUNC_6(VAR_8));

 VAR_8->protocol = FUNC_3(VAR_0);
 VAR_8->dev = VAR_9;

 if (FUNC_7(VAR_10->cnf.disable_ipv6)) {
  FUNC_1(VAR_6, VAR_10, VAR_2);
  FUNC_5(VAR_8);
  return 0;
 }

 return FUNC_2(VAR_3, VAR_4,
       VAR_6, VAR_7, VAR_8, ((void*)0), VAR_9,
       VAR_5,
       !(FUNC_0(VAR_8)->flags & VAR_1));
}
