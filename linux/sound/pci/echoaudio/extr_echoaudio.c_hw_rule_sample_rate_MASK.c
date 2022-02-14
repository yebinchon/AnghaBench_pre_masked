
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct echoaudio* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int max; int min; } ;
struct echoaudio {int sample_rate; int can_set_rate; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_1,
          struct snd_pcm_hw_rule *VAR_2)
{
 struct snd_interval *VAR_3 = FUNC_0(VAR_1,
            VAR_0);
 struct echoaudio *VAR_4 = VAR_2->private;
 struct snd_interval VAR_5;

 if (!VAR_4->can_set_rate) {
  FUNC_1(&VAR_5);
  VAR_5.min = VAR_5.max = VAR_4->sample_rate;
  return FUNC_2(VAR_3, &VAR_5);
 }
 return 0;
}
