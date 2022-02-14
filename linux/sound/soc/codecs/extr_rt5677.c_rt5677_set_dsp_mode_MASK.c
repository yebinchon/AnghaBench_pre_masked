
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int is_dsp_mode; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct rt5677_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_2, bool VAR_3)
{
 struct rt5677_priv *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_4->regmap, VAR_1,
   VAR_0, VAR_0);
  VAR_4->is_dsp_mode = 1;
 } else {
  FUNC_0(VAR_4->regmap, VAR_1,
   VAR_0, 0x0);
  VAR_4->is_dsp_mode = 0;
 }
}
