
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_dev_data {int axi_clk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct spdif_dev_data* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct spdif_dev_data *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->axi_clk);
 return 0;
}
