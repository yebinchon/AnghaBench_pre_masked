
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct dsa_switch {int slave_mii_bus; } ;
struct dsa_port {int pl; struct dsa_switch* ds; } ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct dsa_port *VAR_3 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_4 = VAR_3->ds;

 VAR_1->phydev = FUNC_1(VAR_4->slave_mii_bus, VAR_2);
 if (!VAR_1->phydev) {
  FUNC_2(VAR_1, "no phy at %d\n", VAR_2);
  return -VAR_0;
 }

 return FUNC_3(VAR_3->pl, VAR_1->phydev);
}
