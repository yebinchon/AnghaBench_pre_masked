
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_sub_data {int sai_ck; TYPE_1__* pdata; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk_x11k; struct clk* clk_x8k; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct clk*) ;
 int FUNC_1 (int *,char*,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stm32_sai_sub_data *VAR_2,
          unsigned int VAR_3)
{
 struct platform_device *VAR_4 = VAR_2->pdev;
 struct clk *VAR_5 = VAR_2->pdata->clk_x8k;
 int VAR_6;

 if (!(VAR_3 % VAR_1))
  VAR_5 = VAR_2->pdata->clk_x11k;

 VAR_6 = FUNC_0(VAR_2->sai_ck, VAR_5);
 if (VAR_6)
  FUNC_1(&VAR_4->dev, " Error %d setting sai_ck parent clock. %s",
   VAR_6, VAR_6 == -VAR_0 ?
   "Active stream rates conflict\n" : "\n");

 return VAR_6;
}
