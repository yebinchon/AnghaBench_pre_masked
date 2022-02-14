
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {TYPE_1__* dev; } ;
struct dsa_chip_data {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; struct dsa_chip_data* platform_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (struct dsa_switch*,struct dsa_chip_data*) ;
 int FUNC_2 (struct dsa_switch*,struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1)
{
 struct dsa_chip_data *VAR_2 = VAR_1->dev->platform_data;
 struct device_node *VAR_3 = VAR_1->dev->of_node;
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_2(VAR_1, VAR_3);
 else if (VAR_2)
  VAR_4 = FUNC_1(VAR_1, VAR_2);
 else
  VAR_4 = -VAR_0;

 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_1);
}
