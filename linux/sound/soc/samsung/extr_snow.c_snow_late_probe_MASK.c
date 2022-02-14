
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int num_codecs; struct snd_soc_dai* codec_dai; struct snd_soc_dai** codec_dais; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int ,int ) ;
 struct snd_soc_pcm_runtime* FUNC_1 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3;
 struct snd_soc_dai *VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_2->dai_link[0].name);


 if (VAR_3->num_codecs > 1)
  VAR_4 = VAR_3->codec_dais[0];
 else
  VAR_4 = VAR_3->codec_dai;


 return FUNC_0(VAR_4, 0,
    VAR_0, VAR_1);
}
