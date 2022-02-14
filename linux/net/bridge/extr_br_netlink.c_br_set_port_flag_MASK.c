
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_bridge_port {unsigned long flags; } ;


 int FUNC_0 (struct net_bridge_port*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct net_bridge_port *VAR_0, struct nlattr *VAR_1[],
       int VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_1[VAR_2])
  return 0;

 if (FUNC_1(VAR_1[VAR_2]))
  VAR_4 = VAR_0->flags | VAR_3;
 else
  VAR_4 = VAR_0->flags & ~VAR_3;

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_0->flags = VAR_4;
 return 0;
}
