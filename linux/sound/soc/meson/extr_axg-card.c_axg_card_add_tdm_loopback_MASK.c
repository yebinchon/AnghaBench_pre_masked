
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {char* dai_name; char* name; int of_node; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int dpcm_capture; int no_pcm; struct snd_soc_dai_link_component* cpus; int init; int * ops; struct snd_soc_dai_link_component* codecs; scalar_t__ name; scalar_t__ stream_name; } ;
struct snd_soc_card {int dev; struct snd_soc_dai_link* dai_link; scalar_t__ num_links; } ;
struct axg_card {int * link_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axg_card*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_soc_dai_link_component* FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 struct axg_card* FUNC_4 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_card *VAR_4,
         int *VAR_5)
{
 struct axg_card *VAR_6 = FUNC_4(VAR_4);
 struct snd_soc_dai_link *VAR_7 = &VAR_4->dai_link[*VAR_5];
 struct snd_soc_dai_link *VAR_8;
 struct snd_soc_dai_link_component *VAR_9;
 int VAR_10;


 VAR_10 = FUNC_0(VAR_6, VAR_4->num_links + 1);
 if (VAR_10)
  return VAR_10;

 VAR_8 = &VAR_4->dai_link[*VAR_5 + 1];

 VAR_8->name = FUNC_2(VAR_1, "%s-lb", VAR_7->name);
 if (!VAR_8->name)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4->dev, 2 * sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->cpus = &VAR_9[0];
 VAR_8->codecs = &VAR_9[1];
 VAR_8->num_cpus = 1;
 VAR_8->num_codecs = 1;

 VAR_8->stream_name = VAR_8->name;
 VAR_8->cpus->of_node = VAR_7->cpus->of_node;
 VAR_8->cpus->dai_name = "TDM Loopback";
 VAR_8->codecs->name = "snd-soc-dummy";
 VAR_8->codecs->dai_name = "snd-soc-dummy-dai";
 VAR_8->dpcm_capture = 1;
 VAR_8->no_pcm = 1;
 VAR_8->ops = &VAR_2;
 VAR_8->init = VAR_3;


 VAR_6->link_data[*VAR_5 + 1] = VAR_6->link_data[*VAR_5];





 FUNC_3(VAR_8->cpus->of_node);


 *VAR_5 += 1;

 return 0;
}
