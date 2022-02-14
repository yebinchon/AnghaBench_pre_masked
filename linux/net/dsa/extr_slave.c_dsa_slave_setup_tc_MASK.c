
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* port_setup_tc ) (struct dsa_switch*,int ,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void*) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dsa_switch*,int ,int,void*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, enum tc_setup_type VAR_3,
         void *VAR_4)
{
 struct dsa_port *VAR_5 = FUNC_1(VAR_2);
 struct dsa_switch *VAR_6 = VAR_5->ds;

 if (VAR_3 == VAR_1)
  return FUNC_0(VAR_2, VAR_4);

 if (!VAR_6->ops->port_setup_tc)
  return -VAR_0;

 return VAR_6->ops->port_setup_tc(VAR_6, VAR_5->index, VAR_3, VAR_4);
}
