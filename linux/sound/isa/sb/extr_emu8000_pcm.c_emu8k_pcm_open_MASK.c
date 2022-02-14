
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int buffer_bytes_max; int period_bytes_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; struct snd_emu8k_pcm* private_data; } ;
struct snd_emu8k_pcm {int timer; int timer_lock; struct snd_pcm_substream* substream; struct snd_emu8000* emu; } ;
struct snd_emu8000 {int mem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 struct snd_emu8k_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int ) ;
 struct snd_emu8000* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_8)
{
 struct snd_emu8000 *VAR_9 = FUNC_2(VAR_8);
 struct snd_emu8k_pcm *VAR_10;
 struct snd_pcm_runtime *VAR_11 = VAR_8->runtime;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (! VAR_10)
  return -VAR_0;

 VAR_10->emu = VAR_9;
 VAR_10->substream = VAR_8;
 VAR_11->private_data = VAR_10;

 FUNC_3(&VAR_10->timer_lock);
 FUNC_4(&VAR_10->timer, VAR_7, 0);

 VAR_11->hw = VAR_6;
 VAR_11->hw.buffer_bytes_max = VAR_9->mem_size - VAR_3 * 3;
 VAR_11->hw.period_bytes_max = VAR_11->hw.buffer_bytes_max / 2;


 FUNC_1(VAR_11, VAR_4,
         (1000000 + VAR_2 - 1) / VAR_2, VAR_5);

 return 0;
}
