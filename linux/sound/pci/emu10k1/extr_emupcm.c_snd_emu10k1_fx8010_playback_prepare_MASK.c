
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int buffer_size; unsigned int period_size; } ;
struct TYPE_4__ {int hw_buffer_size; int sw_buffer_size; } ;
struct snd_emu10k1_fx8010_pcm {int buffer_size; unsigned int channels; scalar_t__* etram; scalar_t__ gpr_tmpcount; scalar_t__ gpr_count; scalar_t__ gpr_ptr; scalar_t__ gpr_size; scalar_t__ gpr_trigger; scalar_t__ gpr_running; scalar_t__ tram_shift; int tram_pos; TYPE_2__ pcm_rec; } ;
struct TYPE_3__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {scalar_t__ gpr_base; TYPE_1__ fx8010; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct snd_emu10k1*,scalar_t__,int ,unsigned int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_4(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct snd_emu10k1_fx8010_pcm *VAR_6 = &VAR_4->fx8010.pcm[VAR_3->number];
 unsigned int VAR_7;







 FUNC_1(&VAR_6->pcm_rec, 0, sizeof(VAR_6->pcm_rec));
 VAR_6->pcm_rec.hw_buffer_size = VAR_6->buffer_size * 2;
 VAR_6->pcm_rec.sw_buffer_size = FUNC_3(VAR_3);
 VAR_6->tram_pos = FUNC_0(VAR_6->buffer_size);
 VAR_6->tram_shift = 0;
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_running, 0, 0);
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_trigger, 0, 0);
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_size, 0, VAR_5->buffer_size);
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_ptr, 0, 0);
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_count, 0, VAR_5->period_size);
 FUNC_2(VAR_4, VAR_4->gpr_base + VAR_6->gpr_tmpcount, 0, VAR_5->period_size);
 for (VAR_7 = 0; VAR_7 < VAR_6->channels; VAR_7++)
  FUNC_2(VAR_4, VAR_0 + 0x80 + VAR_6->etram[VAR_7], 0, (VAR_2|VAR_1) + VAR_7 * (VAR_5->buffer_size / VAR_6->channels));
 return 0;
}
