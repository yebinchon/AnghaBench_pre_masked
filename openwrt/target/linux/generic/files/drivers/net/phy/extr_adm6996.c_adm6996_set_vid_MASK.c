
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i; } ;
struct switch_val {size_t port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct adm6996_priv {scalar_t__* vlan_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,scalar_t__) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
  struct switch_val *VAR_4)
{
 struct adm6996_priv *VAR_5 = FUNC_1(VAR_2);

 FUNC_0("set_vid port %d vid %d\n", VAR_4->port_vlan, VAR_4->value.i);

 if (VAR_4->value.i > VAR_0)
  return -VAR_1;

 VAR_5->vlan_id[VAR_4->port_vlan] = VAR_4->value.i;

 return 0;
}
