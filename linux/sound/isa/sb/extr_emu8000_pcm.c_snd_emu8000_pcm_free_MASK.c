
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {struct snd_emu8000* private_data; } ;
struct snd_emu8000 {int * pcm; } ;



__attribute__((used)) static void FUNC_0(struct snd_pcm *VAR_0)
{
 struct snd_emu8000 *VAR_1 = VAR_0->private_data;
 VAR_1->pcm = ((void*)0);
}
