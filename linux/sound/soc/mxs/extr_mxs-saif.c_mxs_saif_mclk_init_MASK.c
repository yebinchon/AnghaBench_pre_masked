
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mxs_saif {scalar_t__ base; int clk; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 struct clk* FUNC_3 (TYPE_1__*,char*,int ,int ,scalar_t__,int ,int,int ,int *) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (struct device_node*,int ,struct clk*) ;
 int VAR_3 ;
 struct mxs_saif* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct mxs_saif *VAR_5 = FUNC_6(VAR_4);
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct clk *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_4->dev, "mxs_saif_mclk",
       FUNC_2(VAR_5->clk), 0,
       VAR_5->base + VAR_2,
       VAR_0, 3,
       0, ((void*)0));
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 == -VAR_1)
   return 0;
  FUNC_4(&VAR_4->dev, "failed to register mclk: %d\n", VAR_8);
  return FUNC_1(VAR_7);
 }

 VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_7);
 if (VAR_8)
  return VAR_8;

 return 0;
}
