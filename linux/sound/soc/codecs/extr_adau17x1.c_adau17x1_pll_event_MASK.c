
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct adau {int* pll_regs; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct adau* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_3,
 struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_6(VAR_3->dapm);
 struct adau *VAR_7 = FUNC_5(VAR_6);

 if (FUNC_1(VAR_5)) {
  VAR_7->pll_regs[5] = 1;
 } else {
  VAR_7->pll_regs[5] = 0;


  FUNC_4(VAR_7->regmap, VAR_0,
   VAR_1, 0);
 }


 FUNC_3(VAR_7->regmap, VAR_2,
   VAR_7->pll_regs, FUNC_0(VAR_7->pll_regs));

 if (FUNC_1(VAR_5)) {
  FUNC_2(5);
  FUNC_4(VAR_7->regmap, VAR_0,
   VAR_1,
   VAR_1);
 }

 return 0;
}
