
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int dummy; } ;
struct TYPE_2__ {struct snd_emu8k_pcm* private_data; } ;


 int FUNC_0 (struct snd_emu8k_pcm*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu8k_pcm *VAR_1 = VAR_0->runtime->private_data;
 FUNC_0(VAR_1);
 VAR_0->runtime->private_data = ((void*)0);
 return 0;
}
