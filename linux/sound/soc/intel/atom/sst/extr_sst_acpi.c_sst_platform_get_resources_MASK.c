
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int end; scalar_t__ start; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ mailbox_start; } ;
struct intel_sst_drv {int irq_num; TYPE_3__* pdata; int dev; void* ddr; scalar_t__ ddr_base; int ddr_end; TYPE_1__ info; scalar_t__ mailbox_add; void* mailbox; scalar_t__ shim_phy_add; void* shim; void* dram; scalar_t__ dram_base; scalar_t__ dram_end; void* iram; scalar_t__ iram_base; scalar_t__ iram_end; } ;
struct TYPE_6__ {TYPE_2__* res_info; } ;
struct TYPE_5__ {int acpi_ipc_irq_index; int acpi_ddr_index; scalar_t__ mbox_size; scalar_t__ mbox_offset; scalar_t__ shim_phy_addr; scalar_t__ shim_size; scalar_t__ shim_offset; scalar_t__ dram_size; scalar_t__ dram_offset; scalar_t__ iram_size; scalar_t__ iram_offset; int acpi_lpe_res_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 void* FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_sst_drv *VAR_2)
{
 struct resource *VAR_3;
 struct platform_device *VAR_4 = FUNC_6(VAR_2->dev);



 VAR_3 = FUNC_4(VAR_4, VAR_1,
     VAR_2->pdata->res_info->acpi_lpe_res_index);
 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "Invalid SHIM base from IFWI\n");
  return -VAR_0;
 }
 FUNC_1(VAR_2->dev, "LPE base: %#x size:%#x", (unsigned int) VAR_3->start,
     (unsigned int)FUNC_5(VAR_3));

 VAR_2->iram_base = VAR_3->start + VAR_2->pdata->res_info->iram_offset;
 VAR_2->iram_end = VAR_2->iram_base + VAR_2->pdata->res_info->iram_size - 1;
 FUNC_1(VAR_2->dev, "IRAM base: %#x", VAR_2->iram_base);
 VAR_2->iram = FUNC_2(VAR_2->dev, VAR_2->iram_base,
      VAR_2->pdata->res_info->iram_size);
 if (!VAR_2->iram) {
  FUNC_0(VAR_2->dev, "unable to map IRAM\n");
  return -VAR_0;
 }

 VAR_2->dram_base = VAR_3->start + VAR_2->pdata->res_info->dram_offset;
 VAR_2->dram_end = VAR_2->dram_base + VAR_2->pdata->res_info->dram_size - 1;
 FUNC_1(VAR_2->dev, "DRAM base: %#x", VAR_2->dram_base);
 VAR_2->dram = FUNC_2(VAR_2->dev, VAR_2->dram_base,
      VAR_2->pdata->res_info->dram_size);
 if (!VAR_2->dram) {
  FUNC_0(VAR_2->dev, "unable to map DRAM\n");
  return -VAR_0;
 }

 VAR_2->shim_phy_add = VAR_3->start + VAR_2->pdata->res_info->shim_offset;
 FUNC_1(VAR_2->dev, "SHIM base: %#x", VAR_2->shim_phy_add);
 VAR_2->shim = FUNC_2(VAR_2->dev, VAR_2->shim_phy_add,
     VAR_2->pdata->res_info->shim_size);
 if (!VAR_2->shim) {
  FUNC_0(VAR_2->dev, "unable to map SHIM\n");
  return -VAR_0;
 }


 VAR_2->shim_phy_add = VAR_2->pdata->res_info->shim_phy_addr;


 VAR_2->mailbox_add = VAR_3->start + VAR_2->pdata->res_info->mbox_offset;
 FUNC_1(VAR_2->dev, "Mailbox base: %#x", VAR_2->mailbox_add);
 VAR_2->mailbox = FUNC_2(VAR_2->dev, VAR_2->mailbox_add,
         VAR_2->pdata->res_info->mbox_size);
 if (!VAR_2->mailbox) {
  FUNC_0(VAR_2->dev, "unable to map mailbox\n");
  return -VAR_0;
 }


 VAR_2->mailbox_add = VAR_2->info.mailbox_start;

 VAR_3 = FUNC_4(VAR_4, VAR_1,
     VAR_2->pdata->res_info->acpi_ddr_index);
 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "Invalid DDR base from IFWI\n");
  return -VAR_0;
 }
 VAR_2->ddr_base = VAR_3->start;
 VAR_2->ddr_end = VAR_3->end;
 FUNC_1(VAR_2->dev, "DDR base: %#x", VAR_2->ddr_base);
 VAR_2->ddr = FUNC_2(VAR_2->dev, VAR_2->ddr_base,
     FUNC_5(VAR_3));
 if (!VAR_2->ddr) {
  FUNC_0(VAR_2->dev, "unable to map DDR\n");
  return -VAR_0;
 }


 VAR_2->irq_num = FUNC_3(VAR_4,
    VAR_2->pdata->res_info->acpi_ipc_irq_index);
 if (VAR_2->irq_num <= 0)
  return VAR_2->irq_num < 0 ? VAR_2->irq_num : -VAR_0;

 return 0;
}
