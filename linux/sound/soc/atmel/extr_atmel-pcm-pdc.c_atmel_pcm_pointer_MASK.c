
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct atmel_runtime_data* private_data; } ;
struct atmel_runtime_data {scalar_t__ dma_buffer; struct atmel_pcm_dma_params* params; } ;
struct atmel_pcm_dma_params {TYPE_1__* pdc; TYPE_2__* ssc; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int regs; } ;
struct TYPE_3__ {int xpr; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(
 struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct atmel_runtime_data *VAR_2 = VAR_1->private_data;
 struct atmel_pcm_dma_params *VAR_3 = VAR_2->params;
 dma_addr_t VAR_4;
 snd_pcm_uframes_t VAR_5;

 VAR_4 = (dma_addr_t) FUNC_1(VAR_3->ssc->regs, VAR_3->pdc->xpr);
 VAR_5 = FUNC_0(VAR_1, VAR_4 - VAR_2->dma_buffer);

 if (VAR_5 == VAR_1->buffer_size)
  VAR_5 = 0;

 return VAR_5;
}
