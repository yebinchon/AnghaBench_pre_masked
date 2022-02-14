
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ major; scalar_t__ minor; scalar_t__ build; } ;
struct intel_sst_drv {TYPE_1__ fw_version; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct intel_sst_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct intel_sst_drv *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->fw_version.type == 0 && VAR_3->fw_version.major == 0 &&
     VAR_3->fw_version.minor == 0 && VAR_3->fw_version.build == 0)
  return FUNC_1(VAR_2, "FW not yet loaded\n");
 else
  return FUNC_1(VAR_2, "v%02x.%02x.%02x.%02x\n",
          VAR_3->fw_version.type, VAR_3->fw_version.major,
          VAR_3->fw_version.minor, VAR_3->fw_version.build);

}
