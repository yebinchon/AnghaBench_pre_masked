
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ak4458_priv {int fs; scalar_t__ mute_gpiod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 struct ak4458_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 struct ak4458_priv *VAR_8 = FUNC_2(VAR_7);
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = VAR_8->fs;

 VAR_12 = FUNC_3(VAR_7, VAR_1);
 VAR_13 = (VAR_12 & VAR_2) >> VAR_3;

 VAR_10 = VAR_4[VAR_13] / (VAR_9 / 1000);

 if (VAR_6) {
  VAR_11 = FUNC_4(VAR_7, VAR_0, 0x01, 1);
  FUNC_1(VAR_10);
  if (VAR_8->mute_gpiod)
   FUNC_0(VAR_8->mute_gpiod, 1);
 } else {
  if (VAR_8->mute_gpiod)
   FUNC_0(VAR_8->mute_gpiod, 0);
  VAR_11 = FUNC_4(VAR_7, VAR_0, 0x01, 0);
  FUNC_1(VAR_10);
 }

 return 0;
}
