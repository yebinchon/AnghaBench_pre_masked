
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link_component {void* name; void* dai_name; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* codecs; struct snd_soc_dai_link_component* cpus; } ;
struct snd_soc_card {int num_links; struct device* dev; int name; struct snd_soc_dai_link* dai_link; } ;
struct device {int dummy; } ;
struct atmel_pdmic {TYPE_1__* pdata; } ;
struct TYPE_2__ {int card_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,int,int ) ;
 struct atmel_pdmic* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3,
    struct snd_soc_card *VAR_4)
{
 struct snd_soc_dai_link *VAR_5;
 struct atmel_pdmic *VAR_6 = FUNC_2(VAR_4);
 struct snd_soc_dai_link_component *VAR_7;

 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3, 3 * sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_5->cpus = &VAR_7[0];
 VAR_5->codecs = &VAR_7[1];
 VAR_5->platforms = &VAR_7[2];

 VAR_5->num_cpus = 1;
 VAR_5->num_codecs = 1;
 VAR_5->num_platforms = 1;

 VAR_5->name = "PDMIC";
 VAR_5->stream_name = "PDMIC PCM";
 VAR_5->codecs->dai_name = VAR_0;
 VAR_5->cpus->dai_name = FUNC_0(VAR_3);
 VAR_5->codecs->name = FUNC_0(VAR_3);
 VAR_5->platforms->name = FUNC_0(VAR_3);

 VAR_4->dai_link = VAR_5;
 VAR_4->num_links = 1;
 VAR_4->name = VAR_6->pdata->card_name;
 VAR_4->dev = VAR_3;

 return 0;
}
