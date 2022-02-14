
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (struct davinci_mcbsp_dev*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int) ;
 struct davinci_mcbsp_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
          struct snd_soc_dai *VAR_4)
{
 struct davinci_mcbsp_dev *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0;
 int VAR_7 = (VAR_2->stream == VAR_1);

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_5, VAR_2);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_5, VAR_7);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
