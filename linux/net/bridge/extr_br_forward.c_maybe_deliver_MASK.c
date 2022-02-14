
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_bridge_port {int br; } ;


 int VAR_0 ;
 struct net_bridge_port* FUNC_0 (int) ;
 int FUNC_1 (int ,struct net_bridge_port*,struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_bridge_port*,struct sk_buff*,int) ;
 int FUNC_4 (struct net_bridge_port*,struct sk_buff*) ;

__attribute__((used)) static struct net_bridge_port *FUNC_5(
 struct net_bridge_port *VAR_1, struct net_bridge_port *VAR_2,
 struct sk_buff *VAR_3, bool VAR_4)
{
 u8 VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (!FUNC_4(VAR_2, VAR_3))
  return VAR_1;

 if (!VAR_1)
  goto out;

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (VAR_6)
  return FUNC_0(VAR_6);
out:
 FUNC_1(VAR_2->br, VAR_2, VAR_3, VAR_5, VAR_0);

 return VAR_2;
}
