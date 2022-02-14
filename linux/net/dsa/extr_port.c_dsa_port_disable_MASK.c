
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; int bridge_dev; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* port_disable ) (struct dsa_switch*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,int ) ;
 int FUNC_1 (struct dsa_switch*,int) ;

void FUNC_2(struct dsa_port *VAR_1)
{
 struct dsa_switch *VAR_2 = VAR_1->ds;
 int VAR_3 = VAR_1->index;

 if (!VAR_1->bridge_dev)
  FUNC_0(VAR_1, VAR_0);

 if (VAR_2->ops->port_disable)
  VAR_2->ops->port_disable(VAR_2, VAR_3);
}
