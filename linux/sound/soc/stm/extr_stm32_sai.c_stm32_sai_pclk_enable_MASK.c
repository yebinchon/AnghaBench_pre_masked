
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_data {TYPE_1__* pdev; int pclk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct stm32_sai_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct stm32_sai_data *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->pclk);
 if (VAR_2) {
  FUNC_1(&VAR_1->pdev->dev, "failed to enable clock: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
