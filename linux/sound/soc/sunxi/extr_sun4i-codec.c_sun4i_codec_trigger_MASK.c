
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_codec {int dummy; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 struct sun4i_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct sun4i_codec*) ;
 int FUNC_2 (struct sun4i_codec*) ;
 int FUNC_3 (struct sun4i_codec*) ;
 int FUNC_4 (struct sun4i_codec*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3,
          struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct sun4i_codec *VAR_6 = FUNC_0(VAR_5->card);

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  if (VAR_2->stream == VAR_1)
   FUNC_2(VAR_6);
  else
   FUNC_1(VAR_6);
  break;

 case 129:
 case 128:
 case 133:
  if (VAR_2->stream == VAR_1)
   FUNC_4(VAR_6);
  else
   FUNC_3(VAR_6);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
