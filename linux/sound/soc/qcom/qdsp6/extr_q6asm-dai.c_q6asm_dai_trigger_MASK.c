
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {int audio_client; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 struct q6asm_dai_rtd *VAR_8 = VAR_7->private_data;

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  VAR_6 = FUNC_1(VAR_8->audio_client, 0, 0, 0);
  break;
 case 129:
  VAR_8->state = VAR_3;
  VAR_6 = FUNC_0(VAR_8->audio_client, VAR_0);
  break;
 case 128:
 case 133:
  VAR_6 = FUNC_0(VAR_8->audio_client, VAR_1);
  break;
 default:
  VAR_6 = -VAR_2;
  break;
 }

 return VAR_6;
}
