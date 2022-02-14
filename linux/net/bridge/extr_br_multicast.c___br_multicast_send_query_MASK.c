
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dev; } ;
struct net_bridge_port {int dev; } ;
struct net_bridge {int dummy; } ;
struct br_ip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *,struct sk_buff*,int *,int ,int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (struct net_bridge*,struct br_ip*,int *) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct net_bridge*,struct br_ip*,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct net_bridge *VAR_5,
          struct net_bridge_port *VAR_6,
          struct br_ip *VAR_7)
{
 struct sk_buff *VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_1(VAR_5, VAR_7, &VAR_9);
 if (!VAR_8)
  return;

 if (VAR_6) {
  VAR_8->dev = VAR_6->dev;
  FUNC_2(VAR_5, VAR_6, VAR_8, VAR_9,
       VAR_1);
  FUNC_0(VAR_2, VAR_3,
   FUNC_4(VAR_6->dev), ((void*)0), VAR_8, ((void*)0), VAR_8->dev,
   VAR_4);
 } else {
  FUNC_3(VAR_5, VAR_7, VAR_8);
  FUNC_2(VAR_5, VAR_6, VAR_8, VAR_9,
       VAR_0);
  FUNC_5(VAR_8);
 }
}
