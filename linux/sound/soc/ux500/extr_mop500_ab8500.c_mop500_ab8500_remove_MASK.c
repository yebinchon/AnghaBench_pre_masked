
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dummy; } ;
struct mop500_ab8500_drvdata {int * clk_ptr_intclk; int * clk_ptr_ulpclk; int * clk_ptr_sysclk; } ;


 int FUNC_0 (int *) ;
 struct mop500_ab8500_drvdata* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_card*,struct mop500_ab8500_drvdata*) ;

void FUNC_3(struct snd_soc_card *VAR_0)
{
 struct mop500_ab8500_drvdata *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->clk_ptr_sysclk != ((void*)0))
  FUNC_0(VAR_1->clk_ptr_sysclk);
 if (VAR_1->clk_ptr_ulpclk != ((void*)0))
  FUNC_0(VAR_1->clk_ptr_ulpclk);
 if (VAR_1->clk_ptr_intclk != ((void*)0))
  FUNC_0(VAR_1->clk_ptr_intclk);

 FUNC_2(VAR_0, VAR_1);
}
