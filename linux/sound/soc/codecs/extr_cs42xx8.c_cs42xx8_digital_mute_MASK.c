
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs42xx8_priv {int tx_channels; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct cs42xx8_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct cs42xx8_priv *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6 = VAR_5->tx_channels ?
          ~((0x1 << VAR_5->tx_channels) - 1) : 0;

 FUNC_0(VAR_5->regmap, VAR_0,
       VAR_3 ? VAR_1 : VAR_6);

 return 0;
}
