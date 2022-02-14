
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct atmel_pcm_dma_params {TYPE_2__* ssc; TYPE_1__* mask; int name; } ;
struct TYPE_4__ {int regs; } ;
struct TYPE_3__ {int ssc_error; int ssc_disable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct atmel_pcm_dma_params* FUNC_3 (int ,struct snd_pcm_substream*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(u32 VAR_4,
 struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct atmel_pcm_dma_params *VAR_7;

 VAR_7 = FUNC_3(VAR_6->cpu_dai, VAR_5);

 if (VAR_4 & VAR_7->mask->ssc_error) {
  if (FUNC_1(VAR_5))
   FUNC_0("atmel-pcm: buffer %s on %s (SSC_SR=%#x)\n",
    VAR_5->stream == VAR_0
    ? "underrun" : "overrun", VAR_7->name,
    VAR_4);


  FUNC_5(VAR_7->ssc->regs, VAR_1, VAR_7->mask->ssc_disable);
  FUNC_2(VAR_5);


  FUNC_4(VAR_7->ssc->regs, VAR_2);
  FUNC_4(VAR_7->ssc->regs, VAR_3);
 }
}
