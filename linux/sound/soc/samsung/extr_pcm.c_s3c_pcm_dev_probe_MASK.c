
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct s3c_pcm_info {int sclk_per_fs; void* cclk; void* pclk; TYPE_2__* dma_playback; TYPE_3__* dma_capture; void* regs; int lock; TYPE_1__* dev; } ;
struct s3c_audio_pdata {int * dma_filter; int dma_playback; int dma_capture; scalar_t__ (* cfg_gpio ) (struct platform_device*) ;} ;
struct resource {scalar_t__ start; } ;
struct TYPE_11__ {struct s3c_audio_pdata* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
typedef int * dma_filter_fn ;
struct TYPE_13__ {int filter_data; scalar_t__ addr; } ;
struct TYPE_12__ {int filter_data; scalar_t__ addr; } ;


 int FUNC_0 (struct s3c_pcm_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,struct s3c_pcm_info*) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,struct resource*) ;
 int FUNC_9 (TYPE_1__*,int *,int *,int) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 struct s3c_pcm_info* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_13 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct platform_device*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct s3c_pcm_info *VAR_10;
 struct resource *VAR_11;
 struct s3c_audio_pdata *VAR_12;
 dma_filter_fn VAR_13;
 int VAR_14;


 if ((VAR_9->id < 0) || VAR_9->id >= FUNC_0(VAR_4)) {
  FUNC_5(&VAR_9->dev, "id %d out of range\n", VAR_9->id);
  return -VAR_0;
 }

 VAR_12 = VAR_9->dev.platform_data;

 if (VAR_12 && VAR_12->cfg_gpio && VAR_12->cfg_gpio(VAR_9)) {
  FUNC_5(&VAR_9->dev, "Unable to configure gpio\n");
  return -VAR_0;
 }

 VAR_10 = &VAR_4[VAR_9->id];
 VAR_10->dev = &VAR_9->dev;

 FUNC_14(&VAR_10->lock);


 VAR_10->sclk_per_fs = 128;

 VAR_11 = FUNC_10(VAR_9, VAR_1, 0);
 VAR_10->regs = FUNC_8(&VAR_9->dev, VAR_11);
 if (FUNC_1(VAR_10->regs))
  return FUNC_2(VAR_10->regs);

 VAR_10->cclk = FUNC_7(&VAR_9->dev, "audio-bus");
 if (FUNC_1(VAR_10->cclk)) {
  FUNC_5(&VAR_9->dev, "failed to get audio-bus clock\n");
  return FUNC_2(VAR_10->cclk);
 }
 VAR_14 = FUNC_4(VAR_10->cclk);
 if (VAR_14)
  return VAR_14;


 FUNC_6(&VAR_9->dev, VAR_10);

 VAR_10->pclk = FUNC_7(&VAR_9->dev, "pcm");
 if (FUNC_1(VAR_10->pclk)) {
  FUNC_5(&VAR_9->dev, "failed to get pcm clock\n");
  VAR_14 = FUNC_2(VAR_10->pclk);
  goto err_dis_cclk;
 }
 VAR_14 = FUNC_4(VAR_10->pclk);
 if (VAR_14)
  goto err_dis_cclk;

 VAR_7[VAR_9->id].addr = VAR_11->start + VAR_2;
 VAR_8[VAR_9->id].addr = VAR_11->start + VAR_3;

 VAR_13 = ((void*)0);
 if (VAR_12) {
  VAR_7[VAR_9->id].filter_data = VAR_12->dma_capture;
  VAR_8[VAR_9->id].filter_data = VAR_12->dma_playback;
  VAR_13 = VAR_12->dma_filter;
 }

 VAR_10->dma_capture = &VAR_7[VAR_9->id];
 VAR_10->dma_playback = &VAR_8[VAR_9->id];

 VAR_14 = FUNC_13(&VAR_9->dev, VAR_13,
       ((void*)0), ((void*)0), ((void*)0));
 if (VAR_14) {
  FUNC_5(&VAR_9->dev, "failed to get register DMA: %d\n", VAR_14);
  goto err_dis_pclk;
 }

 FUNC_12(&VAR_9->dev);

 VAR_14 = FUNC_9(&VAR_9->dev, &VAR_5,
      &VAR_6[VAR_9->id], 1);
 if (VAR_14 != 0) {
  FUNC_5(&VAR_9->dev, "failed to get register DAI: %d\n", VAR_14);
  goto err_dis_pm;
 }

 return 0;

err_dis_pm:
 FUNC_11(&VAR_9->dev);
err_dis_pclk:
 FUNC_3(VAR_10->pclk);
err_dis_cclk:
 FUNC_3(VAR_10->cclk);
 return VAR_14;
}
