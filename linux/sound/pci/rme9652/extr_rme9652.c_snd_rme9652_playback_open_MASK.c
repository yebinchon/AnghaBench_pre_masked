
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rme9652 {TYPE_2__* spdif_ctl; int card; int creg_spdif; int creg_spdif_stream; int lock; struct snd_pcm_substream* playback_substream; int playback_pid; int * capture_substream; int playback_buffer; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; int hw; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int id; TYPE_1__* vd; } ;
struct TYPE_4__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_rme9652*,int,int ) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_rme9652*,int ,int) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct snd_rme9652* FUNC_7 (struct snd_pcm_substream*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_13)
{
 struct snd_rme9652 *VAR_14 = FUNC_7(VAR_13);
 struct snd_pcm_runtime *VAR_15 = VAR_13->runtime;

 FUNC_8(&VAR_14->lock);

 FUNC_6(VAR_13);

        VAR_15->hw = VAR_12;
 VAR_15->dma_area = VAR_14->playback_buffer;
 VAR_15->dma_bytes = VAR_0;

 if (VAR_14->capture_substream == ((void*)0)) {
  FUNC_1(VAR_14);
  FUNC_0(VAR_14, -1, 0);
 }

 VAR_14->playback_pid = VAR_7->pid;
 VAR_14->playback_substream = VAR_13;

 FUNC_9(&VAR_14->lock);

 FUNC_4(VAR_15, 0, 32, 24);
 FUNC_3(VAR_15, 0, VAR_5, &VAR_8);
 FUNC_5(VAR_15, 0, VAR_4,
        VAR_9, VAR_14,
        VAR_4, -1);
 FUNC_5(VAR_15, 0, VAR_4,
        VAR_10, VAR_14,
        VAR_6, -1);
 FUNC_5(VAR_15, 0, VAR_6,
        VAR_11, VAR_14,
        VAR_4, -1);

 VAR_14->creg_spdif_stream = VAR_14->creg_spdif;
 VAR_14->spdif_ctl->vd[0].access &= ~VAR_1;
 FUNC_2(VAR_14->card, VAR_3 |
         VAR_2, &VAR_14->spdif_ctl->id);
 return 0;
}
