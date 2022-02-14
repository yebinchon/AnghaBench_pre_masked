
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; } ;
struct snd_emu10k1 {size_t p16v_device_offset; TYPE_1__* p16v_voices; } ;
struct TYPE_4__ {size_t device; } ;
struct TYPE_3__ {scalar_t__ use; } ;


 struct snd_emu10k1* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_0(VAR_0);


 VAR_1->p16v_voices[VAR_0->pcm->device - VAR_1->p16v_device_offset].use = 0;

 return 0;
}
