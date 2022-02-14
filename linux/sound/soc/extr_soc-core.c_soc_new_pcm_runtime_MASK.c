
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int codec_dais; struct snd_soc_dai_link* dai_link; struct snd_soc_card* card; int component_list; } ;
struct snd_soc_dai_link {int num_codecs; int * ops; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*) ;
 struct snd_soc_pcm_runtime* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct snd_soc_pcm_runtime *FUNC_4(
 struct snd_soc_card *VAR_2, struct snd_soc_dai_link *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct snd_soc_pcm_runtime), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->component_list);
 VAR_4->card = VAR_2;
 VAR_4->dai_link = VAR_3;
 if (!VAR_4->dai_link->ops)
  VAR_4->dai_link->ops = &VAR_1;

 VAR_4->codec_dais = FUNC_1(VAR_3->num_codecs,
     sizeof(struct snd_soc_dai *),
     VAR_0);
 if (!VAR_4->codec_dais) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
