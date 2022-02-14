
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct dsa_switch*,struct device_node*) ;
 int FUNC_1 (struct dsa_switch*,struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0, struct device_node *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
