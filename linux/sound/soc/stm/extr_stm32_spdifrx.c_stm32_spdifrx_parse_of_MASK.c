
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stm32_spdifrx_data {scalar_t__ irq; int kclk; int phys_addr; int base; struct regmap_config const* regmap_conf; } ;
struct resource {int start; } ;
struct regmap_config {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct of_device_id* FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4,
      struct stm32_spdifrx_data *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 const struct of_device_id *VAR_7;
 struct resource *VAR_8;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_3, &VAR_4->dev);
 if (VAR_7)
  VAR_5->regmap_conf =
   (const struct regmap_config *)VAR_7->data;
 else
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_4(&VAR_4->dev, VAR_8);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->phys_addr = VAR_8->start;

 VAR_5->kclk = FUNC_3(&VAR_4->dev, "kclk");
 if (FUNC_0(VAR_5->kclk)) {
  FUNC_2(&VAR_4->dev, "Could not get kclk\n");
  return FUNC_1(VAR_5->kclk);
 }

 VAR_5->irq = FUNC_6(VAR_4, 0);
 if (VAR_5->irq < 0)
  return VAR_5->irq;

 return 0;
}
