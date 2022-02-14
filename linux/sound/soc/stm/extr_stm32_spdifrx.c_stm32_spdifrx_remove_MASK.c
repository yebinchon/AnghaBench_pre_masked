
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spdifrx_data {scalar_t__ dmab; scalar_t__ ctrl_chan; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct stm32_spdifrx_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct stm32_spdifrx_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ctrl_chan)
  FUNC_0(VAR_1->ctrl_chan);

 if (VAR_1->dmab)
  FUNC_2(VAR_1->dmab);

 return 0;
}
