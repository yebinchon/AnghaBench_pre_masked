
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct dsa_port {int dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,char*,int ) ;
 struct phy_device* FUNC_3 (struct device_node*) ;

__attribute__((used)) static struct phy_device *FUNC_4(struct dsa_port *VAR_1)
{
 struct device_node *VAR_2;
 struct phy_device *VAR_3;

 VAR_2 = FUNC_2(VAR_1->dn, "phy-handle", 0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3) {
  FUNC_1(VAR_2);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(VAR_2);
 return VAR_3;
}
