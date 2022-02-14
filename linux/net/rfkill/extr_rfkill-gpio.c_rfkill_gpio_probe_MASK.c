
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill_gpio_data {char const* name; int rfkill_dev; int type; struct gpio_desc* shutdown_gpio; struct gpio_desc* reset_gpio; int clk; } ;
struct platform_device {int dev; } ;
struct gpio_desc {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,char const*) ;
 char const* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const**) ;
 int FUNC_7 (int *,int *) ;
 struct gpio_desc* FUNC_8 (int *,char*,int ) ;
 struct rfkill_gpio_data* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (struct platform_device*,struct rfkill_gpio_data*) ;
 int FUNC_11 (char const*,int *,int ,int *,struct rfkill_gpio_data*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int *,struct rfkill_gpio_data*) ;
 int VAR_4 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct rfkill_gpio_data *VAR_6;
 struct gpio_desc *VAR_7;
 const char *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_9(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_6(&VAR_5->dev, "name", &VAR_6->name);
 FUNC_6(&VAR_5->dev, "type", &VAR_8);

 if (!VAR_6->name)
  VAR_6->name = FUNC_5(&VAR_5->dev);

 VAR_6->type = FUNC_13(VAR_8);

 if (FUNC_0(&VAR_5->dev)) {
  VAR_9 = FUNC_14(&VAR_5->dev, VAR_6);
  if (VAR_9)
   return VAR_9;
 }

 VAR_6->clk = FUNC_7(&VAR_5->dev, ((void*)0));

 VAR_7 = FUNC_8(&VAR_5->dev, "reset", VAR_3);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6->reset_gpio = VAR_7;

 VAR_7 = FUNC_8(&VAR_5->dev, "shutdown", VAR_3);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6->shutdown_gpio = VAR_7;


 if (!VAR_6->reset_gpio && !VAR_6->shutdown_gpio) {
  FUNC_3(&VAR_5->dev, "invalid platform data\n");
  return -VAR_0;
 }

 VAR_6->rfkill_dev = FUNC_11(VAR_6->name, &VAR_5->dev,
       VAR_6->type, &VAR_4,
       VAR_6);
 if (!VAR_6->rfkill_dev)
  return -VAR_1;

 VAR_9 = FUNC_15(VAR_6->rfkill_dev);
 if (VAR_9 < 0)
  goto err_destroy;

 FUNC_10(VAR_5, VAR_6);

 FUNC_4(&VAR_5->dev, "%s device registered.\n", VAR_6->name);

 return 0;

err_destroy:
 FUNC_12(VAR_6->rfkill_dev);

 return VAR_9;
}
