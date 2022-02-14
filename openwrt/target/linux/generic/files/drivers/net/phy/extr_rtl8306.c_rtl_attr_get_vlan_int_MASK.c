
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {scalar_t__ port_vlan; } ;
struct switch_dev {scalar_t__ vlans; } ;
struct switch_attr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, const struct switch_attr *VAR_2, struct switch_val *VAR_3)
{
 if (VAR_3->port_vlan >= VAR_1->vlans)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
