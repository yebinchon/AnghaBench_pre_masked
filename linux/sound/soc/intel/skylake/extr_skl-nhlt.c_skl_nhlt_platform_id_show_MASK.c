
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_dev {int pci_id; scalar_t__ nhlt; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {char* oem_id; char* oem_table_id; int oem_revision; } ;
struct nhlt_acpi_table {TYPE_1__ header; } ;
struct hdac_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_4(VAR_0);
 struct hdac_bus *VAR_4 = FUNC_1(VAR_3);
 struct skl_dev *VAR_5 = FUNC_0(VAR_4);
 struct nhlt_acpi_table *VAR_6 = (struct nhlt_acpi_table *)VAR_5->nhlt;
 char VAR_7[32];

 FUNC_3(VAR_7, "%x-%.6s-%.8s-%d", VAR_5->pci_id,
   VAR_6->header.oem_id, VAR_6->header.oem_table_id,
   VAR_6->header.oem_revision);

 FUNC_2(VAR_7);
 return FUNC_3(VAR_2, "%s\n", VAR_7);
}
