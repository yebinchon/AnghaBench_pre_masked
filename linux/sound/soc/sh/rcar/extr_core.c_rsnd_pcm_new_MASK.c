
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct rsnd_dai {int capture; int playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,struct snd_soc_pcm_runtime*) ;
 struct rsnd_dai* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_3,
   struct snd_soc_dai *VAR_4)
{
 struct rsnd_dai *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5->playback, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5->capture, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3, &VAR_5->playback,
         VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3, &VAR_5->capture,
         VAR_0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
