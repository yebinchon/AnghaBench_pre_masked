
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int regmap; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct snd_soc_dai*,char*) ;
 int FUNC_2 (int ,unsigned int,int) ;
 struct madera_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dai *VAR_0,
     unsigned int VAR_1,
     int VAR_2, unsigned int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct madera_priv *VAR_5 = FUNC_3(VAR_4);
 struct madera *VAR_6 = VAR_5->madera;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  VAR_7 = FUNC_0(VAR_3) - 1;
  if (VAR_7 < 0)
   return;

  FUNC_2(VAR_6->regmap, VAR_1 + VAR_8, VAR_7);

  VAR_3 &= ~(1 << VAR_7);
 }

 if (VAR_3)
  FUNC_1(VAR_0, "Too many channels in TDM mask\n");
}
