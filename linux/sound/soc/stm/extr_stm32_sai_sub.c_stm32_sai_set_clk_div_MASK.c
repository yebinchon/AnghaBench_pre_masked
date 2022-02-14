
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_sai_sub_data {TYPE_3__* pdev; int regmap; TYPE_2__* pdata; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_sai_sub_data *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4 = VAR_2->pdata->conf.version;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3 > FUNC_1(VAR_4)) {
  FUNC_4(&VAR_2->pdev->dev, "Divider %d out of range\n", VAR_3);
  return -VAR_0;
 }

 VAR_7 = FUNC_0(FUNC_3(VAR_4));
 VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_5(VAR_2->regmap, VAR_1, VAR_7, VAR_6);
 if (VAR_5 < 0)
  FUNC_4(&VAR_2->pdev->dev, "Failed to update CR1 register\n");

 return VAR_5;
}
