
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {int port_vlan; struct switch_attr* attr; } ;
struct switch_attr {int atype; int id; TYPE_1__* dev; } ;
struct nl_msg {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (struct nl_msg*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



__attribute__((used)) static int
FUNC_1(struct nl_msg *VAR_4, void *VAR_5)
{
 struct switch_val *VAR_6 = VAR_5;
 struct switch_attr *VAR_7 = VAR_6->attr;

 FUNC_0(VAR_4, VAR_0, VAR_7->dev->id);
 FUNC_0(VAR_4, VAR_1, VAR_7->id);
 switch(VAR_7->atype) {
 case 129:
  FUNC_0(VAR_4, VAR_2, VAR_6->port_vlan);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_3, VAR_6->port_vlan);
  break;
 default:
  break;
 }

 return 0;

nla_put_failure:
 return -1;
}
