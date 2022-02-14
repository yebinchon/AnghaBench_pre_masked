
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_pdata {scalar_t__ resindex_dma_base; scalar_t__ dma_base; void* fw_size; int fw_base; void* pcicfg_size; int pcicfg_base; void* lpe_size; int lpe_base; int irq; int dma_size; int dma_engine; struct device* dma_dev; int id; } ;
struct sst_acpi_priv {int pdev_mach; struct snd_soc_acpi_mach* mach; struct sst_acpi_desc* desc; struct sst_pdata sst_pdata; } ;
struct sst_acpi_desc {scalar_t__ resindex_dma_base; scalar_t__ irqindex_host_ipc; scalar_t__ resindex_lpe_base; scalar_t__ resindex_pcicfg_base; scalar_t__ resindex_fw_base; int dma_size; int dma_engine; int sst_id; int machines; } ;
struct snd_soc_acpi_mach {int fw_filename; int drv_name; struct sst_pdata* pdata; } ;
struct resource {int start; } ;
struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int acpi_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct acpi_device_id* FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct sst_acpi_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,int,struct snd_soc_acpi_mach*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct platform_device*,scalar_t__) ;
 struct resource* FUNC_8 (struct platform_device*,int ,scalar_t__) ;
 int FUNC_9 (struct platform_device*,struct sst_acpi_priv*) ;
 int FUNC_10 (int ,int,int ,struct device*,int ,struct platform_device*,int ) ;
 void* FUNC_11 (struct resource*) ;
 struct snd_soc_acpi_mach* FUNC_12 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 const struct acpi_device_id *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct sst_acpi_priv *VAR_9;
 struct sst_pdata *VAR_10;
 struct snd_soc_acpi_mach *VAR_11;
 struct sst_acpi_desc *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = 0;

 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_8->driver->acpi_match_table, VAR_8);
 if (!VAR_7)
  return -VAR_0;

 VAR_12 = (struct sst_acpi_desc *)VAR_7->driver_data;
 VAR_11 = FUNC_12(VAR_12->machines);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_8, "No matching ASoC machine driver found\n");
  return -VAR_0;
 }

 VAR_10 = &VAR_9->sst_pdata;
 VAR_10->id = VAR_12->sst_id;
 VAR_10->dma_dev = VAR_8;
 VAR_9->desc = VAR_12;
 VAR_9->mach = VAR_11;

 VAR_10->resindex_dma_base = VAR_12->resindex_dma_base;
 if (VAR_12->resindex_dma_base >= 0) {
  VAR_10->dma_engine = VAR_12->dma_engine;
  VAR_10->dma_base = VAR_12->resindex_dma_base;
  VAR_10->dma_size = VAR_12->dma_size;
 }

 if (VAR_12->irqindex_host_ipc >= 0)
  VAR_10->irq = FUNC_7(VAR_6, VAR_12->irqindex_host_ipc);

 if (VAR_12->resindex_lpe_base >= 0) {
  VAR_13 = FUNC_8(VAR_6, VAR_3,
          VAR_12->resindex_lpe_base);
  if (VAR_13) {
   VAR_10->lpe_base = VAR_13->start;
   VAR_10->lpe_size = FUNC_11(VAR_13);
  }
 }

 if (VAR_12->resindex_pcicfg_base >= 0) {
  VAR_13 = FUNC_8(VAR_6, VAR_3,
          VAR_12->resindex_pcicfg_base);
  if (VAR_13) {
   VAR_10->pcicfg_base = VAR_13->start;
   VAR_10->pcicfg_size = FUNC_11(VAR_13);
  }
 }

 if (VAR_12->resindex_fw_base >= 0) {
  VAR_13 = FUNC_8(VAR_6, VAR_3,
          VAR_12->resindex_fw_base);
  if (VAR_13) {
   VAR_10->fw_base = VAR_13->start;
   VAR_10->fw_size = FUNC_11(VAR_13);
  }
 }

 FUNC_9(VAR_6, VAR_9);
 VAR_11->pdata = VAR_10;


 VAR_9->pdev_mach =
  FUNC_5(VAR_8, VAR_11->drv_name, -1,
           VAR_11, sizeof(*VAR_11));
 if (FUNC_0(VAR_9->pdev_mach))
  return FUNC_1(VAR_9->pdev_mach);


 VAR_14 = FUNC_10(VAR_4, 1, VAR_11->fw_filename,
          VAR_8, VAR_2, VAR_6, VAR_5);
 if (VAR_14)
  FUNC_6(VAR_9->pdev_mach);

 return VAR_14;
}
