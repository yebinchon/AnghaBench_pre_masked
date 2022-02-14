
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct fsl_esai {int * channels; } ;
struct TYPE_2__ {int channels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (struct fsl_esai*,int) ;
 int FUNC_1 (struct fsl_esai*,int) ;
 struct fsl_esai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3,
       struct snd_soc_dai *VAR_4)
{
 struct fsl_esai *VAR_5 = FUNC_2(VAR_4);
 bool VAR_6 = VAR_2->stream == VAR_1;

 VAR_5->channels[VAR_6] = VAR_2->runtime->channels;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_5, VAR_6);
  break;
 case 128:
 case 129:
 case 133:
  FUNC_1(VAR_5, VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
