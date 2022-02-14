
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct lpass_data {void* pcnoc_sway_clk; void* pcnoc_mport_clk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;
 struct lpass_data* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct lpass_data *VAR_1 = FUNC_5(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 VAR_1->pcnoc_mport_clk = FUNC_4(VAR_2, "pcnoc-mport-clk");
 if (FUNC_0(VAR_1->pcnoc_mport_clk)) {
  FUNC_3(&VAR_0->dev, "error getting pcnoc-mport-clk: %ld\n",
   FUNC_1(VAR_1->pcnoc_mport_clk));
  return FUNC_1(VAR_1->pcnoc_mport_clk);
 }

 VAR_3 = FUNC_2(VAR_1->pcnoc_mport_clk);
 if (VAR_3) {
  FUNC_3(&VAR_0->dev, "Error enabling pcnoc-mport-clk: %d\n",
   VAR_3);
  return VAR_3;
 }

 VAR_1->pcnoc_sway_clk = FUNC_4(VAR_2, "pcnoc-sway-clk");
 if (FUNC_0(VAR_1->pcnoc_sway_clk)) {
  FUNC_3(&VAR_0->dev, "error getting pcnoc-sway-clk: %ld\n",
   FUNC_1(VAR_1->pcnoc_sway_clk));
  return FUNC_1(VAR_1->pcnoc_sway_clk);
 }

 VAR_3 = FUNC_2(VAR_1->pcnoc_sway_clk);
 if (VAR_3) {
  FUNC_3(&VAR_0->dev, "Error enabling pcnoc_sway_clk: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
