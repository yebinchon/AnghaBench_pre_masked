
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
struct net_bridge_port {int port_no; struct net_bridge* br; struct net_device* dev; } ;
struct net_bridge {struct net_device* dev; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct net_bridge const*,char*,int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct net_bridge_port const*,int ,int ,int,int ,int ,struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct net* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_8 (struct net*,int ,int) ;

void FUNC_9(int VAR_5, const struct net_bridge *VAR_6,
        const struct net_bridge_port *VAR_7)
{
 u32 VAR_8 = VAR_3;
 struct net_device *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11 = -VAR_1;
 struct net *VAR_12;
 u16 VAR_13 = 0;

 if (FUNC_0(!VAR_7 && !VAR_6))
  return;

 if (VAR_7) {
  VAR_9 = VAR_7->dev;
  VAR_6 = VAR_7->br;
  VAR_13 = VAR_7->port_no;
 } else {
  VAR_9 = VAR_6->dev;
 }

 VAR_12 = FUNC_4(VAR_9);
 FUNC_1(VAR_6, "port %u(%s) event %d\n", VAR_13, VAR_9->name, VAR_5);

 VAR_10 = FUNC_6(FUNC_3(VAR_9, VAR_8), VAR_2);
 if (VAR_10 == ((void*)0))
  goto errout;

 VAR_11 = FUNC_2(VAR_10, VAR_7, 0, 0, VAR_5, 0, VAR_8, VAR_9);
 if (VAR_11 < 0) {

  FUNC_0(VAR_11 == -VAR_0);
  FUNC_5(VAR_10);
  goto errout;
 }
 FUNC_7(VAR_10, VAR_12, 0, VAR_4, ((void*)0), VAR_2);
 return;
errout:
 FUNC_8(VAR_12, VAR_4, VAR_11);
}
