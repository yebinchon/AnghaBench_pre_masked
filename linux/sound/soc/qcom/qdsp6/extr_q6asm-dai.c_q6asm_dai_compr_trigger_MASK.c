
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {int audio_client; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_4, int VAR_5)
{
 struct snd_compr_runtime *VAR_6 = VAR_4->runtime;
 struct q6asm_dai_rtd *VAR_7 = VAR_6->private_data;
 int VAR_8 = 0;

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  VAR_8 = FUNC_1(VAR_7->audio_client, 0, 0, 0);
  break;
 case 129:
  VAR_7->state = VAR_3;
  VAR_8 = FUNC_0(VAR_7->audio_client, VAR_0);
  break;
 case 128:
 case 133:
  VAR_8 = FUNC_0(VAR_7->audio_client, VAR_1);
  break;
 default:
  VAR_8 = -VAR_2;
  break;
 }

 return VAR_8;
}
