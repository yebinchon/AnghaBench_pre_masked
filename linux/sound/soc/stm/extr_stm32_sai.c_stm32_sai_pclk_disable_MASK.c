
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_data {int pclk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct stm32_sai_data* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct stm32_sai_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pclk);

 return 0;
}
