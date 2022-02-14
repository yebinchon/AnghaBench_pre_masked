
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_dev {int pci_id; int tplg_name; scalar_t__ nhlt; } ;
struct TYPE_2__ {char* oem_id; char* oem_table_id; int oem_revision; } ;
struct nhlt_acpi_table {TYPE_1__ header; } ;
struct hdac_bus {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char*,char*,int) ;
 int FUNC_1 (int ) ;
 struct hdac_bus* FUNC_2 (struct skl_dev*) ;
 int FUNC_3 (int ,int,char*,int,char*,char*,int,char*) ;

int FUNC_4(struct skl_dev *VAR_0)
{
 struct nhlt_acpi_table *VAR_1 = (struct nhlt_acpi_table *)VAR_0->nhlt;
 struct hdac_bus *VAR_2 = FUNC_2(VAR_0);
 struct device *VAR_3 = VAR_2->dev;

 FUNC_0(VAR_3, "oem_id %.6s, oem_table_id %.8s oem_revision %d\n",
  VAR_1->header.oem_id, VAR_1->header.oem_table_id,
  VAR_1->header.oem_revision);

 FUNC_3(VAR_0->tplg_name, sizeof(VAR_0->tplg_name), "%x-%.6s-%.8s-%d%s",
  VAR_0->pci_id, VAR_1->header.oem_id, VAR_1->header.oem_table_id,
  VAR_1->header.oem_revision, "-tplg.bin");

 FUNC_1(VAR_0->tplg_name);

 return 0;
}
