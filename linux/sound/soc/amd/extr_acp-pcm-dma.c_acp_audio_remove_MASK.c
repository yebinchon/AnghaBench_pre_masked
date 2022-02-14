
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct audio_drv_data {int acp_mmio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct audio_drv_data* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 int VAR_1;
 struct audio_drv_data *VAR_2 = FUNC_2(&VAR_0->dev);

 VAR_1 = FUNC_0(VAR_2->acp_mmio);
 if (VAR_1)
  FUNC_1(&VAR_0->dev, "ACP Deinit failed status:%d\n", VAR_1);
 FUNC_3(&VAR_0->dev);

 return 0;
}
