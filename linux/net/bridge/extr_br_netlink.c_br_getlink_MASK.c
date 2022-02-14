
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_bridge_port*,int,int,int ,int,int,struct net_device*) ;
 struct net_bridge_port* FUNC_1 (struct net_device*) ;

int FUNC_2(struct sk_buff *VAR_3, u32 VAR_4, u32 VAR_5,
        struct net_device *VAR_6, u32 VAR_7, int VAR_8)
{
 struct net_bridge_port *VAR_9 = FUNC_1(VAR_6);

 if (!VAR_9 && !(VAR_7 & VAR_0) &&
     !(VAR_7 & VAR_1))
  return 0;

 return FUNC_0(VAR_3, VAR_9, VAR_4, VAR_5, VAR_2, VAR_8,
         VAR_7, VAR_6);
}
