
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct au1xpsc_audio_data*,int) ;
 int FUNC_1 (struct au1xpsc_audio_data*,int) ;
 struct au1xpsc_audio_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2,
          struct snd_soc_dai *VAR_3)
{
 struct au1xpsc_audio_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5, VAR_6 = VAR_1->stream;

 switch (VAR_2) {
 case 130:
 case 131:
  VAR_5 = FUNC_0(VAR_4, VAR_6);
  break;
 case 129:
 case 128:
  VAR_5 = FUNC_1(VAR_4, VAR_6);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
