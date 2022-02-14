
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; int * platforms; int * codecs; int * cpus; } ;
struct snd_soc_codec_conf {int dummy; } ;
struct snd_soc_card {int num_links; int num_configs; struct snd_soc_codec_conf* codec_conf; struct snd_soc_dai_link* dai_link; } ;
struct simple_dai_props {int platforms; int codecs; int cpus; } ;
struct link_info {int link; int dais; int conf; } ;
struct device {int dummy; } ;
struct asoc_simple_priv {struct snd_soc_dai_link* dai_link; struct snd_soc_codec_conf* codec_conf; struct asoc_simple_dai* dais; struct simple_dai_props* dai_props; } ;
struct asoc_simple_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int,int,int ) ;
 struct snd_soc_card* FUNC_1 (struct asoc_simple_priv*) ;
 struct device* FUNC_2 (struct asoc_simple_priv*) ;

int FUNC_3(struct asoc_simple_priv *VAR_2,
     struct link_info *VAR_3)
{
 struct snd_soc_card *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = FUNC_2(VAR_2);
 struct snd_soc_dai_link *VAR_6;
 struct simple_dai_props *VAR_7;
 struct asoc_simple_dai *VAR_8;
 struct snd_soc_codec_conf *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_7 = FUNC_0(VAR_5, VAR_3->link, sizeof(*VAR_7), VAR_1);
 VAR_6 = FUNC_0(VAR_5, VAR_3->link, sizeof(*VAR_6), VAR_1);
 VAR_8 = FUNC_0(VAR_5, VAR_3->dais, sizeof(*VAR_8), VAR_1);
 if (!VAR_7 || !VAR_6 || !VAR_8)
  return -VAR_0;

 if (VAR_3->conf) {
  VAR_9 = FUNC_0(VAR_5, VAR_3->conf, sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   return -VAR_0;
 }
 for (VAR_10 = 0; VAR_10 < VAR_3->link; VAR_10++) {
  VAR_6[VAR_10].cpus = &VAR_7[VAR_10].cpus;
  VAR_6[VAR_10].num_cpus = 1;
  VAR_6[VAR_10].codecs = &VAR_7[VAR_10].codecs;
  VAR_6[VAR_10].num_codecs = 1;
  VAR_6[VAR_10].platforms = &VAR_7[VAR_10].platforms;
  VAR_6[VAR_10].num_platforms = 1;
 }

 VAR_2->dai_props = VAR_7;
 VAR_2->dai_link = VAR_6;
 VAR_2->dais = VAR_8;
 VAR_2->codec_conf = VAR_9;

 VAR_4->dai_link = VAR_2->dai_link;
 VAR_4->num_links = VAR_3->link;
 VAR_4->codec_conf = VAR_9;
 VAR_4->num_configs = VAR_3->conf;

 return 0;
}
