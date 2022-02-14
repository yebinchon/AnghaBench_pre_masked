
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgdma_request {int dummy; } ;
struct sata_oxnas_port_priv {void* sgdma_request; void* sgdma_request_pa; int core_base; scalar_t__ sgdma_base; scalar_t__ dmactl_base; scalar_t__ port_base; } ;
struct sata_oxnas_host_priv {int dma_size; int n_ports; void* dma_base; int core_base; scalar_t__ sgdma_base; scalar_t__ dmactl_base; scalar_t__ port_base; } ;
struct device {int dummy; } ;
struct ata_port {struct sata_oxnas_port_priv* private_data; void* bmdma_prd; void* bmdma_prd_dma; scalar_t__ port_no; TYPE_1__* host; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {struct device* dev; struct sata_oxnas_host_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (struct device*,int,void**,int ) ;
 void* FUNC_2 (void*,int) ;
 int FUNC_3 (struct sata_oxnas_port_priv*) ;
 struct sata_oxnas_port_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ata_port*) ;

__attribute__((used)) static int FUNC_6(struct ata_port *VAR_6)
{
 struct sata_oxnas_host_priv *VAR_7 = VAR_6->host->private_data;
 struct device *VAR_8 = VAR_6->host->dev;
 struct sata_oxnas_port_priv *VAR_9;
 void *VAR_10;
 dma_addr_t VAR_11;

 FUNC_0("ENTER\n");

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->port_base = VAR_7->port_base +
   (VAR_6->port_no ? VAR_3 : 0);
 VAR_9->dmactl_base = VAR_7->dmactl_base +
    (VAR_6->port_no ? VAR_0 : 0);
 VAR_9->sgdma_base = VAR_7->sgdma_base +
    (VAR_6->port_no ? VAR_5 : 0);
 VAR_9->core_base = VAR_7->core_base;


 if (VAR_7->dma_size >= VAR_4 * VAR_7->n_ports) {
  FUNC_0("using preallocated DMA\n");
  VAR_11 = VAR_7->dma_base +
    (VAR_6->port_no ? VAR_4 : 0);
  VAR_10 = FUNC_2(VAR_11, VAR_4);
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_4, &VAR_11,
      VAR_2);
 }
 if (!VAR_10)
  goto err_ret;

 VAR_9->sgdma_request_pa = VAR_11;
 VAR_9->sgdma_request = VAR_10;

 VAR_6->bmdma_prd_dma = VAR_11 + sizeof(struct sgdma_request);
 VAR_6->bmdma_prd = VAR_10 + sizeof(struct sgdma_request);

 VAR_6->private_data = VAR_9;

 FUNC_5(VAR_6);

 return 0;

err_ret:
 FUNC_3(VAR_9);
 return -VAR_1;

}
