
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct reg_sequence {int member_0; int member_1; int def; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int regmap; int dac_comp_lock; int dac_comp_enabled; int dac_comp_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reg_sequence*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct reg_sequence*,int ) ;
 struct arizona_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_2,
     unsigned int VAR_3)
{
 struct arizona_priv *VAR_4 = FUNC_4(VAR_2);
 struct arizona *VAR_5 = VAR_4->arizona;
 struct reg_sequence VAR_6[] = {
  { 0x80, 0x3 },
  { VAR_0, 0 },
  { VAR_1, 0 },
  { 0x80, 0x0 },
 };

 FUNC_1(&VAR_5->dac_comp_lock);

 VAR_6[1].def = VAR_5->dac_comp_coeff;
 if (VAR_3 >= 176400)
  VAR_6[2].def = VAR_5->dac_comp_enabled;

 FUNC_2(&VAR_5->dac_comp_lock);

 FUNC_3(VAR_5->regmap,
          VAR_6,
          FUNC_0(VAR_6));
}
