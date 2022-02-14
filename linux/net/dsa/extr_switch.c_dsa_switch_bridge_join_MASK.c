
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {scalar_t__ index; TYPE_1__* ops; } ;
struct dsa_notifier_bridge_info {scalar_t__ sw_index; int br; int port; } ;
struct TYPE_2__ {int (* port_bridge_join ) (struct dsa_switch*,int ,int ) ;int (* crosschip_bridge_join ) (struct dsa_switch*,scalar_t__,int ,int ) ;} ;


 int FUNC_0 (struct dsa_switch*,int ,int ) ;
 int FUNC_1 (struct dsa_switch*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0,
      struct dsa_notifier_bridge_info *VAR_1)
{
 if (VAR_0->index == VAR_1->sw_index && VAR_0->ops->port_bridge_join)
  return VAR_0->ops->port_bridge_join(VAR_0, VAR_1->port, VAR_1->br);

 if (VAR_0->index != VAR_1->sw_index && VAR_0->ops->crosschip_bridge_join)
  return VAR_0->ops->crosschip_bridge_join(VAR_0, VAR_1->sw_index,
            VAR_1->port, VAR_1->br);

 return 0;
}
