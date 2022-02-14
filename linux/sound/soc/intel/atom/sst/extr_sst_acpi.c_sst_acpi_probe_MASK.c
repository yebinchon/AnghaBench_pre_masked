
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_platform_info {int platform; TYPE_3__* res_info; } ;
struct TYPE_5__ {int acpi_ipc_irq_index; } ;
struct snd_soc_acpi_mach {int drv_name; int fw_filename; TYPE_2__ mach_params; struct sst_platform_info* pdata; } ;
struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct intel_sst_drv {int firmware_name; struct sst_platform_info* pdata; } ;
struct acpi_device_id {unsigned int id; scalar_t__ driver_data; } ;
struct TYPE_6__ {int acpi_ipc_irq_index; } ;
struct TYPE_4__ {int acpi_match_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct acpi_device_id* FUNC_2 (int ,struct device*) ;
 struct sst_platform_info VAR_1 ;
 TYPE_3__ VAR_2 ;
 struct sst_platform_info VAR_3 ;
 int FUNC_3 (struct device*,char*,unsigned int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (unsigned int,int,unsigned int*) ;
 struct platform_device* FUNC_6 (struct device*,int,int,void const*,int) ;
 int FUNC_7 (struct platform_device*,struct intel_sst_drv*) ;
 struct snd_soc_acpi_mach* FUNC_8 (struct snd_soc_acpi_mach*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct intel_sst_drv**,struct device*,unsigned int) ;
 int FUNC_12 (struct intel_sst_drv*) ;
 int FUNC_13 (struct intel_sst_drv*) ;
 int FUNC_14 (struct intel_sst_drv*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 int VAR_6 = 0;
 struct intel_sst_drv *VAR_7;
 const struct acpi_device_id *VAR_8;
 struct snd_soc_acpi_mach *VAR_9;
 struct platform_device *VAR_10;
 struct platform_device *VAR_11;
 struct sst_platform_info *VAR_12;
 unsigned int VAR_13;

 VAR_8 = FUNC_2(VAR_5->driver->acpi_match_table, VAR_5);
 if (!VAR_8)
  return -VAR_0;
 FUNC_3(VAR_5, "for %s\n", VAR_8->id);

 VAR_9 = (struct snd_soc_acpi_mach *)VAR_8->driver_data;
 VAR_9 = FUNC_8(VAR_9);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_5, "No matching machine driver found\n");
  return -VAR_0;
 }

 if (FUNC_9())
  VAR_9->pdata = &VAR_1;
 else
  VAR_9->pdata = &VAR_3;
 VAR_12 = VAR_9->pdata;

 VAR_6 = FUNC_5(VAR_8->id, 16, &VAR_13);
 if (VAR_6 < 0) {
  FUNC_4(VAR_5, "Unique device id conversion error: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_3(VAR_5, "ACPI device id: %x\n", VAR_13);

 VAR_6 = FUNC_11(&VAR_7, VAR_5, VAR_13);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_10(VAR_4)) {

  VAR_1.res_info = &VAR_2;
 }


 VAR_9->mach_params.acpi_ipc_irq_index =
  VAR_12->res_info->acpi_ipc_irq_index;

 VAR_11 = FUNC_6(VAR_5, VAR_12->platform, -1,
      ((void*)0), 0);
 if (FUNC_0(VAR_11)) {
  FUNC_4(VAR_5, "Failed to create machine device: %s\n",
   VAR_12->platform);
  return FUNC_1(VAR_11);
 }





 VAR_10 = FUNC_6(VAR_5, VAR_9->drv_name, -1,
     (const void *)VAR_9, sizeof(*VAR_9));
 if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_5, "Failed to create machine device: %s\n",
   VAR_9->drv_name);
  return FUNC_1(VAR_10);
 }


 VAR_7->pdata = VAR_12;
 FUNC_15(VAR_7->firmware_name, VAR_9->fw_filename);

 VAR_6 = FUNC_14(VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_13(VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_12(VAR_7);
 FUNC_7(VAR_4, VAR_7);
 return VAR_6;
}
