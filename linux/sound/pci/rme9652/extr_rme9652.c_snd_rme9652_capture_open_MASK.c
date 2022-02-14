
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rme9652 {int lock; struct snd_pcm_substream* capture_substream; int capture_pid; int * playback_substream; int capture_buffer; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; int hw; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_rme9652*,int,int ) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_rme9652*,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_rme9652* FUNC_6 (struct snd_pcm_substream*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_10)
{
 struct snd_rme9652 *VAR_11 = FUNC_6(VAR_10);
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;

 FUNC_7(&VAR_11->lock);

 FUNC_5(VAR_10);

 VAR_12->hw = VAR_6;
 VAR_12->dma_area = VAR_11->capture_buffer;
 VAR_12->dma_bytes = VAR_0;

 if (VAR_11->playback_substream == ((void*)0)) {
  FUNC_1(VAR_11);
  FUNC_0(VAR_11, -1, 0);
 }

 VAR_11->capture_pid = VAR_4->pid;
 VAR_11->capture_substream = VAR_10;

 FUNC_8(&VAR_11->lock);

 FUNC_3(VAR_12, 0, 32, 24);
 FUNC_2(VAR_12, 0, VAR_2, &VAR_5);
 FUNC_4(VAR_12, 0, VAR_1,
        VAR_7, VAR_11,
        VAR_1, -1);
 FUNC_4(VAR_12, 0, VAR_1,
        VAR_8, VAR_11,
        VAR_3, -1);
 FUNC_4(VAR_12, 0, VAR_3,
        VAR_9, VAR_11,
        VAR_1, -1);
 return 0;
}
