
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct davinci_mcasp {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct davinci_mcasp*,int ) ;
 int FUNC_1 (struct davinci_mcasp*,int ) ;
 struct davinci_mcasp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
         int VAR_2, struct snd_soc_dai *VAR_3)
{
 struct davinci_mcasp *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 switch (VAR_2) {
 case 131:
 case 130:
 case 132:
  FUNC_0(VAR_4, VAR_1->stream);
  break;
 case 128:
 case 129:
 case 133:
  FUNC_1(VAR_4, VAR_1->stream);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
