
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct kbl_rt5663_private {int hdmi_pcm_list; } ;
struct kbl_hdmi_pcm {int device; int head; struct snd_soc_dai* codec_dai; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kbl_hdmi_pcm* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct kbl_rt5663_private* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_2, int VAR_3)
{
 struct kbl_rt5663_private *VAR_4 = FUNC_2(VAR_2->card);
 struct snd_soc_dai *VAR_5 = VAR_2->codec_dai;
 struct kbl_hdmi_pcm *VAR_6;

 VAR_6 = FUNC_0(VAR_2->card->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->device = VAR_3;
 VAR_6->codec_dai = VAR_5;

 FUNC_1(&VAR_6->head, &VAR_4->hdmi_pcm_list);

 return 0;
}
