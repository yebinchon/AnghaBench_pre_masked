
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int voices; int * block; TYPE_2__* emu; scalar_t__ dram_opened; } ;
struct TYPE_4__ {int memhdr; } ;
struct TYPE_3__ {struct snd_emu8k_pcm* private_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_emu8k_pcm*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu8k_pcm *VAR_1 = VAR_0->runtime->private_data;

 if (VAR_1->block) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->voices; VAR_2++)
   FUNC_2(VAR_1, VAR_2);
  if (VAR_1->dram_opened)
   FUNC_0(VAR_1->emu);
  FUNC_1(VAR_1->emu->memhdr, VAR_1->block);
  VAR_1->block = ((void*)0);
 }
 return 0;
}
