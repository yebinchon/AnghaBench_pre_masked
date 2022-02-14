
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int,int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct net*,int ,int) ;

void FUNC_7(struct net_device *VAR_4, struct net_bridge_port *VAR_5,
     int VAR_6)
{
 struct net *VAR_7 = FUNC_0(VAR_4);
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_0;
 int VAR_10;

 VAR_10 = VAR_5 ? VAR_5->dev->ifindex : 0;
 VAR_8 = FUNC_2(FUNC_5(), VAR_1);
 if (!VAR_8)
  goto errout;

 VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_10, 0, 0, VAR_6, VAR_2);
 if (VAR_9 < 0) {
  FUNC_1(VAR_8);
  goto errout;
 }

 FUNC_4(VAR_8, VAR_7, 0, VAR_3, ((void*)0), VAR_1);
 return;

errout:
 FUNC_6(VAR_7, VAR_3, VAR_9);
}
