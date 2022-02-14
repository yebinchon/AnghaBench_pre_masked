
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; struct esschan* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct esschan {TYPE_3__* memory; } ;
struct es1968 {TYPE_1__* card; } ;
struct TYPE_6__ {int bytes; } ;
struct TYPE_7__ {TYPE_2__ buf; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct es1968*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (struct es1968*,int) ;
 int FUNC_4 (struct snd_pcm_substream*,TYPE_2__*) ;
 struct es1968* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2)
{
 struct es1968 *VAR_3 = FUNC_5(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct esschan *VAR_5 = VAR_4->private_data;
 int VAR_6 = FUNC_1(VAR_2);

 if (VAR_5->memory) {
  if (VAR_5->memory->buf.bytes >= VAR_6) {
   VAR_4->dma_bytes = VAR_6;
   return 0;
  }
  FUNC_2(VAR_3, VAR_5->memory);
 }
 VAR_5->memory = FUNC_3(VAR_3, VAR_6);
 if (VAR_5->memory == ((void*)0)) {
  FUNC_0(VAR_3->card->dev,
   "cannot allocate dma buffer: size = %d\n", VAR_6);
  return -VAR_0;
 }
 FUNC_4(VAR_1, &VAR_5->memory->buf);
 return 1;
}
