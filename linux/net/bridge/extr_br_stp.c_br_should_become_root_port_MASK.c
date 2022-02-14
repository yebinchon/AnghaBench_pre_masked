
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_port {scalar_t__ state; scalar_t__ designated_cost; scalar_t__ path_cost; scalar_t__ designated_port; scalar_t__ port_id; int designated_bridge; int designated_root; struct net_bridge* br; } ;
struct net_bridge {int bridge_id; } ;


 scalar_t__ VAR_0 ;
 struct net_bridge_port* FUNC_0 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_1 (struct net_bridge_port const*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(const struct net_bridge_port *VAR_1,
          u16 VAR_2)
{
 struct net_bridge *VAR_3;
 struct net_bridge_port *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->br;
 if (VAR_1->state == VAR_0 ||
     FUNC_1(VAR_1))
  return 0;

 if (FUNC_2(&VAR_3->bridge_id, &VAR_1->designated_root, 8) <= 0)
  return 0;

 if (!VAR_2)
  return 1;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 VAR_5 = FUNC_2(&VAR_1->designated_root, &VAR_4->designated_root, 8);
 if (VAR_5 < 0)
  return 1;
 else if (VAR_5 > 0)
  return 0;

 if (VAR_1->designated_cost + VAR_1->path_cost <
     VAR_4->designated_cost + VAR_4->path_cost)
  return 1;
 else if (VAR_1->designated_cost + VAR_1->path_cost >
   VAR_4->designated_cost + VAR_4->path_cost)
  return 0;

 VAR_5 = FUNC_2(&VAR_1->designated_bridge, &VAR_4->designated_bridge, 8);
 if (VAR_5 < 0)
  return 1;
 else if (VAR_5 > 0)
  return 0;

 if (VAR_1->designated_port < VAR_4->designated_port)
  return 1;
 else if (VAR_1->designated_port > VAR_4->designated_port)
  return 0;

 if (VAR_1->port_id < VAR_4->port_id)
  return 1;

 return 0;
}
