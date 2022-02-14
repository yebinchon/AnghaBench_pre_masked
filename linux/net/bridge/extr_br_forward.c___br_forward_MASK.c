
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_port {TYPE_1__* br; struct net_device* dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct net*,int *,struct sk_buff*,struct net_device*,struct net_device*,int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (TYPE_1__*,struct net_bridge_port const*,struct net_bridge_vlan_group*,struct sk_buff*) ;
 int FUNC_2 (struct net_bridge_port const*,struct sk_buff*) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct net_bridge_vlan_group* FUNC_6 (struct net_bridge_port const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(const struct net_bridge_port *VAR_5,
    struct sk_buff *VAR_6, bool VAR_7)
{
 struct net_bridge_vlan_group *VAR_8;
 struct net_device *VAR_9;
 struct net *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(VAR_5);
 VAR_6 = FUNC_1(VAR_5->br, VAR_5, VAR_8, VAR_6);
 if (!VAR_6)
  return;

 VAR_9 = VAR_6->dev;
 VAR_6->dev = VAR_5->dev;
 if (!VAR_7) {
  if (FUNC_10(VAR_6)) {
   FUNC_5(VAR_6);
   return;
  }
  VAR_11 = VAR_2;
  FUNC_8(VAR_6);
  VAR_10 = FUNC_3(VAR_9);
 } else {
  if (FUNC_11(FUNC_7(VAR_5->br->dev))) {
   FUNC_9(VAR_6, VAR_0);
   if (!FUNC_4(VAR_6->dev, VAR_6))
    FUNC_5(VAR_6);
   else
    FUNC_2(VAR_5, VAR_6);
   return;
  }
  VAR_11 = VAR_3;
  VAR_10 = FUNC_3(VAR_6->dev);
  VAR_9 = ((void*)0);
 }

 FUNC_0(VAR_1, VAR_11,
  VAR_10, ((void*)0), VAR_6, VAR_9, VAR_6->dev,
  VAR_4);
}
