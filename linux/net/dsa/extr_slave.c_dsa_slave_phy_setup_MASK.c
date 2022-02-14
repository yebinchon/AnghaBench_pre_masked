
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dev; } ;
struct dsa_switch {scalar_t__ slave_mii_bus; TYPE_1__* ops; } ;
struct TYPE_4__ {int type; int * dev; } ;
struct dsa_port {int pl; int index; TYPE_2__ pl_config; struct dsa_switch* ds; struct device_node* dn; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int (* get_phy_flags ) (struct dsa_switch*,int ) ;scalar_t__ phylink_fixed_state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_4 ;
 struct dsa_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int,...) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (TYPE_2__*,int ,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct device_node*,int ) ;
 int FUNC_11 (struct dsa_switch*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct dsa_port *VAR_6 = FUNC_3(VAR_5);
 struct device_node *VAR_7 = VAR_6->dn;
 struct dsa_switch *VAR_8 = VAR_6->ds;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10 < 0)
  VAR_10 = VAR_2;

 VAR_6->pl_config.dev = &VAR_5->dev;
 VAR_6->pl_config.type = VAR_1;

 VAR_6->pl = FUNC_7(&VAR_6->pl_config, FUNC_5(VAR_7), VAR_10,
    &VAR_3);
 if (FUNC_0(VAR_6->pl)) {
  FUNC_4(VAR_5,
      "error creating PHYLINK: %ld\n", FUNC_1(VAR_6->pl));
  return FUNC_1(VAR_6->pl);
 }





 if (VAR_8->ops->phylink_fixed_state)
  FUNC_9(VAR_6->pl, VAR_4);

 if (VAR_8->ops->get_phy_flags)
  VAR_9 = VAR_8->ops->get_phy_flags(VAR_8, VAR_6->index);

 VAR_11 = FUNC_10(VAR_6->pl, VAR_7, VAR_9);
 if (VAR_11 == -VAR_0 && VAR_8->slave_mii_bus) {



  VAR_11 = FUNC_2(VAR_5, VAR_6->index);
  if (VAR_11) {
   FUNC_4(VAR_5,
       "failed to connect to port %d: %d\n",
       VAR_6->index, VAR_11);
   FUNC_8(VAR_6->pl);
   return VAR_11;
  }
 }

 return VAR_11;
}
