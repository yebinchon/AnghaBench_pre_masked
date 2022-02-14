
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;
struct ethhdr {int h_proto; } ;
typedef int eth ;


 int FUNC_0 (struct net_bridge*,struct ethhdr*) ;
 struct net_bridge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ethhdr*,int ,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

bool FUNC_7(struct net_device *VAR_0, int VAR_1)
{
 struct net_bridge *VAR_2;
 struct net_bridge_port *VAR_3;
 struct ethhdr VAR_4;
 bool VAR_5 = 0;

 FUNC_5();
 if (!FUNC_4(VAR_0))
  goto unlock;

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3 || !VAR_3->br)
  goto unlock;

 VAR_2 = VAR_3->br;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.h_proto = FUNC_2(VAR_1);

 VAR_5 = FUNC_0(VAR_2, &VAR_4);

unlock:
 FUNC_6();
 return VAR_5;
}
