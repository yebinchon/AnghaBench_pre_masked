
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {char* dai_name; char* name; } ;
struct snd_soc_dai_link {int num_codecs; int dynamic; int dpcm_merged_format; int dpcm_merged_chan; int dpcm_merged_rate; int dpcm_playback; int dpcm_capture; struct snd_soc_dai_link_component* codecs; } ;
struct snd_soc_card {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_card*,struct snd_soc_dai_link*,struct device_node*,char*) ;
 struct snd_soc_dai_link_component* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_2,
    struct snd_soc_dai_link *VAR_3,
    struct device_node *VAR_4,
    bool VAR_5)
{
 struct snd_soc_dai_link_component *VAR_6;

 VAR_6 = FUNC_1(VAR_2->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_3->codecs = VAR_6;
 VAR_3->num_codecs = 1;

 VAR_3->dynamic = 1;
 VAR_3->dpcm_merged_format = 1;
 VAR_3->dpcm_merged_chan = 1;
 VAR_3->dpcm_merged_rate = 1;
 VAR_3->codecs->dai_name = "snd-soc-dummy-dai";
 VAR_3->codecs->name = "snd-soc-dummy";

 if (VAR_5)
  VAR_3->dpcm_playback = 1;
 else
  VAR_3->dpcm_capture = 1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, "fe");
}
