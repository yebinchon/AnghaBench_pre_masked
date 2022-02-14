
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98927_priv {int ch_size; scalar_t__ sysclk; int regmap; int tdm_mode; scalar_t__ master; struct snd_soc_component* component; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 scalar_t__* VAR_6 ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct max98927_priv *VAR_7,
 struct snd_pcm_hw_params *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;

 int VAR_10 = FUNC_3(VAR_8) * VAR_7->ch_size;
 int VAR_11;

 if (VAR_7->master) {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++) {
   if (VAR_6[VAR_12] >= VAR_7->sysclk)
    break;
  }
  if (VAR_12 == FUNC_0(VAR_6)) {
   FUNC_1(VAR_9->dev, "failed to find proper clock rate.\n");
   return -VAR_0;
  }
  FUNC_5(VAR_7->regmap,
   VAR_4,
   VAR_2,
   VAR_12 << VAR_3);
 }

 if (!VAR_7->tdm_mode) {

  VAR_11 = FUNC_2(VAR_10);
  if (!VAR_11) {
   FUNC_1(VAR_9->dev, "format unsupported %d\n",
    FUNC_4(VAR_8));
   return -VAR_0;
  }

  FUNC_5(VAR_7->regmap,
   VAR_5,
   VAR_1,
   VAR_11);
 }
 return 0;
}
