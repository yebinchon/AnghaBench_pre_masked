
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; struct gus_pcm_private* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {int mem_alloc; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;
struct snd_gf1_mem_block {int ptr; } ;
struct gus_pcm_private {int voices; TYPE_2__** pvoices; int gus; int memory; } ;
struct TYPE_4__ {struct gus_pcm_private* private_data; void* volume_change; void* handler_volume; void* handler_wave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 void* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 struct snd_gf1_mem_block* FUNC_4 (int *,int ,char*,int ,int,int,int *) ;
 int FUNC_5 (int *,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct snd_gus_card* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7)
{
 struct snd_gus_card *VAR_8 = FUNC_7(VAR_6);
 struct snd_pcm_runtime *VAR_9 = VAR_6->runtime;
 struct gus_pcm_private *VAR_10 = VAR_9->private_data;
 int VAR_11;

 if ((VAR_11 = FUNC_6(VAR_6, FUNC_0(VAR_7))) < 0)
  return VAR_11;
 if (VAR_11 > 0) {
  struct snd_gf1_mem_block *VAR_12;
  if (VAR_10->memory > 0) {
   FUNC_5(&VAR_8->gf1.mem_alloc, VAR_10->memory);
   VAR_10->memory = 0;
  }
  if ((VAR_12 = FUNC_4(&VAR_8->gf1.mem_alloc,
                                 VAR_1,
            "GF1 PCM",
                                 VAR_9->dma_bytes, 1, 32,
                                 ((void*)0))) == ((void*)0))
   return -VAR_0;
  VAR_10->memory = VAR_12->ptr;
 }
 VAR_10->voices = FUNC_1(VAR_7);
 if (VAR_10->pvoices[0] == ((void*)0)) {
  if ((VAR_10->pvoices[0] = FUNC_2(VAR_10->gus, VAR_2, 0, 0)) == ((void*)0))
   return -VAR_0;
  VAR_10->pvoices[0]->handler_wave = VAR_4;
  VAR_10->pvoices[0]->handler_volume = VAR_3;
  VAR_10->pvoices[0]->volume_change = VAR_5;
  VAR_10->pvoices[0]->private_data = VAR_10;
 }
 if (VAR_10->voices > 1 && VAR_10->pvoices[1] == ((void*)0)) {
  if ((VAR_10->pvoices[1] = FUNC_2(VAR_10->gus, VAR_2, 0, 0)) == ((void*)0))
   return -VAR_0;
  VAR_10->pvoices[1]->handler_wave = VAR_4;
  VAR_10->pvoices[1]->handler_volume = VAR_3;
  VAR_10->pvoices[1]->volume_change = VAR_5;
  VAR_10->pvoices[1]->private_data = VAR_10;
 } else if (VAR_10->voices == 1) {
  if (VAR_10->pvoices[1]) {
   FUNC_3(VAR_10->gus, VAR_10->pvoices[1]);
   VAR_10->pvoices[1] = ((void*)0);
  }
 }
 return 0;
}
