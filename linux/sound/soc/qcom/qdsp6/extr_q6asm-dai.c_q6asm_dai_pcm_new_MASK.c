
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int buffer_bytes_max; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,struct device*,int,int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_5)
{
 struct snd_pcm_substream *VAR_6, *VAR_7;
 struct snd_soc_component *VAR_8 = FUNC_3(VAR_5, VAR_0);
 struct snd_pcm *VAR_9 = VAR_5->pcm;
 struct device *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = VAR_8->dev;
 VAR_11 = VAR_4.buffer_bytes_max;
 VAR_6 = VAR_9->streams[VAR_3].substream;
 if (VAR_6) {
  VAR_12 = FUNC_1(VAR_1, VAR_10, VAR_11,
       &VAR_6->dma_buffer);
  if (VAR_12) {
   FUNC_0(VAR_10, "Cannot allocate buffer(s)\n");
   return VAR_12;
  }
 }

 VAR_7 = VAR_9->streams[VAR_2].substream;
 if (VAR_7) {
  VAR_12 = FUNC_1(VAR_1, VAR_10, VAR_11,
       &VAR_7->dma_buffer);
  if (VAR_12) {
   FUNC_0(VAR_10, "Cannot allocate buffer(s)\n");
   if (VAR_6)
    FUNC_2(&VAR_6->dma_buffer);
   return VAR_12;
  }
 }

 return 0;
}
