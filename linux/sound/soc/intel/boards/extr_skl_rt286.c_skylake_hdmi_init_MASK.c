
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {scalar_t__ id; } ;
struct skl_rt286_private {int hdmi_pcm_list; } ;
struct skl_hdmi_pcm {int head; struct snd_soc_dai* codec_dai; scalar_t__ device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct skl_hdmi_pcm* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct skl_rt286_private* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_3)
{
 struct skl_rt286_private *VAR_4 = FUNC_2(VAR_3->card);
 struct snd_soc_dai *VAR_5 = VAR_3->codec_dai;
 struct skl_hdmi_pcm *VAR_6;

 VAR_6 = FUNC_0(VAR_3->card->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->device = VAR_2 + VAR_5->id;
 VAR_6->codec_dai = VAR_5;

 FUNC_1(&VAR_6->head, &VAR_4->hdmi_pcm_list);

 return 0;
}
