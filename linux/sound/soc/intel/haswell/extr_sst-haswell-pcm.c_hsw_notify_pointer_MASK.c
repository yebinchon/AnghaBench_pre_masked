
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_hsw_stream {int dummy; } ;
struct sst_hsw {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned char* dma_area; int buffer_size; int format; TYPE_1__* control; int dma_bytes; } ;
struct hsw_priv_data {struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int stream; struct snd_pcm_substream* substream; } ;
typedef int ssize_t ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {int appl_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* FUNC_0 (unsigned char*,struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int) ;
 int FUNC_6 (int ,unsigned char*,int ) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct hsw_priv_data* FUNC_8 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_9 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_10 (struct sst_hsw*,int ) ;
 scalar_t__ FUNC_11 (struct sst_hsw*,struct sst_hsw_stream*) ;
 int FUNC_12 (struct sst_hsw*,struct sst_hsw_stream*) ;
 int FUNC_13 (struct sst_hsw*,struct sst_hsw_stream*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_14(struct sst_hsw_stream *VAR_2, void *VAR_3)
{
 struct hsw_pcm_data *VAR_4 = VAR_3;
 struct snd_pcm_substream *VAR_5 = VAR_4->substream;
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_component *VAR_8 = FUNC_9(VAR_7, VAR_0);
 struct hsw_priv_data *VAR_9 = FUNC_8(VAR_8);
 struct sst_hsw *VAR_10 = VAR_9->hsw;
 u32 VAR_11;
 snd_pcm_uframes_t VAR_12 = FUNC_2(VAR_6,
   FUNC_10(VAR_10, VAR_4->stream));
 unsigned char *VAR_13 = VAR_6->dma_area;
 snd_pcm_uframes_t VAR_14 =
  FUNC_2(VAR_6, VAR_6->dma_bytes);
 snd_pcm_uframes_t VAR_15;
 ssize_t VAR_16;

 VAR_11 = FUNC_5(VAR_6,
  (VAR_6->control->appl_ptr % VAR_6->buffer_size));

 FUNC_4(VAR_7->dev, "PCM: App pointer %d bytes\n", VAR_11);




 if (VAR_13 == ((void*)0) || VAR_14 <= 0
  || (VAR_5->stream == VAR_1)
  || !FUNC_12(VAR_10, VAR_2)) {
  FUNC_7(VAR_5);
  return VAR_11;
 }

 VAR_15 = FUNC_11(VAR_10, VAR_2);
 if (VAR_12 > VAR_15) {
  if (VAR_12 < VAR_14) {
   VAR_16 = FUNC_1(VAR_6, VAR_12 - VAR_15);
   FUNC_6(VAR_6->format,
    FUNC_0(VAR_13,
     VAR_6, VAR_15),
    VAR_16);
  } else
   FUNC_3(VAR_7->dev, "PCM: position is wrong\n");
 } else {
  if (VAR_15 < VAR_14) {
   VAR_16 = FUNC_1(VAR_6,
    VAR_14 - VAR_15);
   FUNC_6(VAR_6->format,
    FUNC_0(VAR_13,
     VAR_6, VAR_15),
    VAR_16);
  } else
   FUNC_3(VAR_7->dev, "PCM: dma_bytes is wrong\n");
  if (VAR_12 < VAR_14) {
   VAR_16 = FUNC_1(VAR_6, VAR_12);
   FUNC_6(VAR_6->format,
    VAR_13, VAR_16);
  } else
   FUNC_3(VAR_7->dev, "PCM: position is wrong\n");
 }
 FUNC_13(VAR_10, VAR_2, VAR_12);


 FUNC_7(VAR_5);
 return VAR_11;
}
