
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* port_egress_floods ) (struct dsa_switch*,int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,int,int) ;
 scalar_t__ FUNC_1 (struct switchdev_trans*) ;

int FUNC_2(struct dsa_port *VAR_1, bool VAR_2,
       struct switchdev_trans *VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_1->ds;
 int VAR_5 = VAR_1->index;

 if (FUNC_1(VAR_3))
  return VAR_4->ops->port_egress_floods ? 0 : -VAR_0;

 return VAR_4->ops->port_egress_floods(VAR_4, VAR_5, 1, VAR_2);
}
