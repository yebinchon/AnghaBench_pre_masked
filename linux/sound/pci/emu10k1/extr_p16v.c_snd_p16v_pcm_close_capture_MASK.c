
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ use; } ;
struct snd_emu10k1 {TYPE_1__ p16v_capture_voice; } ;


 struct snd_emu10k1* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_0(VAR_0);


 VAR_1->p16v_capture_voice.use = 0;

 return 0;
}
