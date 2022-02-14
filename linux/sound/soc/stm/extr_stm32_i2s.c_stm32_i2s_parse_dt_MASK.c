
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct stm32_i2s_data {struct reset_control* x11kclk; struct reset_control* x8kclk; struct reset_control* i2sclk; struct reset_control* pclk; int phys_addr; struct reset_control* base; struct regmap_config const* regmap_conf; } ;
struct resource {int start; } ;
struct reset_control {int dummy; } ;
struct regmap_config {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*,char*) ;
 struct reset_control* FUNC_5 (TYPE_1__*,struct resource*) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ,int ,struct stm32_i2s_data*) ;
 struct reset_control* FUNC_7 (TYPE_1__*,int *) ;
 struct of_device_id* FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct reset_control*) ;
 int FUNC_12 (struct reset_control*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6,
         struct stm32_i2s_data *VAR_7)
{
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 const struct of_device_id *VAR_9;
 struct reset_control *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_8(VAR_4, &VAR_6->dev);
 if (VAR_9)
  VAR_7->regmap_conf = (const struct regmap_config *)VAR_9->data;
 else
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_5(&VAR_6->dev, VAR_11);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->phys_addr = VAR_11->start;


 VAR_7->pclk = FUNC_4(&VAR_6->dev, "pclk");
 if (FUNC_0(VAR_7->pclk)) {
  FUNC_2(&VAR_6->dev, "Could not get pclk\n");
  return FUNC_1(VAR_7->pclk);
 }

 VAR_7->i2sclk = FUNC_4(&VAR_6->dev, "i2sclk");
 if (FUNC_0(VAR_7->i2sclk)) {
  FUNC_2(&VAR_6->dev, "Could not get i2sclk\n");
  return FUNC_1(VAR_7->i2sclk);
 }

 VAR_7->x8kclk = FUNC_4(&VAR_6->dev, "x8k");
 if (FUNC_0(VAR_7->x8kclk)) {
  FUNC_2(&VAR_6->dev, "missing x8k parent clock\n");
  return FUNC_1(VAR_7->x8kclk);
 }

 VAR_7->x11kclk = FUNC_4(&VAR_6->dev, "x11k");
 if (FUNC_0(VAR_7->x11kclk)) {
  FUNC_2(&VAR_6->dev, "missing x11k parent clock\n");
  return FUNC_1(VAR_7->x11kclk);
 }


 VAR_12 = FUNC_9(VAR_6, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_6(&VAR_6->dev, VAR_12, VAR_5, VAR_3,
          FUNC_3(&VAR_6->dev), VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_6->dev, "irq request returned %d\n", VAR_13);
  return VAR_13;
 }


 VAR_10 = FUNC_7(&VAR_6->dev, ((void*)0));
 if (!FUNC_0(VAR_10)) {
  FUNC_11(VAR_10);
  FUNC_13(2);
  FUNC_12(VAR_10);
 }

 return 0;
}
