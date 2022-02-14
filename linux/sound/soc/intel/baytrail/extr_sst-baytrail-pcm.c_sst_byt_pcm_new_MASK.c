
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_pdata {int dma_dev; } ;
struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_4__ {size_t buffer_bytes_max; } ;
struct TYPE_3__ {scalar_t__ substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct sst_pdata* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,size_t,size_t) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_5)
{
 struct snd_pcm *VAR_6 = VAR_5->pcm;
 size_t VAR_7;
 struct snd_soc_component *VAR_8 = FUNC_2(VAR_5, VAR_0);
 struct sst_pdata *VAR_9 = FUNC_0(VAR_8->dev);

 if (VAR_6->streams[VAR_3].substream ||
     VAR_6->streams[VAR_2].substream) {
  VAR_7 = VAR_4.buffer_bytes_max;
  FUNC_1(VAR_6, VAR_1,
            VAR_9->dma_dev,
            VAR_7, VAR_7);
 }

 return 0;
}
