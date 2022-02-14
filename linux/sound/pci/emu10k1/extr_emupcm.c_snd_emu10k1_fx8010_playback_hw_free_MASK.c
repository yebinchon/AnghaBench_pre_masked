
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_fx8010_pcm {unsigned int channels; scalar_t__* etram; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_2(VAR_1);
 struct snd_emu10k1_fx8010_pcm *VAR_3 = &VAR_2->fx8010.pcm[VAR_1->number];
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->channels; VAR_4++)
  FUNC_0(VAR_2, VAR_0 + 0x80 + VAR_3->etram[VAR_4], 0, 0);
 FUNC_1(VAR_1);
 return 0;
}
