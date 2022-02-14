
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sst_module {int dummy; } ;
struct sst_hsw {int dummy; } ;
struct sst_dsp {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; TYPE_2__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dma_buffer {int dummy; } ;
struct hsw_priv_data {TYPE_1__** dmab; struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int allocated; int * stream; int * volume; int runtime; } ;
typedef enum sst_hsw_stream_type { ____Placeholder_sst_hsw_stream_type } sst_hsw_stream_type ;
typedef enum sst_hsw_stream_path_id { ____Placeholder_sst_hsw_stream_path_id } sst_hsw_stream_path_id ;
struct TYPE_6__ {int dai_id; } ;
struct TYPE_5__ {size_t id; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct snd_pcm_substream*,struct hsw_priv_data*,struct snd_soc_pcm_runtime*,int ,int,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_21 ;
 TYPE_3__* VAR_22 ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 struct snd_dma_buffer* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct snd_pcm_substream*,int ) ;
 int FUNC_10 (struct snd_dma_buffer*,int ) ;
 struct hsw_priv_data* FUNC_11 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_12 (struct snd_soc_pcm_runtime*,int ) ;
 struct sst_dsp* FUNC_13 (struct sst_hsw*) ;
 int FUNC_14 (struct sst_hsw*,int *,int ,int,int,int ,int) ;
 int FUNC_15 (struct sst_hsw*,int *) ;
 int FUNC_16 (struct sst_hsw*,int *,int,int,int ) ;
 int FUNC_17 (struct sst_hsw*,int *) ;
 int * FUNC_18 (struct sst_hsw*,size_t,int ,struct hsw_pcm_data*) ;
 int FUNC_19 (struct sst_hsw*,int *,int) ;
 int FUNC_20 (struct sst_hsw*,int *) ;
 int FUNC_21 (struct sst_hsw*,int *,int) ;
 int FUNC_22 (struct sst_hsw*,int *,int) ;
 int FUNC_23 (struct sst_hsw*,int *,int,int ) ;
 int FUNC_24 (struct sst_hsw*,int *,int ) ;
 int FUNC_25 (struct sst_hsw*,int *,int) ;
 int FUNC_26 (struct sst_hsw*,int *,int ) ;
 int FUNC_27 (struct sst_hsw*,int *,int) ;
 int FUNC_28 (struct sst_hsw*,int *,int ,int,int ) ;
 struct sst_module* FUNC_29 (struct sst_dsp*,int) ;

__attribute__((used)) static int FUNC_30(struct snd_pcm_substream *VAR_23,
         struct snd_pcm_hw_params *VAR_24)
{
 struct snd_soc_pcm_runtime *VAR_25 = VAR_23->private_data;
 struct snd_pcm_runtime *VAR_26 = VAR_23->runtime;
 struct snd_soc_component *VAR_27 = FUNC_12(VAR_25, VAR_0);
 struct hsw_priv_data *VAR_28 = FUNC_11(VAR_27);
 struct hsw_pcm_data *VAR_29;
 struct sst_hsw *VAR_30 = VAR_28->hsw;
 struct sst_module *VAR_31;
 struct sst_dsp *VAR_32;
 struct snd_dma_buffer *VAR_33;
 enum sst_hsw_stream_type VAR_34;
 enum sst_hsw_stream_path_id VAR_35;
 u32 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 u8 VAR_41;
 int VAR_42, VAR_43;

 VAR_43 = VAR_22[VAR_25->cpu_dai->id].dai_id;
 VAR_29 = &VAR_28->pcm[VAR_43][VAR_23->stream];


 if (VAR_29->allocated) {
  VAR_42 = FUNC_20(VAR_30, VAR_29->stream);
  if (VAR_42 < 0)
   FUNC_2(VAR_25->dev, "error: reset stream failed %d\n",
    VAR_42);

  VAR_42 = FUNC_17(VAR_30, VAR_29->stream);
  if (VAR_42 < 0) {
   FUNC_2(VAR_25->dev, "error: free stream failed %d\n",
    VAR_42);
   return VAR_42;
  }
  VAR_29->allocated = 0;

  VAR_29->stream = FUNC_18(VAR_30, VAR_25->cpu_dai->id,
   VAR_21, VAR_29);
  if (VAR_29->stream == ((void*)0)) {
   FUNC_3(VAR_25->dev, "error: failed to create stream\n");
   return -VAR_1;
  }
 }


 if (VAR_23->stream == VAR_4)
  VAR_35 = VAR_16;
 else
  VAR_35 = VAR_15;


 switch (VAR_25->cpu_dai->id) {
 case 0:
  if (VAR_23->stream == VAR_4) {
   VAR_34 = VAR_20;
   VAR_40 = VAR_13;
  }
  else {
   VAR_34 = VAR_17;
   VAR_40 = VAR_11;
  }
  break;
 case 1:
 case 2:
  VAR_34 = VAR_19;
  VAR_40 = VAR_10;
  break;
 case 3:

  VAR_34 = VAR_18;
  VAR_35 = VAR_16;
  VAR_40 = VAR_12;
  break;
 default:
  FUNC_3(VAR_25->dev, "error: invalid DAI ID %d\n",
   VAR_25->cpu_dai->id);
  return -VAR_1;
 }

 VAR_42 = FUNC_16(VAR_30, VAR_29->stream,
  VAR_35, VAR_34, VAR_14);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: failed to set format %d\n", VAR_42);
  return VAR_42;
 }

 VAR_36 = FUNC_7(VAR_24);
 VAR_42 = FUNC_25(VAR_30, VAR_29->stream, VAR_36);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: could not set rate %d\n", VAR_36);
  return VAR_42;
 }

 switch (FUNC_6(VAR_24)) {
 case 131:
  VAR_37 = VAR_6;
  FUNC_27(VAR_30, VAR_29->stream, 16);
  break;
 case 130:
  VAR_37 = VAR_7;
  FUNC_27(VAR_30, VAR_29->stream, 24);
  break;
 case 128:
  VAR_37 = VAR_8;
  FUNC_27(VAR_30, VAR_29->stream, 8);
  break;
 case 129:
  VAR_37 = VAR_7;
  FUNC_27(VAR_30, VAR_29->stream, 32);
  break;
 default:
  FUNC_3(VAR_25->dev, "error: invalid format %d\n",
   FUNC_6(VAR_24));
  return -VAR_1;
 }

 VAR_42 = FUNC_21(VAR_30, VAR_29->stream, VAR_37);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: could not set bits %d\n", VAR_37);
  return VAR_42;
 }

 VAR_41 = FUNC_5(VAR_24);
 VAR_38 = FUNC_1(VAR_5);
 FUNC_23(VAR_30, VAR_29->stream,
   VAR_38, VAR_5);

 VAR_42 = FUNC_22(VAR_30, VAR_29->stream, VAR_41);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: could not set channels %d\n",
   VAR_41);
  return VAR_42;
 }

 VAR_42 = FUNC_9(VAR_23, FUNC_4(VAR_24));
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: could not allocate %d bytes for PCM %d\n",
   FUNC_4(VAR_24), VAR_42);
  return VAR_42;
 }

 VAR_33 = FUNC_8(VAR_23);

 VAR_42 = FUNC_0(VAR_23, VAR_28, VAR_25, VAR_26->dma_area,
  VAR_26->dma_bytes, VAR_25->cpu_dai->id);
 if (VAR_42 < 0)
  return VAR_42;

 FUNC_26(VAR_30, VAR_29->stream,
  VAR_9);

 if (VAR_26->dma_bytes % VAR_3)
  VAR_39 = (VAR_26->dma_bytes / VAR_3) + 1;
 else
  VAR_39 = VAR_26->dma_bytes / VAR_3;

 VAR_42 = FUNC_14(VAR_30, VAR_29->stream,
  VAR_28->dmab[VAR_25->cpu_dai->id][VAR_23->stream].addr,
  VAR_39, VAR_26->dma_bytes, 0,
  FUNC_10(VAR_33, 0) >> VAR_2);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: failed to set DMA buffer %d\n", VAR_42);
  return VAR_42;
 }

 VAR_32 = FUNC_13(VAR_30);

 VAR_31 = FUNC_29(VAR_32, VAR_40);
 if (VAR_31 == ((void*)0)) {
  FUNC_3(VAR_25->dev, "error: failed to get module config\n");
  return -VAR_1;
 }

 FUNC_24(VAR_30, VAR_29->stream,
  VAR_29->runtime);

 VAR_42 = FUNC_15(VAR_30, VAR_29->stream);
 if (VAR_42 < 0) {
  FUNC_3(VAR_25->dev, "error: failed to commit stream %d\n", VAR_42);
  return VAR_42;
 }

 if (!VAR_29->allocated) {

  FUNC_28(VAR_30, VAR_29->stream, 0,
    0, VAR_29->volume[0]);
  FUNC_28(VAR_30, VAR_29->stream, 0,
    1, VAR_29->volume[1]);
  VAR_29->allocated = 1;
 }

 VAR_42 = FUNC_19(VAR_30, VAR_29->stream, 1);
 if (VAR_42 < 0)
  FUNC_3(VAR_25->dev, "error: failed to pause %d\n", VAR_42);

 return 0;
}
