
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sst_byt_priv_data {struct sst_byt* byt; struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int stream; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct snd_pcm_substream {size_t stream; TYPE_1__ dma_buffer; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,struct sst_byt_pcm_data*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;
 struct sst_byt_priv_data* FUNC_8 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_9 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_10 (struct sst_byt*,int ,int ,int ) ;
 int FUNC_11 (struct sst_byt*,int ) ;
 int FUNC_12 (struct sst_byt*,int ,int) ;
 int FUNC_13 (struct sst_byt*,int ,scalar_t__) ;
 int FUNC_14 (struct sst_byt*,int ,int) ;
 int FUNC_15 (struct sst_byt*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_component *VAR_5 = FUNC_9(VAR_4, VAR_0);
 struct sst_byt_priv_data *VAR_6 = FUNC_8(VAR_5);
 struct sst_byt_pcm_data *VAR_7 = &VAR_6->pcm[VAR_2->stream];
 struct sst_byt *VAR_8 = VAR_6->byt;
 u32 VAR_9, VAR_10;
 u8 VAR_11;
 int VAR_12, VAR_13 = (VAR_2->stream == VAR_1);

 FUNC_0(VAR_4->dev, "PCM: hw_params, pcm_data %p\n", VAR_7);

 VAR_12 = FUNC_15(VAR_8, VAR_7->stream,
      1, 1, !VAR_13);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "failed to set stream format %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9 = FUNC_5(VAR_3);
 VAR_12 = FUNC_14(VAR_8, VAR_7->stream, VAR_9);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "could not set rate %d\n", VAR_9);
  return VAR_12;
 }

 VAR_10 = FUNC_6(FUNC_4(VAR_3));
 VAR_12 = FUNC_12(VAR_8, VAR_7->stream, VAR_10);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "could not set formats %d\n",
   FUNC_5(VAR_3));
  return VAR_12;
 }

 VAR_11 = (u8)(FUNC_3(VAR_3) & 0xF);
 VAR_12 = FUNC_13(VAR_8, VAR_7->stream, VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "could not set channels %d\n",
   FUNC_5(VAR_3));
  return VAR_12;
 }

 FUNC_7(VAR_2, FUNC_2(VAR_3));

 VAR_12 = FUNC_10(VAR_8, VAR_7->stream,
        VAR_2->dma_buffer.addr,
        FUNC_2(VAR_3));
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "PCM: failed to set DMA buffer %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_11(VAR_8, VAR_7->stream);
 if (VAR_12 < 0) {
  FUNC_1(VAR_4->dev, "PCM: failed stream commit %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
