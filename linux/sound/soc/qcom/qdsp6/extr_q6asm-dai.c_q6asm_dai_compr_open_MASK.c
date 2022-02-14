
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_1__* driver; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct TYPE_5__ {int addr; } ;
struct q6asm_dai_rtd {int phys; int audio_client; int lock; TYPE_2__ dma_buffer; struct snd_compr_stream* cstream; } ;
struct q6asm_dai_data {int sid; } ;
struct device {int dummy; } ;
typedef int q6asm_cb ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct q6asm_dai_rtd*) ;
 struct q6asm_dai_rtd* FUNC_4 (int,int ) ;
 int FUNC_5 (struct device*,int ,struct q6asm_dai_rtd*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_compr_stream*,TYPE_2__*) ;
 int FUNC_8 (int ,struct device*,int,TYPE_2__*) ;
 struct q6asm_dai_data* FUNC_9 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_10 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct snd_compr_stream *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_9->private_data;
 struct snd_soc_component *VAR_11 = FUNC_10(VAR_10, VAR_2);
 struct snd_compr_runtime *VAR_12 = VAR_9->runtime;
 struct snd_soc_dai *VAR_13 = VAR_10->cpu_dai;
 struct q6asm_dai_data *VAR_14;
 struct device *VAR_15 = VAR_11->dev;
 struct q6asm_dai_rtd *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_17 = VAR_13->driver->id;
 VAR_14 = FUNC_9(VAR_11);
 if (!VAR_14) {
  FUNC_2(VAR_15, "Drv data not found ..\n");
  return -VAR_3;
 }

 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_16->cstream = VAR_9;
 VAR_16->audio_client = FUNC_5(VAR_15,
     (q6asm_cb)VAR_8,
     VAR_16, VAR_17, VAR_6);
 if (FUNC_0(VAR_16->audio_client)) {
  FUNC_2(VAR_15, "Could not allocate memory\n");
  VAR_19 = FUNC_1(VAR_16->audio_client);
  goto free_prtd;
 }

 VAR_18 = VAR_0 *
   VAR_1;
 VAR_19 = FUNC_8(VAR_7, VAR_15, VAR_18,
      &VAR_16->dma_buffer);
 if (VAR_19) {
  FUNC_2(VAR_15, "Cannot allocate buffer(s)\n");
  goto free_client;
 }

 if (VAR_14->sid < 0)
  VAR_16->phys = VAR_16->dma_buffer.addr;
 else
  VAR_16->phys = VAR_16->dma_buffer.addr | (VAR_14->sid << 32);

 FUNC_7(VAR_9, &VAR_16->dma_buffer);
 FUNC_11(&VAR_16->lock);
 VAR_12->private_data = VAR_16;

 return 0;

free_client:
 FUNC_6(VAR_16->audio_client);
free_prtd:
 FUNC_3(VAR_16);

 return VAR_19;
}
