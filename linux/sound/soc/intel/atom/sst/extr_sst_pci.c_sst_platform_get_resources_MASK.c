
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_sst_drv {scalar_t__ dev_id; int * dram; int dev; void* dram_base; void* dram_end; int * iram; void* iram_base; void* iram_end; int * mailbox; void* mailbox_add; int * shim; void* shim_phy_add; int * ddr; void* ddr_end; TYPE_2__* pdata; void* ddr_base; struct pci_dev* pci; } ;
struct TYPE_4__ {TYPE_1__* lib_info; } ;
struct TYPE_3__ {int mod_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 void* FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int) ;
 void* FUNC_6 (struct pci_dev*,int) ;
 void* FUNC_7 (struct pci_dev*,int,int ) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct intel_sst_drv *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct pci_dev *VAR_6 = VAR_3->pci;

 VAR_5 = FUNC_3(VAR_6, VAR_1);
 if (VAR_5)
  return VAR_5;



 if (VAR_3->dev_id == VAR_2) {
  VAR_3->ddr_base = FUNC_6(VAR_6, 0);

  VAR_4 = FUNC_8(VAR_3->ddr_base);
  if (!VAR_3->pdata->lib_info) {
   FUNC_1(VAR_3->dev, "lib_info pointer NULL\n");
   VAR_5 = -VAR_0;
   goto do_release_regions;
  }
  if (VAR_4 != VAR_3->pdata->lib_info->mod_base) {
   FUNC_1(VAR_3->dev,
     "FW LSP DDR BASE does not match with IFWI\n");
   VAR_5 = -VAR_0;
   goto do_release_regions;
  }
  VAR_3->ddr_end = FUNC_4(VAR_6, 0);

  VAR_3->ddr = FUNC_7(VAR_6, 0,
     FUNC_5(VAR_6, 0));
  if (!VAR_3->ddr) {
   VAR_5 = -VAR_0;
   goto do_release_regions;
  }
  FUNC_0(VAR_3->dev, "sst: DDR Ptr %p\n", VAR_3->ddr);
 } else {
  VAR_3->ddr = ((void*)0);
 }

 VAR_3->shim_phy_add = FUNC_6(VAR_6, 1);
 VAR_3->shim = FUNC_7(VAR_6, 1, FUNC_5(VAR_6, 1));
 if (!VAR_3->shim) {
  VAR_5 = -VAR_0;
  goto do_release_regions;
 }
 FUNC_0(VAR_3->dev, "SST Shim Ptr %p\n", VAR_3->shim);


 VAR_3->mailbox_add = FUNC_6(VAR_6, 2);
 VAR_3->mailbox = FUNC_7(VAR_6, 2, FUNC_5(VAR_6, 2));
 if (!VAR_3->mailbox) {
  VAR_5 = -VAR_0;
  goto do_release_regions;
 }
 FUNC_0(VAR_3->dev, "SRAM Ptr %p\n", VAR_3->mailbox);


 VAR_3->iram_end = FUNC_4(VAR_6, 3);
 VAR_3->iram_base = FUNC_6(VAR_6, 3);
 VAR_3->iram = FUNC_7(VAR_6, 3, FUNC_5(VAR_6, 3));
 if (!VAR_3->iram) {
  VAR_5 = -VAR_0;
  goto do_release_regions;
 }
 FUNC_0(VAR_3->dev, "IRAM Ptr %p\n", VAR_3->iram);


 VAR_3->dram_end = FUNC_4(VAR_6, 4);
 VAR_3->dram_base = FUNC_6(VAR_6, 4);
 VAR_3->dram = FUNC_7(VAR_6, 4, FUNC_5(VAR_6, 4));
 if (!VAR_3->dram) {
  VAR_5 = -VAR_0;
  goto do_release_regions;
 }
 FUNC_0(VAR_3->dev, "DRAM Ptr %p\n", VAR_3->dram);
do_release_regions:
 FUNC_2(VAR_6);
 return 0;
}
