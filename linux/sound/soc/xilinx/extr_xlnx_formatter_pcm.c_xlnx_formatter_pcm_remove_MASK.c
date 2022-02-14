
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_pcm_drv_data {int axi_clk; scalar_t__ mmio; scalar_t__ mm2s_presence; scalar_t__ s2mm_presence; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct xlnx_pcm_drv_data* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 int VAR_3 = 0;
 struct xlnx_pcm_drv_data *VAR_4 = FUNC_2(&VAR_2->dev);

 if (VAR_4->s2mm_presence)
  VAR_3 = FUNC_3(VAR_4->mmio + VAR_1);


 if (VAR_4->mm2s_presence)
  VAR_3 = FUNC_3(VAR_4->mmio + VAR_0);

 if (VAR_3)
  FUNC_1(&VAR_2->dev, "audio formatter reset failed\n");

 FUNC_0(VAR_4->axi_clk);
 return VAR_3;
}
