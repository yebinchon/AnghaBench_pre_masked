
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_clk_rate_cfg_table {int dummy; } ;
struct skl_clk {size_t id; unsigned long rate; TYPE_2__* pdata; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ssp_clks; } ;
struct TYPE_3__ {int rate_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct skl_clk_rate_cfg_table*,int) ;
 int FUNC_1 (size_t) ;
 struct skl_clk_rate_cfg_table* FUNC_2 (int ,unsigned long) ;
 struct skl_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
     unsigned long VAR_3)
{
 struct skl_clk *VAR_4 = FUNC_3(VAR_1);
 struct skl_clk_rate_cfg_table *VAR_5;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4->pdata->ssp_clks[VAR_4->id].rate_cfg,
       VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4->id);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_5, VAR_6);
 VAR_4->rate = VAR_2;

 return 0;
}
