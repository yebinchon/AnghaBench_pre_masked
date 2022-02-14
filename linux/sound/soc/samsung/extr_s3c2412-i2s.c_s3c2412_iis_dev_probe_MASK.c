
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3c_audio_pdata {int dma_filter; int dma_capture; int dma_playback; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int regs; } ;
struct TYPE_5__ {int filter_data; scalar_t__ addr; } ;
struct TYPE_4__ {int filter_data; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct s3c_audio_pdata* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct resource*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_7 (int *,int,int *,int *) ;
 int FUNC_8 (int *,int ,char*,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 int VAR_10 = 0;
 struct resource *VAR_11;
 struct s3c_audio_pdata *VAR_12 = FUNC_3(&VAR_9->dev);

 if (!VAR_12) {
  FUNC_2(&VAR_9->dev, "missing platform data");
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_9, VAR_1, 0);
 VAR_4.regs = FUNC_4(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_4.regs))
  return FUNC_1(VAR_4.regs);

 VAR_8.addr = VAR_11->start + VAR_3;
 VAR_8.filter_data = VAR_12->dma_playback;
 VAR_7.addr = VAR_11->start + VAR_2;
 VAR_7.filter_data = VAR_12->dma_capture;

 VAR_10 = FUNC_8(&VAR_9->dev,
       VAR_12->dma_filter,
       "tx", "rx", ((void*)0));
 if (VAR_10) {
  FUNC_6("failed to register the DMA: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(&VAR_9->dev, -1,
        &VAR_5,
        &VAR_6);
 if (VAR_10)
  FUNC_6("failed to register the dai\n");

 return VAR_10;
}
