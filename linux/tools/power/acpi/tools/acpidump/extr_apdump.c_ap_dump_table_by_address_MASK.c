
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct acpi_table_header*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct acpi_table_header**) ;
 int FUNC_5 (char*,scalar_t__*) ;
 int FUNC_6 (struct acpi_table_header*,int ,scalar_t__) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_0 ;

int FUNC_8(char *VAR_1)
{
 acpi_physical_address VAR_2;
 struct acpi_table_header *VAR_3;
 acpi_status VAR_4;
 int VAR_5;
 u64 VAR_6;



 VAR_4 = FUNC_5(VAR_1, &VAR_6);
 if (FUNC_0(VAR_4)) {
  FUNC_7(VAR_0, "%s: Could not convert to a physical address\n",
   VAR_1);
  return (-1);
 }

 VAR_2 = (acpi_physical_address)VAR_6;
 VAR_4 = FUNC_4(VAR_2, &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_7(VAR_0, "Could not get table at 0x%8.8X%8.8s, %s\n",
   FUNC_1(VAR_2),
   FUNC_3(VAR_4));
  return (-1);
 }

 VAR_5 = FUNC_6(VAR_3, 0, VAR_2);
 FUNC_2(VAR_3);
 return (VAR_5);
}
