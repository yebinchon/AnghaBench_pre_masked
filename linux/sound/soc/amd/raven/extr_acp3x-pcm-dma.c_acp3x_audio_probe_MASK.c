
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_11__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct i2s_dev_data {int acp3x_base; int i2s_irq; int * capture_stream; int * play_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct i2s_dev_data*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 struct i2s_dev_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,unsigned int,char*,struct i2s_dev_data*) ;
 int FUNC_8 (TYPE_1__*,int *,int *,int) ;
 int VAR_7 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct resource*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 int VAR_9;
 struct resource *VAR_10;
 struct i2s_dev_data *VAR_11;
 unsigned int VAR_12;

 if (!VAR_8->dev.platform_data) {
  FUNC_2(&VAR_8->dev, "platform_data not retrieved\n");
  return -VAR_0;
 }
 VAR_12 = *((unsigned int *)(VAR_8->dev.platform_data));

 VAR_10 = FUNC_9(VAR_8, VAR_4, 0);
 if (!VAR_10) {
  FUNC_2(&VAR_8->dev, "IORESOURCE_IRQ FAILED\n");
   return -VAR_0;
 }

 VAR_11 = FUNC_6(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->acp3x_base = FUNC_5(&VAR_8->dev, VAR_10->start,
      FUNC_13(VAR_10));

 VAR_10 = FUNC_9(VAR_8, VAR_3, 0);
 if (!VAR_10) {
  FUNC_2(&VAR_8->dev, "IORESOURCE_IRQ FAILED\n");
  return -VAR_0;
 }

 VAR_11->i2s_irq = VAR_10->start;
 VAR_11->play_stream = ((void*)0);
 VAR_11->capture_stream = ((void*)0);

 FUNC_4(&VAR_8->dev, VAR_11);

 VAR_9 = FUNC_1(VAR_11->acp3x_base);
 if (VAR_9)
  return -VAR_0;
 VAR_9 = FUNC_8(&VAR_8->dev,
       &VAR_5,
       &VAR_6, 1);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "Fail to register acp i2s dai\n");
  goto dev_err;
 }
 VAR_9 = FUNC_7(&VAR_8->dev, VAR_11->i2s_irq, VAR_7,
      VAR_12, "ACP3x_I2S_IRQ", VAR_11);
 if (VAR_9) {
  FUNC_2(&VAR_8->dev, "ACP3x I2S IRQ request failed\n");
  goto dev_err;
 }

 FUNC_11(&VAR_8->dev, 10000);
 FUNC_12(&VAR_8->dev);
 FUNC_10(&VAR_8->dev);
 return 0;
dev_err:
 VAR_9 = FUNC_0(VAR_11->acp3x_base);
 if (VAR_9)
  FUNC_2(&VAR_8->dev, "ACP de-init failed\n");
 else
  FUNC_3(&VAR_8->dev, "ACP de-initialized\n");

 return -VAR_0;
}
