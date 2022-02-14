
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_port {struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,struct net_device*) ;
 int FUNC_1 (struct dsa_port*) ;
 int FUNC_2 (struct dsa_port*,char const*) ;
 struct net_device* FUNC_3 (struct device_node*) ;
 char* FUNC_4 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 int FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct dsa_port *VAR_1, struct device_node *VAR_2)
{
 struct device_node *VAR_3 = FUNC_5(VAR_2, "ethernet", 0);
 const char *VAR_4 = FUNC_4(VAR_2, "label", ((void*)0));
 bool VAR_5 = FUNC_6(VAR_2, "link");

 VAR_1->dn = VAR_2;

 if (VAR_3) {
  struct net_device *VAR_6;

  VAR_6 = FUNC_3(VAR_3);
  if (!VAR_6)
   return -VAR_0;

  return FUNC_0(VAR_1, VAR_6);
 }

 if (VAR_5)
  return FUNC_1(VAR_1);

 return FUNC_2(VAR_1, VAR_4);
}
