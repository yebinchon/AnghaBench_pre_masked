
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int period_bytes_max; int buffer_bytes_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; struct esschan* private_data; } ;
struct esschan {int* apu; int list; int mode; struct snd_pcm_substream* substream; scalar_t__ running; scalar_t__* apu_mode; } ;
struct es1968 {int substream_lock; int substream_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct es1968*) ;
 struct esschan* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct es1968*,int ) ;
 int FUNC_4 (struct es1968*,int) ;
 TYPE_1__ VAR_4 ;
 struct es1968* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct es1968 *VAR_6 = FUNC_5(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct esschan *VAR_8;
 int VAR_9;


 VAR_9 = FUNC_3(VAR_6, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  FUNC_4(VAR_6, VAR_9);
  return -VAR_0;
 }

 VAR_8->apu[0] = VAR_9;
 VAR_8->apu[1] = VAR_9 + 1;
 VAR_8->apu_mode[0] = 0;
 VAR_8->apu_mode[1] = 0;
 VAR_8->running = 0;
 VAR_8->substream = VAR_5;
 VAR_8->mode = VAR_2;

 VAR_7->private_data = VAR_8;
 VAR_7->hw = VAR_4;
 VAR_7->hw.buffer_bytes_max = VAR_7->hw.period_bytes_max =
  FUNC_0(VAR_6);

 FUNC_6(&VAR_6->substream_lock);
 FUNC_2(&VAR_8->list, &VAR_6->substream_list);
 FUNC_7(&VAR_6->substream_lock);

 return 0;
}
