
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int dummy; } ;
struct stm32_sai_mclk_data {unsigned long freq; struct stm32_sai_sub_data* sai_data; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct stm32_sai_sub_data*,unsigned long,unsigned long) ;
 int FUNC_1 (struct stm32_sai_sub_data*,int) ;
 struct stm32_sai_mclk_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct stm32_sai_mclk_data *VAR_3 = FUNC_2(VAR_0);
 struct stm32_sai_sub_data *VAR_4 = VAR_3->sai_data;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->freq = VAR_1;

 return 0;
}
