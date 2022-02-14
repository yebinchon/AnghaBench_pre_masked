
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spdif_dev {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 struct sun4i_spdif_dev* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct sun4i_spdif_dev*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct sun4i_spdif_dev*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
          struct snd_soc_dai *VAR_4)
{
 int VAR_5 = 0;
 struct sun4i_spdif_dev *VAR_6 = FUNC_0(VAR_4);

 if (VAR_2->stream != VAR_1)
  return -VAR_0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  FUNC_2(VAR_2, VAR_6);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_2, VAR_6);
  break;

 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
