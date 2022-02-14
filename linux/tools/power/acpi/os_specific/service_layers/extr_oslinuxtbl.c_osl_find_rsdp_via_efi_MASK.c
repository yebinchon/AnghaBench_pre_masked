
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_physical_address ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static acpi_physical_address FUNC_3(void)
{
 FILE *VAR_1;
 acpi_physical_address VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0, "r");
 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_1, "ACPI20");
  if (!VAR_2) {
   VAR_2 =
       FUNC_2(VAR_1, "ACPI");
  }
  FUNC_0(VAR_1);
 }

 return (VAR_2);
}
