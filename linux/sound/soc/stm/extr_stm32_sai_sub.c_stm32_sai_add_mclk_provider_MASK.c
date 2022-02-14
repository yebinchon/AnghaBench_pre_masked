
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_sub_data {int sai_mclk; TYPE_1__* pdev; int sai_ck; } ;
struct clk_hw {int clk; int init; } ;
struct stm32_sai_mclk_data {struct clk_hw hw; struct stm32_sai_sub_data* sai_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (char*,char const*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,struct clk_hw*) ;
 char* FUNC_6 (struct device*,int,int,int ) ;
 struct stm32_sai_mclk_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,struct clk_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct stm32_sai_sub_data *VAR_5)
{
 struct clk_hw *VAR_6;
 struct stm32_sai_mclk_data *VAR_7;
 struct device *VAR_8 = &VAR_5->pdev->dev;
 const char *VAR_9 = FUNC_2(VAR_5->sai_ck);
 char *VAR_10, *VAR_11, *VAR_12 = (char *)VAR_9;
 int VAR_13, VAR_14 = 0;

 VAR_7 = FUNC_7(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_8, sizeof(char),
     VAR_2, VAR_1);
 if (!VAR_10)
  return -VAR_0;





 VAR_11 = VAR_10;
 while (*VAR_12 && *VAR_12 != '_' && (VAR_14 < (VAR_2 - 7))) {
  *VAR_11++ = *VAR_12++;
  VAR_14++;
 }
 FUNC_1(VAR_5) ? FUNC_9(VAR_11, "a_mclk") : FUNC_9(VAR_11, "b_mclk");

 VAR_7->hw.init = FUNC_0(VAR_10, VAR_9, &VAR_3, 0);
 VAR_7->sai_data = VAR_5;
 VAR_6 = &VAR_7->hw;

 FUNC_3(VAR_8, "Register master clock %s\n", VAR_10);
 VAR_13 = FUNC_5(&VAR_5->pdev->dev, VAR_6);
 if (VAR_13) {
  FUNC_4(VAR_8, "mclk register returned %d\n", VAR_13);
  return VAR_13;
 }
 VAR_5->sai_mclk = VAR_6->clk;


 return FUNC_8(VAR_8, VAR_4, VAR_6);
}
