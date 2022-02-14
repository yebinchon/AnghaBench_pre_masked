
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct pcm512x_priv {int mute; int mutex; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcm512x_priv*) ;
 int FUNC_4 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct pcm512x_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 struct pcm512x_priv *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;
 unsigned int VAR_9;

 FUNC_1(&VAR_7->mutex);

 if (VAR_5) {
  VAR_7->mute |= 0x1;
  VAR_8 = FUNC_5(VAR_7->regmap, VAR_1,
      VAR_2 | VAR_3,
      VAR_2 | VAR_3);
  if (VAR_8 != 0) {
   FUNC_0(VAR_6->dev,
    "Failed to set digital mute: %d\n", VAR_8);
   goto unlock;
  }

  FUNC_4(VAR_7->regmap,
      VAR_0,
      VAR_9, (VAR_9 & 0x3) == 0,
      200, 10000);
 } else {
  VAR_7->mute &= ~0x1;
  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 != 0) {
   FUNC_0(VAR_6->dev,
    "Failed to update digital mute: %d\n", VAR_8);
   goto unlock;
  }

  FUNC_4(VAR_7->regmap,
      VAR_0,
      VAR_9,
      (VAR_9 & 0x3)
      == ((~VAR_7->mute >> 1) & 0x3),
      200, 10000);
 }

unlock:
 FUNC_2(&VAR_7->mutex);

 return VAR_8;
}
