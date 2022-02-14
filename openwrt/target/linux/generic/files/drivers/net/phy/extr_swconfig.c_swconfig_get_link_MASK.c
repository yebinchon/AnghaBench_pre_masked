
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct switch_port_link* link; } ;
struct switch_val {scalar_t__ port_vlan; TYPE_1__ value; } ;
struct switch_port_link {int dummy; } ;
struct switch_dev {scalar_t__ ports; TYPE_2__* ops; } ;
struct switch_attr {int dummy; } ;
struct TYPE_4__ {int (* get_port_link ) (struct switch_dev*,scalar_t__,struct switch_port_link*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct switch_port_link*,int ,int) ;
 int FUNC_1 (struct switch_dev*,scalar_t__,struct switch_port_link*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
   struct switch_val *VAR_4)
{
 struct switch_port_link *VAR_5 = VAR_4->value.link;

 if (VAR_4->port_vlan >= VAR_2->ports)
  return -VAR_0;

 if (!VAR_2->ops->get_port_link)
  return -VAR_1;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 return VAR_2->ops->get_port_link(VAR_2, VAR_4->port_vlan, VAR_5);
}
