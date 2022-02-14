
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,struct clk*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 struct clk *VAR_2, *VAR_3;
 const char *VAR_4;
 int VAR_5;

 if (!VAR_1)
  return 0;

 VAR_4 = FUNC_7(VAR_1, "fck_parent", ((void*)0));
 if (!VAR_4)
  return 0;

 FUNC_6(&VAR_0->dev, "Update the bindings to use assigned-clocks!\n");

 VAR_2 = FUNC_2(&VAR_0->dev, "fck");
 if (FUNC_0(VAR_2)) {
  FUNC_5(&VAR_0->dev, "failed to get fck\n");
  return FUNC_1(VAR_2);
 }

 VAR_3 = FUNC_2(((void*)0), VAR_4);
 if (FUNC_0(VAR_3)) {
  FUNC_5(&VAR_0->dev, "failed to get parent clock\n");
  VAR_5 = FUNC_1(VAR_3);
  goto err1;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_5(&VAR_0->dev, "failed to reparent fck\n");
  goto err2;
 }

err2:
 FUNC_3(VAR_3);
err1:
 FUNC_3(VAR_2);
 return VAR_5;
}
