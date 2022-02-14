
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sata_oxnas_port_priv {int sgdma_request_pa; int sgdma_request; } ;
struct sata_oxnas_host_priv {scalar_t__ dma_size; } ;
struct device {int dummy; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_oxnas_host_priv* private_data; struct device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sata_oxnas_port_priv*) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1)
{
 struct device *VAR_2 = VAR_1->host->dev;
 struct sata_oxnas_port_priv *VAR_3 = VAR_1->private_data;
 struct sata_oxnas_host_priv *VAR_4 = VAR_1->host->private_data;

 FUNC_0("ENTER\n");
 VAR_1->private_data = ((void*)0);
 if (VAR_4->dma_size) {
  FUNC_2(VAR_3->sgdma_request);
 } else {
  FUNC_1(VAR_2, VAR_0,
      VAR_3->sgdma_request, VAR_3->sgdma_request_pa);
 }

 FUNC_3(VAR_3);
}
