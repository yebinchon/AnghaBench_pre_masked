
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {scalar_t__ br; int backup_port; int backup_redirected_cnt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_bridge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_4 (int ) ;

int FUNC_5(struct net_bridge_port *VAR_2,
        struct net_device *VAR_3)
{
 struct net_bridge_port *VAR_4 = FUNC_4(VAR_2->backup_port);
 struct net_bridge_port *VAR_5 = ((void*)0);

 FUNC_0();

 if (VAR_3) {
  if (!FUNC_2(VAR_3))
   return -VAR_1;

  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5->br != VAR_2->br)
   return -VAR_0;
 }

 if (VAR_2 == VAR_5)
  return -VAR_0;

 if (VAR_4 == VAR_5)
  return 0;


 if (VAR_4)
  VAR_4->backup_redirected_cnt--;

 if (VAR_5)
  VAR_5->backup_redirected_cnt++;
 FUNC_3(VAR_2->backup_port, VAR_5);

 return 0;
}
