
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {unsigned long flags; } ;


 int FUNC_0 (struct net_bridge_port*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct net_bridge_port *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_0->flags;

 if (VAR_1)
  VAR_3 |= VAR_2;
 else
  VAR_3 &= ~VAR_2;

 if (VAR_3 != VAR_0->flags) {
  VAR_0->flags = VAR_3;
  FUNC_0(VAR_0, VAR_2);
 }
 return 0;
}
