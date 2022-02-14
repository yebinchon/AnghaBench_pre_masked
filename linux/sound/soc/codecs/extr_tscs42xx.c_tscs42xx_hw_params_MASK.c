
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
  struct snd_pcm_hw_params *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3, FUNC_1(VAR_1));
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "Failed to setup sample format (%d)\n",
   VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3, FUNC_2(VAR_1));
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev,
    "Failed to setup sample rate (%d)\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
