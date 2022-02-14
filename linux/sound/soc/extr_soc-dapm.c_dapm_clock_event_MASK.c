
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int clk; int dapm; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
     struct snd_kcontrol *VAR_2, int VAR_3)
{
 if (!VAR_1->clk)
  return -VAR_0;

 FUNC_3(VAR_1->dapm);

 if (FUNC_0(VAR_3)) {
  return FUNC_2(VAR_1->clk);
 } else {
  FUNC_1(VAR_1->clk);
  return 0;
 }

 return 0;
}
