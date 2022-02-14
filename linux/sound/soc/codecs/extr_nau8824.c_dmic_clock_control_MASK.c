
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct nau8824 {int fs; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct nau8824* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_4,
  struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_4->dapm);
 struct nau8824 *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;





 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  if ((0x1 << (8 - VAR_9)) * VAR_8->fs <= VAR_0)
   break;
 }
 FUNC_0(VAR_8->dev, "dmic src %d for mclk %d\n", VAR_9, VAR_8->fs * 256);
 FUNC_1(VAR_8->regmap, VAR_3,
  VAR_1, (VAR_9 << VAR_2));

 return 0;
}
