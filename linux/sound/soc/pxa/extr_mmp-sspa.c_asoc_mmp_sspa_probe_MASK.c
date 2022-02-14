
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sspa_priv {unsigned int dai_fmt; void* audio_clk; void* sysclk; TYPE_1__* sspa; int * dma_params; } ;
struct ssp_device {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {void* clk; void* mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int,int,int ) ;
 void* FUNC_7 (int *,int,int ) ;
 void* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct platform_device*,struct sspa_priv*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct sspa_priv *VAR_5;

 VAR_5 = FUNC_7(&VAR_4->dev,
    sizeof(struct sspa_priv), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->sspa = FUNC_7(&VAR_4->dev,
    sizeof(struct ssp_device), VAR_1);
 if (VAR_5->sspa == ((void*)0))
  return -VAR_0;

 VAR_5->dma_params = FUNC_6(&VAR_4->dev,
   2, sizeof(struct snd_dmaengine_dai_dma_data),
   VAR_1);
 if (VAR_5->dma_params == ((void*)0))
  return -VAR_0;

 VAR_5->sspa->mmio_base = FUNC_8(VAR_4, 0);
 if (FUNC_0(VAR_5->sspa->mmio_base))
  return FUNC_1(VAR_5->sspa->mmio_base);

 VAR_5->sspa->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->sspa->clk))
  return FUNC_1(VAR_5->sspa->clk);

 VAR_5->audio_clk = FUNC_3(((void*)0), "mmp-audio");
 if (FUNC_0(VAR_5->audio_clk))
  return FUNC_1(VAR_5->audio_clk);

 VAR_5->sysclk = FUNC_3(((void*)0), "mmp-sysclk");
 if (FUNC_0(VAR_5->sysclk)) {
  FUNC_4(VAR_5->audio_clk);
  return FUNC_1(VAR_5->sysclk);
 }
 FUNC_2(VAR_5->audio_clk);
 VAR_5->dai_fmt = (unsigned int) -1;
 FUNC_10(VAR_4, VAR_5);

 return FUNC_9(&VAR_4->dev, &VAR_2,
            &VAR_3, 1);
}
