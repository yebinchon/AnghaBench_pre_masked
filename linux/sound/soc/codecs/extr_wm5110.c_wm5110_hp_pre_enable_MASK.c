
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct reg_sequence {int dummy; } ;
struct arizona_priv {int out_up_delay; struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct reg_sequence*) ;
 int FUNC_1 (int ,struct reg_sequence const*,int) ;
 struct arizona_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 struct reg_sequence* VAR_3 ;
 struct reg_sequence* VAR_4 ;
 struct reg_sequence* VAR_5 ;
 struct reg_sequence* VAR_6 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_4(VAR_7->dapm);
 struct arizona_priv *VAR_9 = FUNC_2(VAR_8);
 struct arizona *VAR_10 = VAR_9->arizona;
 unsigned int VAR_11 = FUNC_3(VAR_8, VAR_2);
 const struct reg_sequence *VAR_12;
 int VAR_13;

 switch (VAR_7->shift) {
 case 129:
  if (VAR_11 & VAR_0) {
   VAR_12 = VAR_3;
   VAR_13 = FUNC_0(VAR_3);
  } else {
   VAR_12 = VAR_5;
   VAR_13 = FUNC_0(VAR_5);
   VAR_9->out_up_delay += 10;
  }
  break;
 case 128:
  if (VAR_11 & VAR_1) {
   VAR_12 = VAR_4;
   VAR_13 = FUNC_0(VAR_4);
  } else {
   VAR_12 = VAR_6;
   VAR_13 = FUNC_0(VAR_6);
   VAR_9->out_up_delay += 10;
  }
  break;
 default:
  return 0;
 }

 return FUNC_1(VAR_10->regmap, VAR_12, VAR_13);
}
