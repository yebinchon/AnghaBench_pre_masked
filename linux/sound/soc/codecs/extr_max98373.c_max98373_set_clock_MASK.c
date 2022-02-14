
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98373_priv {int ch_size; int regmap; int tdm_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct max98373_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3,
 struct snd_pcm_hw_params *VAR_4)
{
 struct max98373_priv *VAR_5 = FUNC_5(VAR_3);

 int VAR_6 = FUNC_2(VAR_4) * VAR_5->ch_size;
 int VAR_7;

 if (!VAR_5->tdm_mode) {

  VAR_7 = FUNC_1(VAR_6);
  if (!VAR_7) {
   FUNC_0(VAR_3->dev, "format unsupported %d\n",
    FUNC_3(VAR_4));
   return -VAR_0;
  }

  FUNC_4(VAR_5->regmap,
   VAR_2,
   VAR_1,
   VAR_7);
 }
 return 0;
}
