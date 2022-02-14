
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {struct dsa_switch* ds; } ;
struct TYPE_2__ {int port_egress_floods; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct dsa_port *VAR_3, unsigned long VAR_4,
         struct switchdev_trans *VAR_5)
{
 struct dsa_switch *VAR_6 = VAR_3->ds;

 if (!VAR_6->ops->port_egress_floods ||
     (VAR_4 & ~(VAR_0 | VAR_1)))
  return -VAR_2;

 return 0;
}
