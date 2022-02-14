
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spdifrx_data {TYPE_1__* pdev; int kclk; int cs_completion; int regmap; int ub; int cs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (struct stm32_spdifrx_data*) ;
 int FUNC_10 (struct stm32_spdifrx_data*) ;
 int FUNC_11 (struct stm32_spdifrx_data*) ;
 int FUNC_12 (struct stm32_spdifrx_data*) ;
 scalar_t__ FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct stm32_spdifrx_data *VAR_5)
{
 int VAR_6 = 0;

 FUNC_4(VAR_5->cs, 0, VAR_2);
 FUNC_4(VAR_5->ub, 0, VAR_3);

 FUNC_6(&VAR_5->pdev->dev);

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5->kclk);
 if (VAR_6) {
  FUNC_3(&VAR_5->pdev->dev, "Enable kclk failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_8(VAR_5->regmap, VAR_4,
     VAR_1, VAR_1);
 if (VAR_6 < 0)
  goto end;

 VAR_6 = FUNC_11(VAR_5);
 if (VAR_6 < 0)
  goto end;

 if (FUNC_13(&VAR_5->cs_completion,
            FUNC_5(100))
            <= 0) {
  FUNC_2(&VAR_5->pdev->dev, "Failed to get control data\n");
  VAR_6 = -VAR_0;
 }

 FUNC_12(VAR_5);
 FUNC_10(VAR_5);

end:
 FUNC_0(VAR_5->kclk);
 FUNC_7(&VAR_5->pdev->dev);

 return VAR_6;
}
