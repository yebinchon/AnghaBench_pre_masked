
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dsp_ops {TYPE_1__* drv; } ;
struct snd_soc_dai_link_component {char* dai_name; char* name; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; int id; int no_pcm; int dpcm_playback; int dpcm_capture; struct snd_soc_dai_link_component* codecs; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; int name; } ;
struct snd_soc_card {int num_links; struct snd_soc_dai_link* dai_link; } ;
struct device {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,char*,int) ;
 struct snd_soc_dai_link_component* FUNC_2 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3,
     const struct snd_sof_dsp_ops *VAR_4,
     struct snd_soc_dai_link *VAR_5,
     int VAR_6, struct snd_soc_card *VAR_7)
{
 struct snd_soc_dai_link_component *VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_5 || !VAR_7)
  return -VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_2(VAR_3, 3 * sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_1;

  VAR_5[VAR_9].name = FUNC_1(VAR_3, VAR_2,
            "NoCodec-%d", VAR_9);
  if (!VAR_5[VAR_9].name)
   return -VAR_1;

  VAR_5[VAR_9].cpus = &VAR_8[0];
  VAR_5[VAR_9].codecs = &VAR_8[1];
  VAR_5[VAR_9].platforms = &VAR_8[2];

  VAR_5[VAR_9].num_cpus = 1;
  VAR_5[VAR_9].num_codecs = 1;
  VAR_5[VAR_9].num_platforms = 1;

  VAR_5[VAR_9].id = VAR_9;
  VAR_5[VAR_9].no_pcm = 1;
  VAR_5[VAR_9].cpus->dai_name = VAR_4->drv[VAR_9].name;
  VAR_5[VAR_9].platforms->name = FUNC_0(VAR_3);
  VAR_5[VAR_9].codecs->dai_name = "snd-soc-dummy-dai";
  VAR_5[VAR_9].codecs->name = "snd-soc-dummy";
  VAR_5[VAR_9].dpcm_playback = 1;
  VAR_5[VAR_9].dpcm_capture = 1;
 }

 VAR_7->dai_link = VAR_5;
 VAR_7->num_links = VAR_6;

 return 0;
}
