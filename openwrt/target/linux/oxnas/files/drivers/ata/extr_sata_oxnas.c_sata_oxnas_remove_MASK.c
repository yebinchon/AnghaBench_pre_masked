
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_oxnas_host_priv {int clk; int rst_phy; int rst_link; int rst_sata; int core_base; int sgdma_base; int port_base; int irq; } ;
struct platform_device {int dev; } ;
struct ata_host {struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ata_host* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_3(&VAR_0->dev);
 struct sata_oxnas_host_priv *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_1);

 FUNC_5(VAR_2->irq);
 FUNC_4(VAR_2->port_base);
 FUNC_4(VAR_2->sgdma_base);
 FUNC_4(VAR_2->core_base);


 FUNC_6(VAR_2->rst_sata);
 FUNC_6(VAR_2->rst_link);
 FUNC_6(VAR_2->rst_phy);


 FUNC_1(VAR_2->clk);
 FUNC_2(VAR_2->clk);

 return 0;
}
