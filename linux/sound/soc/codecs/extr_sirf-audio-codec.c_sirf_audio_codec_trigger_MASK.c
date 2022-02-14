
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct sirf_audio_codec {int dummy; } ;
struct TYPE_2__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;






 int FUNC_0 (struct sirf_audio_codec*) ;
 int FUNC_1 (struct sirf_audio_codec*,int ) ;
 int FUNC_2 (struct sirf_audio_codec*) ;
 int FUNC_3 (struct sirf_audio_codec*) ;
 struct sirf_audio_codec* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5,
  int VAR_6,
  struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct sirf_audio_codec *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = VAR_5->stream == VAR_4;





 switch (VAR_6) {
 case 129:
 case 128:
 case 133:
  if (VAR_10) {
   FUNC_5(VAR_8, VAR_0,
    VAR_2 | VAR_3, 0);
   FUNC_2(VAR_9);
  } else
   FUNC_0(VAR_9);
  break;
 case 130:
 case 131:
 case 132:
  if (VAR_10) {
   FUNC_3(VAR_9);
   FUNC_5(VAR_8, VAR_0,
    VAR_2 | VAR_3, VAR_2 | VAR_3);
  } else
   FUNC_1(VAR_9,
    VAR_5->runtime->channels);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
