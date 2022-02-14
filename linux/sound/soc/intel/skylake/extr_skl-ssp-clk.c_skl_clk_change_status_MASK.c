
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_clk_rate_cfg_table {int dummy; } ;
struct skl_clk {size_t id; TYPE_1__* pdata; int rate; } ;
struct TYPE_4__ {int rate_cfg; } ;
struct TYPE_3__ {int pvt_data; TYPE_2__* ssp_clks; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 struct skl_clk_rate_cfg_table* FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (int ,struct skl_clk_rate_cfg_table*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct skl_clk *VAR_1,
    bool VAR_2)
{
 struct skl_clk_rate_cfg_table *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1->id);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_1->id, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_1(VAR_1->pdata->ssp_clks[VAR_1->id].rate_cfg,
      VAR_1->rate);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_3(VAR_1->pdata->pvt_data, VAR_3,
     VAR_4, VAR_5, VAR_2);
}
