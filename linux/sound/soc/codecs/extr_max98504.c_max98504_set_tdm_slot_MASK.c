
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct regmap {int dummy; } ;
struct max98504_priv {unsigned int pcm_rx_channels; struct regmap* regmap; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int) ;
 struct max98504_priv* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4,
  int VAR_5, int VAR_6)
{
 struct max98504_priv *VAR_7 = FUNC_2(VAR_2);
 struct regmap *VAR_8 = VAR_7->regmap;


 switch (VAR_2->id) {
 case 129:
  FUNC_1(VAR_8, VAR_0, VAR_3);
  VAR_7->pcm_rx_channels = VAR_4;
  break;

 case 128:
  FUNC_1(VAR_8, VAR_1, VAR_3);
  break;
 default:
  FUNC_0(1);
 }

 return 0;
}
