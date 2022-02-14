
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_mclk_data {unsigned long freq; } ;
struct clk_hw {int dummy; } ;


 struct stm32_sai_mclk_data* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct stm32_sai_mclk_data *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->freq;
}
