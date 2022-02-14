
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {unsigned long path_cost; int br; int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct net_bridge_port *VAR_4, unsigned long VAR_5)
{
 if (VAR_5 < VAR_2 ||
     VAR_5 > VAR_1)
  return -VAR_3;

 VAR_4->flags |= VAR_0;
 VAR_4->path_cost = VAR_5;
 FUNC_0(VAR_4->br);
 FUNC_1(VAR_4->br);
 return 0;
}
