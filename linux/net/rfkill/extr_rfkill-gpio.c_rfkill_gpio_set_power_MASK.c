
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill_gpio_data {int clk_enabled; int clk; int reset_gpio; int shutdown_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, bool VAR_1)
{
 struct rfkill_gpio_data *VAR_2 = VAR_0;

 if (!VAR_1 && !FUNC_0(VAR_2->clk) && !VAR_2->clk_enabled)
  FUNC_2(VAR_2->clk);

 FUNC_3(VAR_2->shutdown_gpio, !VAR_1);
 FUNC_3(VAR_2->reset_gpio, !VAR_1);

 if (VAR_1 && !FUNC_0(VAR_2->clk) && VAR_2->clk_enabled)
  FUNC_1(VAR_2->clk);

 VAR_2->clk_enabled = !VAR_1;

 return 0;
}
