
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct txx9aclc_soc_device {TYPE_2__* dmadata; } ;
struct snd_soc_pcm_runtime {struct snd_pcm* pcm; struct snd_soc_dai* cpu_dai; TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm {int dummy; } ;
struct snd_card {int dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int * dma_chan; struct resource* dma_res; int stream; } ;
struct TYPE_3__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 struct txx9aclc_soc_device* FUNC_3 (struct snd_soc_dai*) ;
 struct snd_soc_component* FUNC_4 (struct snd_soc_pcm_runtime*,int ) ;
 struct platform_device* FUNC_5 (int ) ;
 int FUNC_6 (struct txx9aclc_soc_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_card *VAR_7 = VAR_6->card->snd_card;
 struct snd_soc_dai *VAR_8 = VAR_6->cpu_dai;
 struct snd_pcm *VAR_9 = VAR_6->pcm;
 struct snd_soc_component *VAR_10 = FUNC_4(VAR_6, VAR_0);
 struct platform_device *VAR_11 = FUNC_5(VAR_10->dev);
 struct txx9aclc_soc_device *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 int VAR_15;


 VAR_12 = FUNC_3(VAR_8);

 VAR_12->dmadata[0].stream = VAR_5;
 VAR_12->dmadata[1].stream = VAR_4;
 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  VAR_13 = FUNC_1(VAR_11, VAR_2, VAR_14);
  if (!VAR_13) {
   VAR_15 = -VAR_1;
   goto exit;
  }
  VAR_12->dmadata[VAR_14].dma_res = VAR_13;
  VAR_15 = FUNC_6(VAR_12, &VAR_12->dmadata[VAR_14]);
  if (VAR_15)
   goto exit;
 }

 FUNC_2(VAR_9, VAR_3,
  VAR_7->dev, 64 * 1024, 4 * 1024 * 1024);
 return 0;

exit:
 for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
  if (VAR_12->dmadata[VAR_14].dma_chan)
   FUNC_0(VAR_12->dmadata[VAR_14].dma_chan);
  VAR_12->dmadata[VAR_14].dma_chan = ((void*)0);
 }
 return VAR_15;
}
