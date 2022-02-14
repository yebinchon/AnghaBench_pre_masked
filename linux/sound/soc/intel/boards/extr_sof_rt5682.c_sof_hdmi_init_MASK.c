
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_hdmi_pcm {int head; struct snd_soc_dai* codec_dai; int device; } ;
struct sof_card_private {int hdmi_pcm_list; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; TYPE_2__* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sof_hdmi_pcm* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct sof_card_private* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_2)
{
 struct sof_card_private *VAR_3 = FUNC_2(VAR_2->card);
 struct snd_soc_dai *VAR_4 = VAR_2->codec_dai;
 struct sof_hdmi_pcm *VAR_5;

 VAR_5 = FUNC_0(VAR_2->card->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->device = VAR_2->dai_link->id;
 VAR_5->codec_dai = VAR_4;

 FUNC_1(&VAR_5->head, &VAR_3->hdmi_pcm_list);

 return 0;
}
