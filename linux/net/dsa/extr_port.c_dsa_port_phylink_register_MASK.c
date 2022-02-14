
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int dev; } ;
struct TYPE_2__ {int type; int dev; } ;
struct dsa_port {int pl; TYPE_1__ pl_config; struct device_node* dn; struct dsa_switch* ds; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct device_node*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct dsa_port *VAR_4)
{
 struct dsa_switch *VAR_5 = VAR_4->ds;
 struct device_node *VAR_6 = VAR_4->dn;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  VAR_7 = VAR_2;

 VAR_4->pl_config.dev = VAR_5->dev;
 VAR_4->pl_config.type = VAR_1;

 VAR_4->pl = FUNC_4(&VAR_4->pl_config, FUNC_2(VAR_6),
    VAR_7, &VAR_3);
 if (FUNC_0(VAR_4->pl)) {
  FUNC_8("error creating PHYLINK: %ld\n", FUNC_1(VAR_4->pl));
  return FUNC_1(VAR_4->pl);
 }

 VAR_8 = FUNC_6(VAR_4->pl, VAR_6, 0);
 if (VAR_8 && VAR_8 != -VAR_0) {
  FUNC_8("could not attach to PHY: %d\n", VAR_8);
  goto err_phy_connect;
 }

 FUNC_9();
 FUNC_7(VAR_4->pl);
 FUNC_10();

 return 0;

err_phy_connect:
 FUNC_5(VAR_4->pl);
 return VAR_8;
}
