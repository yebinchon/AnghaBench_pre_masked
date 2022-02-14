
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_pcm_dma_private {int hw_chan; struct sprd_pcm_dma_data* data; struct snd_pcm_substream* substream; } ;
struct sprd_pcm_dma_data {int phys; scalar_t__ virt; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int periods_max; } ;
struct snd_pcm_runtime {struct sprd_pcm_dma_private* private_data; TYPE_1__ hw; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,struct sprd_pcm_dma_private*) ;
 struct sprd_pcm_dma_private* FUNC_1 (struct device*,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int,int *,int ) ;
 int FUNC_3 (struct device*,int,scalar_t__,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_7 (struct snd_pcm_substream*,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10)
{
 struct snd_pcm_runtime *VAR_11 = VAR_10->runtime;
 struct snd_soc_pcm_runtime *VAR_12 = VAR_10->private_data;
 struct snd_soc_component *VAR_13 =
  FUNC_6(VAR_12, VAR_0);
 struct device *VAR_14 = VAR_13->dev;
 struct sprd_pcm_dma_private *VAR_15;
 int VAR_16 = VAR_6;
 int VAR_17, VAR_18, VAR_19;

 FUNC_7(VAR_10, &VAR_9);

 VAR_18 = FUNC_5(VAR_11, 0,
      VAR_5,
      VAR_7);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_11, 0,
      VAR_3,
      VAR_7);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_11,
         VAR_4);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15 = FUNC_1(VAR_14, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_17 = VAR_11->hw.periods_max * VAR_8;

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  struct sprd_pcm_dma_data *VAR_20 = &VAR_15->data[VAR_19];

  VAR_20->virt = FUNC_2(VAR_14, VAR_17, &VAR_20->phys,
       VAR_2);
  if (!VAR_20->virt) {
   VAR_18 = -VAR_1;
   goto error;
  }
 }

 VAR_15->hw_chan = VAR_16;
 VAR_11->private_data = VAR_15;
 VAR_15->substream = VAR_10;

 return 0;

error:
 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  struct sprd_pcm_dma_data *VAR_21 = &VAR_15->data[VAR_19];

  if (VAR_21->virt)
   FUNC_3(VAR_14, VAR_17, VAR_21->virt, VAR_21->phys);
 }

 FUNC_0(VAR_14, VAR_15);
 return VAR_18;
}
