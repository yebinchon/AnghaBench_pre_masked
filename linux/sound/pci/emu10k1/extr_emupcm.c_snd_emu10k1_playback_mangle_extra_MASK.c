
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_runtime {unsigned int hw_ptr_interrupt; unsigned int period_size; TYPE_1__* status; } ;
struct snd_emu10k1_pcm {unsigned int ccca_start_addr; TYPE_2__* extra; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {unsigned int hw_ptr; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_emu10k1 *VAR_1,
  struct snd_emu10k1_pcm *VAR_2,
  struct snd_pcm_substream *VAR_3,
  struct snd_pcm_runtime *VAR_4)
{
 unsigned int VAR_5, VAR_6;



 VAR_6 = VAR_4->status->hw_ptr - VAR_4->hw_ptr_interrupt;
 VAR_6 %= VAR_4->period_size;
 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_2->extra->number);
 VAR_5 &= ~0x00ffffff;
 VAR_5 |= VAR_2->ccca_start_addr + VAR_6;
 FUNC_1(VAR_1, VAR_0, VAR_2->extra->number, VAR_5);
}
