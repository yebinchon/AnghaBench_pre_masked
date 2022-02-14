
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 int FUNC_0 (struct snd_soc_dai*,char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int,int) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dai *VAR_0,
      unsigned int VAR_1,
      int VAR_2, unsigned int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct arizona_priv *VAR_5 = FUNC_3(VAR_4);
 struct arizona *VAR_6 = VAR_5->arizona;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  VAR_7 = FUNC_1(VAR_3) - 1;
  if (VAR_7 < 0)
   return;

  FUNC_2(VAR_6->regmap, VAR_1 + VAR_8, VAR_7);

  VAR_3 &= ~(1 << VAR_7);
 }

 if (VAR_3)
  FUNC_0(VAR_0, "Too many channels in TDM mask\n");
}
