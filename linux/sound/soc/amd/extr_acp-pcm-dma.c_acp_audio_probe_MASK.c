
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_10__ {int * platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct audio_drv_data {int asic_type; int acp_mmio; int * capture_i2sbt_stream; int * play_i2sbt_stream; int * capture_i2ssp_stream; int * play_i2ssp_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,struct audio_drv_data*) ;
 struct audio_drv_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int *,int ) ;
 int VAR_5 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 int VAR_7;
 struct audio_drv_data *VAR_8;
 struct resource *VAR_9;
 const u32 *VAR_10 = VAR_6->dev.platform_data;

 if (!VAR_10) {
  FUNC_3(&VAR_6->dev, "Missing platform data\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(struct audio_drv_data),
          VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->acp_mmio = FUNC_6(VAR_6, 0);
 if (FUNC_0(VAR_8->acp_mmio))
  return FUNC_1(VAR_8->acp_mmio);







 VAR_8->play_i2ssp_stream = ((void*)0);
 VAR_8->capture_i2ssp_stream = ((void*)0);
 VAR_8->play_i2sbt_stream = ((void*)0);
 VAR_8->capture_i2sbt_stream = ((void*)0);

 VAR_8->asic_type = *VAR_10;

 VAR_9 = FUNC_9(VAR_6, VAR_3, 0);
 if (!VAR_9) {
  FUNC_3(&VAR_6->dev, "IORESOURCE_IRQ FAILED\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_7(&VAR_6->dev, VAR_9->start, VAR_5,
      0, "ACP_IRQ", &VAR_6->dev);
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "ACP IRQ request failed\n");
  return VAR_7;
 }

 FUNC_4(&VAR_6->dev, VAR_8);


 VAR_7 = FUNC_2(VAR_8->acp_mmio, VAR_8->asic_type);
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "ACP Init failed status:%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_8(&VAR_6->dev,
       &VAR_4, ((void*)0), 0);
 if (VAR_7 != 0) {
  FUNC_3(&VAR_6->dev, "Fail to register ALSA platform device\n");
  return VAR_7;
 }

 FUNC_11(&VAR_6->dev, 10000);
 FUNC_12(&VAR_6->dev);
 FUNC_10(&VAR_6->dev);

 return VAR_7;
}
