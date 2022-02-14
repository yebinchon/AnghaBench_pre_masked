
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int capture_idx_reg; scalar_t__ first_ptr; int running; } ;
struct snd_emu10k1 {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ) ;
 struct snd_emu10k1* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_emu10k1_pcm *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;

 if (!VAR_3->running)
  return 0;
 if (VAR_3->first_ptr) {
  FUNC_3(50);
  VAR_3->first_ptr = 0;
 }
 VAR_4 = FUNC_1(VAR_1, VAR_3->capture_idx_reg, 0) & 0x0000ffff;
 return FUNC_0(VAR_2, VAR_4);
}
