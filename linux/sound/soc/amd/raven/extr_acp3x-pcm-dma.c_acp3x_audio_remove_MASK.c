
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct i2s_dev_data {int acp3x_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct i2s_dev_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 int VAR_1;
 struct i2s_dev_data *VAR_2 = FUNC_2(&VAR_0->dev);

 VAR_1 = FUNC_0(VAR_2->acp3x_base);
 if (VAR_1)
  FUNC_1(&VAR_0->dev, "ACP de-init failed\n");
 else
  FUNC_3(&VAR_0->dev, "ACP de-initialized\n");

 FUNC_4(&VAR_0->dev);
 return 0;
}
