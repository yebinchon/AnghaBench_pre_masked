
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int priority; int port_no; int flags; int path_cost; struct net_device* dev; struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_bridge_port* FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge_port*,int ) ;
 int FUNC_4 (struct net_bridge_port*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_bridge*) ;
 int FUNC_8 (struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_9 (int,int ) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static struct net_bridge_port *FUNC_11(struct net_bridge *VAR_8,
           struct net_device *VAR_9)
{
 struct net_bridge_port *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_7);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_6);

 VAR_10->br = VAR_8;
 FUNC_5(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->path_cost = FUNC_10(VAR_9);
 VAR_10->priority = 0x8000 >> VAR_4;
 VAR_10->port_no = VAR_11;
 VAR_10->flags = VAR_2 | VAR_1 | VAR_3 | VAR_0;
 FUNC_1(VAR_10);
 FUNC_3(VAR_10, VAR_5);
 FUNC_4(VAR_10);
 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12) {
  FUNC_6(VAR_9);
  FUNC_8(VAR_10);
  VAR_10 = FUNC_0(VAR_12);
 }

 return VAR_10;
}
