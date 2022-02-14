
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_4__* pcm; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_dmaengine_pcm_config {size_t prealloc_buffer_size; scalar_t__* chan_names; TYPE_1__* pcm_hardware; } ;
struct dmaengine_pcm {int flags; scalar_t__* chan; struct snd_dmaengine_pcm_config* config; } ;
struct device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* streams; } ;
struct TYPE_7__ {TYPE_2__* pcm; struct snd_pcm_substream* substream; } ;
struct TYPE_6__ {char* name; int id; } ;
struct TYPE_5__ {size_t buffer_bytes_max; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct dmaengine_pcm*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct device*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct snd_soc_pcm_runtime*,struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ,int ,size_t,size_t) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;
 struct dmaengine_pcm* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_pcm_runtime *VAR_8)
{
 struct snd_soc_component *VAR_9 =
  FUNC_6(VAR_8, VAR_5);
 struct dmaengine_pcm *VAR_10 = FUNC_7(VAR_9);
 const struct snd_dmaengine_pcm_config *VAR_11 = VAR_10->config;
 struct device *VAR_12 = VAR_9->dev;
 struct snd_pcm_substream *VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 unsigned int VAR_16;

 if (VAR_11 && VAR_11->prealloc_buffer_size) {
  VAR_14 = VAR_11->prealloc_buffer_size;
  VAR_15 = VAR_11->pcm_hardware->buffer_bytes_max;
 } else {
  VAR_14 = 512 * 1024;
  VAR_15 = VAR_1;
 }

 for (VAR_16 = VAR_4; VAR_16 <= VAR_3; VAR_16++) {
  VAR_13 = VAR_8->pcm->streams[VAR_16].substream;
  if (!VAR_13)
   continue;

  if (!VAR_10->chan[VAR_16] && VAR_11 && VAR_11->chan_names[VAR_16])
   VAR_10->chan[VAR_16] = FUNC_1(VAR_12,
    VAR_11->chan_names[VAR_16]);

  if (!VAR_10->chan[VAR_16] && (VAR_10->flags & VAR_6)) {
   VAR_10->chan[VAR_16] = FUNC_4(VAR_8,
    VAR_13);
  }

  if (!VAR_10->chan[VAR_16]) {
   FUNC_0(VAR_9->dev,
    "Missing dma channel for stream: %d\n", VAR_16);
   return -VAR_0;
  }

  FUNC_5(VAR_13,
    VAR_2,
    FUNC_2(VAR_10, VAR_13),
    VAR_14,
    VAR_15);

  if (!FUNC_3(VAR_12, VAR_10->chan[VAR_16]))
   VAR_10->flags |= VAR_7;

  if (VAR_8->pcm->streams[VAR_16].pcm->name[0] == '\0') {
   FUNC_8(VAR_8->pcm->streams[VAR_16].pcm->name,
        VAR_8->pcm->streams[VAR_16].pcm->id,
        sizeof(VAR_8->pcm->streams[VAR_16].pcm->name));
  }
 }

 return 0;
}
