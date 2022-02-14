
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; } ;
struct skl_hda_private {int dai_index; int hdmi_pcm_list; } ;
struct skl_hda_hdmi_pcm {int device; int head; int codec_dai; } ;
typedef int dai_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct skl_hda_hdmi_pcm* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct snd_soc_card*,char*) ;
 struct skl_hda_private* FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(struct snd_soc_card *VAR_4, int VAR_5)
{
 struct skl_hda_private *VAR_6 = FUNC_3(VAR_4);
 struct skl_hda_hdmi_pcm *VAR_7;
 char VAR_8[VAR_3];

 VAR_7 = FUNC_0(VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(VAR_8, sizeof(VAR_8), "intel-hdmi-hifi%d",
   VAR_6->dai_index);
 VAR_7->codec_dai = FUNC_2(VAR_4, VAR_8);
 if (!VAR_7->codec_dai)
  return -VAR_0;

 VAR_7->device = VAR_5;
 FUNC_1(&VAR_7->head, &VAR_6->hdmi_pcm_list);

 return 0;
}
