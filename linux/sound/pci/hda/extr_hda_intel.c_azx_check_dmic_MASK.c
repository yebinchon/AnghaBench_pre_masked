
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; int dev; } ;
struct nhlt_acpi_table {int dummy; } ;
struct azx {scalar_t__ driver_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct nhlt_acpi_table*) ;
 scalar_t__ FUNC_2 (int *,struct nhlt_acpi_table*) ;
 struct nhlt_acpi_table* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_2, struct azx *VAR_3)
{
 struct nhlt_acpi_table *VAR_4;
 int VAR_5 = 0;

 if (VAR_3->driver_type == VAR_0 &&
     VAR_2->class != 0x040300) {
  VAR_4 = FUNC_3(&VAR_2->dev);
  if (VAR_4) {
   if (FUNC_2(&VAR_2->dev, VAR_4)) {
    VAR_5 = -VAR_1;
    FUNC_0(&VAR_2->dev, "Digital mics found on Skylake+ platform, aborting probe\n");
   }
   FUNC_1(VAR_4);
  }
 }
 return VAR_5;
}
