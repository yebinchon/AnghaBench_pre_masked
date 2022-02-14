
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_tdm_iface {int fmt; int slots; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;



 int FUNC_0 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_3 (int ,char*,...) ;
 struct axg_tdm_iface* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4,
       struct snd_soc_dai *VAR_5)
{
 struct axg_tdm_iface *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 switch (VAR_6->fmt & VAR_2) {
 case 130:
 case 129:
 case 128:
  if (VAR_6->slots > 2) {
   FUNC_3(VAR_5->dev, "bad slot number for format: %d\n",
    VAR_6->slots);
   return -VAR_0;
  }
  break;

 case 132:
 case 131:
  break;

 default:
  FUNC_3(VAR_5->dev, "unsupported dai format\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->fmt & VAR_1) {
  VAR_7 = FUNC_1(VAR_5, VAR_4);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_5, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
