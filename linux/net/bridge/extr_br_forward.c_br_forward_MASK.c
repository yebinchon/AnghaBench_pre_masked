
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_port {int backup_port; int dev; } ;


 int FUNC_0 (struct net_bridge_port const*,struct sk_buff*,int) ;
 int FUNC_1 (struct net_bridge_port const*,struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct net_bridge_port* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct net_bridge_port const*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(const struct net_bridge_port *VAR_0,
  struct sk_buff *VAR_1, bool VAR_2, bool VAR_3)
{
 if (FUNC_7(!VAR_0))
  goto out;


 if (FUNC_4(VAR_0->backup_port) && !FUNC_3(VAR_0->dev)) {
  struct net_bridge_port *VAR_4;

  VAR_4 = FUNC_5(VAR_0->backup_port);
  if (FUNC_7(!VAR_4))
   goto out;
  VAR_0 = VAR_4;
 }

 if (FUNC_6(VAR_0, VAR_1)) {
  if (VAR_2)
   FUNC_1(VAR_0, VAR_1, VAR_3);
  else
   FUNC_0(VAR_0, VAR_1, VAR_3);
  return;
 }

out:
 if (!VAR_2)
  FUNC_2(VAR_1);
}
