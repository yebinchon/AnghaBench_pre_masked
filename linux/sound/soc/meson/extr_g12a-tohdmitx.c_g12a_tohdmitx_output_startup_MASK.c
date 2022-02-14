
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_dai {int dev; int capture_widget; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct g12a_tohdmitx_input {int fmt; int params; } ;
struct TYPE_2__ {int * params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct g12a_tohdmitx_input* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct g12a_tohdmitx_input *VAR_5 =
  FUNC_2(VAR_3->capture_widget);

 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0(!VAR_4->dai_link->params)) {
  FUNC_1(VAR_3->dev, "codec2codec link expected\n");
  return -VAR_0;
 }


 VAR_4->dai_link->params = &VAR_5->params;

 if (!VAR_5->fmt)
  return 0;

 return FUNC_3(VAR_4, VAR_5->fmt);
}
