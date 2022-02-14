
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sst_platform_info {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_3__ {struct sst_platform_info* platform_data; } ;
struct pci_dev {int irq; int device; TYPE_1__ dev; } ;
struct intel_sst_drv {char* dev_id; int dev; int pci; int firmware_name; int irq_num; struct sst_platform_info* pdata; } ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct intel_sst_drv*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int,char*,char*,char*,char*) ;
 int FUNC_6 (struct intel_sst_drv**,TYPE_1__*,int ) ;
 int FUNC_7 (struct intel_sst_drv*) ;
 int FUNC_8 (struct intel_sst_drv*) ;
 int FUNC_9 (struct intel_sst_drv*) ;
 int FUNC_10 (struct intel_sst_drv*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_0,
   const struct pci_device_id *VAR_1)
{
 int VAR_2 = 0;
 struct intel_sst_drv *VAR_3;
 struct sst_platform_info *VAR_4 = VAR_0->dev.platform_data;

 FUNC_0(&VAR_0->dev, "Probe for DID %x\n", VAR_0->device);
 VAR_2 = FUNC_6(&VAR_3, &VAR_0->dev, VAR_0->device);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3->pdata = VAR_4;
 VAR_3->irq_num = VAR_0->irq;
 FUNC_5(VAR_3->firmware_name, sizeof(VAR_3->firmware_name),
   "%s%04x%s", "fw_sst_",
   VAR_3->dev_id, ".bin");

 VAR_2 = FUNC_9(VAR_3);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_3->dev,
   "device can't be enabled. Returned err: %d\n", VAR_2);
  goto do_free_drv_ctx;
 }
 VAR_3->pci = FUNC_2(VAR_0);
 VAR_2 = FUNC_10(VAR_3);
 if (VAR_2 < 0)
  goto do_free_drv_ctx;

 FUNC_3(VAR_0, VAR_3);
 FUNC_7(VAR_3);

 return VAR_2;

do_free_drv_ctx:
 FUNC_8(VAR_3);
 FUNC_1(VAR_3->dev, "Probe failed with %d\n", VAR_2);
 return VAR_2;
}
