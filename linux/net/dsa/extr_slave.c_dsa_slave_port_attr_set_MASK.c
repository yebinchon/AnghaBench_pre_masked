
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {int mrouter; int brport_flags; int ageing_time; int vlan_filtering; int stp_state; } ;
struct switchdev_attr {int id; TYPE_1__ u; } ;
struct net_device {int dummy; } ;
struct dsa_port {int cpu_dp; } ;


 int VAR_0 ;






 int FUNC_0 (struct dsa_port*,int ,struct switchdev_trans*) ;
 int FUNC_1 (struct dsa_port*,int ,struct switchdev_trans*) ;
 int FUNC_2 (int ,int ,struct switchdev_trans*) ;
 int FUNC_3 (struct dsa_port*,int ,struct switchdev_trans*) ;
 int FUNC_4 (struct dsa_port*,int ,struct switchdev_trans*) ;
 int FUNC_5 (struct dsa_port*,int ,struct switchdev_trans*) ;
 struct dsa_port* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
       const struct switchdev_attr *VAR_2,
       struct switchdev_trans *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_6(VAR_1);
 int VAR_5;

 switch (VAR_2->id) {
 case 128:
  VAR_5 = FUNC_4(VAR_4, VAR_2->u.stp_state, VAR_3);
  break;
 case 131:
  VAR_5 = FUNC_5(VAR_4, VAR_2->u.vlan_filtering,
           VAR_3);
  break;
 case 133:
  VAR_5 = FUNC_0(VAR_4, VAR_2->u.ageing_time, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_2->u.brport_flags,
      VAR_3);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_4, VAR_2->u.brport_flags, VAR_3);
  break;
 case 132:
  VAR_5 = FUNC_2(VAR_4->cpu_dp, VAR_2->u.mrouter, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
