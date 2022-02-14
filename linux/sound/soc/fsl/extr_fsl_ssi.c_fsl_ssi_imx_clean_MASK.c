
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fsl_ssi {int clk; int has_ipg_clk_name; int use_dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0, struct fsl_ssi *VAR_1)
{
 if (!VAR_1->use_dma)
  FUNC_1(VAR_0);
 if (!VAR_1->has_ipg_clk_name)
  FUNC_0(VAR_1->clk);
}
