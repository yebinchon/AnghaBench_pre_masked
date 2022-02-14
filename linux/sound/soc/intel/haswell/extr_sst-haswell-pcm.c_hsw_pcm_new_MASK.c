
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_pdata {struct device* dma_dev; } ;
struct snd_soc_pcm_runtime {TYPE_3__* cpu_dai; struct snd_pcm* pcm; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct hsw_priv_data {TYPE_2__** pcm; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int buffer_bytes_max; } ;
struct TYPE_7__ {size_t id; } ;
struct TYPE_6__ {struct snd_pcm* hsw_pcm; } ;
struct TYPE_5__ {scalar_t__ substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct hsw_priv_data* FUNC_0 (int ) ;
 struct sst_pdata* FUNC_1 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (struct snd_pcm*,int ,struct device*,int ,int ) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_5)
{
 struct snd_pcm *VAR_6 = VAR_5->pcm;
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_5, VAR_0);
 struct sst_pdata *VAR_8 = FUNC_1(VAR_7->dev);
 struct hsw_priv_data *VAR_9 = FUNC_0(VAR_7->dev);
 struct device *VAR_10 = VAR_8->dma_dev;

 if (VAR_6->streams[VAR_3].substream ||
   VAR_6->streams[VAR_2].substream) {
  FUNC_2(VAR_6,
   VAR_1,
   VAR_10,
   VAR_4.buffer_bytes_max,
   VAR_4.buffer_bytes_max);
 }
 if (VAR_6->streams[VAR_3].substream)
  VAR_9->pcm[VAR_5->cpu_dai->id][VAR_3].hsw_pcm = VAR_6;
 if (VAR_6->streams[VAR_2].substream)
  VAR_9->pcm[VAR_5->cpu_dai->id][VAR_2].hsw_pcm = VAR_6;

 return 0;
}
