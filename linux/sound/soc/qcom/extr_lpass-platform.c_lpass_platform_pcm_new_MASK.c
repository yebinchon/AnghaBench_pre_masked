
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; struct snd_pcm* pcm; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_4__ {size_t buffer_bytes_max; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ,int ,size_t,int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_pcm *VAR_7 = VAR_6->pcm;
 struct snd_pcm_substream *VAR_8, *VAR_9;
 struct snd_soc_component *VAR_10 = FUNC_3(VAR_6, VAR_0);
 int VAR_11 = -VAR_1;
 size_t VAR_12 = VAR_5.buffer_bytes_max;

 VAR_8 = VAR_7->streams[VAR_4].substream;
 if (VAR_8) {
  VAR_11 = FUNC_1(VAR_2,
     VAR_10->dev,
     VAR_12, &VAR_8->dma_buffer);
  if (VAR_11) {
   FUNC_0(VAR_6->dev, "Cannot allocate buffer(s)\n");
   return VAR_11;
  }
 }

 VAR_9 = VAR_7->streams[VAR_3].substream;
 if (VAR_9) {
  VAR_11 = FUNC_1(VAR_2,
     VAR_10->dev,
     VAR_12, &VAR_9->dma_buffer);
  if (VAR_11) {
   FUNC_0(VAR_6->dev, "Cannot allocate buffer(s)\n");
   if (VAR_8)
    FUNC_2(&VAR_8->dma_buffer);
   return VAR_11;
  }

 }

 return 0;
}
