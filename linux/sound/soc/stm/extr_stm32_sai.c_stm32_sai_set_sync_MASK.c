
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_data {TYPE_1__* pdev; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 struct stm32_sai_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stm32_sai_data*,int) ;
 int FUNC_6 (struct stm32_sai_data*,int) ;

__attribute__((used)) static int FUNC_7(struct stm32_sai_data *VAR_2,
         struct device_node *VAR_3,
         int VAR_4, int VAR_5)
{
 struct platform_device *VAR_6 = FUNC_1(VAR_3);
 struct stm32_sai_data *VAR_7;
 int VAR_8;

 if (!VAR_6) {
  FUNC_0(&VAR_2->pdev->dev,
   "Device not found for node %pOFn\n", VAR_3);
  FUNC_2(VAR_3);
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7) {
  FUNC_0(&VAR_2->pdev->dev,
   "SAI sync provider data not found\n");
  VAR_8 = -VAR_0;
  goto error;
 }


 VAR_8 = FUNC_5(VAR_2, VAR_5);
 if (VAR_8 < 0)
  goto error;


 VAR_8 = FUNC_6(VAR_7, VAR_4);

error:
 FUNC_4(&VAR_6->dev);
 FUNC_2(VAR_3);
 return VAR_8;
}
