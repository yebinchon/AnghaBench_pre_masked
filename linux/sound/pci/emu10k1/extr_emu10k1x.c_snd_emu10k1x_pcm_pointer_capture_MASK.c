
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct emu10k1x_pcm* private_data; } ;
struct emu10k1x_pcm {int running; } ;
struct emu10k1x {int dummy; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct emu10k1x*,int ,int ) ;
 struct emu10k1x* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct emu10k1x *VAR_2 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct emu10k1x_pcm *VAR_4 = VAR_3->private_data;
 snd_pcm_uframes_t VAR_5;

 if (!VAR_4->running)
  return 0;

 VAR_5 = FUNC_0(VAR_3, FUNC_1(VAR_2, VAR_0, 0));
 if (VAR_5 >= VAR_3->buffer_size)
  VAR_5 -= VAR_3->buffer_size;

 return VAR_5;
}
