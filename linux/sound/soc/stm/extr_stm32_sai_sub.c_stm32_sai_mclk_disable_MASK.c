
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_sub_data {int regmap; TYPE_1__* pdev; } ;
struct stm32_sai_mclk_data {struct stm32_sai_sub_data* sai_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct stm32_sai_mclk_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_2)
{
 struct stm32_sai_mclk_data *VAR_3 = FUNC_2(VAR_2);
 struct stm32_sai_sub_data *VAR_4 = VAR_3->sai_data;

 FUNC_0(&VAR_4->pdev->dev, "Disable master clock\n");

 FUNC_1(VAR_4->regmap, VAR_1, VAR_0, 0);
}
