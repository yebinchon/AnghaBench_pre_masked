
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_regs_len ) (struct dsa_switch*,int ) ;} ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_3 = VAR_2->ds;

 if (VAR_3->ops->get_regs_len)
  return VAR_3->ops->get_regs_len(VAR_3, VAR_2->index);

 return -VAR_0;
}
