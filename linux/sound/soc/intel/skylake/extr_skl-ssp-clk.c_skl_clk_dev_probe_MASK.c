
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_ssp_clk {TYPE_1__* rate_cfg; } ;
struct skl_clk_pdata {int num_clks; struct skl_ssp_clk* ssp_clks; struct skl_clk_parent_src* parent_clks; } ;
struct skl_clk_parent_src {int dummy; } ;
struct skl_clk_data {size_t avail_clk_cnt; int parent; int * clk; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct skl_clk_pdata* FUNC_2 (struct device*) ;
 struct skl_clk_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct skl_clk_data*) ;
 int FUNC_5 (struct device*,struct skl_ssp_clk*,struct skl_clk_pdata*,int) ;
 int FUNC_6 (struct device*,int ,struct skl_clk_parent_src*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct skl_clk_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device *VAR_6 = VAR_5->parent;
 struct skl_clk_parent_src *VAR_7;
 struct skl_clk_pdata *VAR_8;
 struct skl_clk_data *VAR_9;
 struct skl_ssp_clk *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_2(&VAR_4->dev);
 VAR_7 = VAR_8->parent_clks;
 VAR_10 = VAR_8->ssp_clks;
 if (!VAR_7 || !VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_5, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_11 = FUNC_6(VAR_6, VAR_9->parent, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_8->num_clks; VAR_12++) {




  if (VAR_10[VAR_12].rate_cfg[0].rate == 0)
   continue;

  VAR_9->clk[VAR_9->avail_clk_cnt] = FUNC_5(VAR_5,
    &VAR_10[VAR_12], VAR_8, VAR_12);

  if (FUNC_0(VAR_9->clk[VAR_9->avail_clk_cnt])) {
   VAR_11 = FUNC_1(VAR_9->clk[VAR_9->avail_clk_cnt++]);
   goto err_unreg_skl_clk;
  }
 }

 FUNC_4(VAR_4, VAR_9);

 return 0;

err_unreg_skl_clk:
 FUNC_8(VAR_9);
 FUNC_7(VAR_9->parent, VAR_3);

 return VAR_11;
}
