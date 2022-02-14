
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int buffer_bytes_max; } ;
struct snd_pcm_hw_rule {int var; struct snd_pcm_substream* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int integer; scalar_t__ openmax; scalar_t__ openmin; int max; scalar_t__ min; } ;


 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int ,struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_0,
         struct snd_pcm_hw_rule *VAR_1)
{
 struct snd_interval VAR_2;
 struct snd_pcm_substream *VAR_3 = VAR_1->private;
 VAR_2.min = 0;
 VAR_2.max = VAR_3->buffer_bytes_max;
 VAR_2.openmin = 0;
 VAR_2.openmax = 0;
 VAR_2.integer = 1;
 return FUNC_1(FUNC_0(VAR_0, VAR_1->var), &VAR_2);
}
