
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {char* signature; } ;
typedef int acpi_physical_address ;


 int FUNC_0 (int ,struct acpi_table_header*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct acpi_table_header*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct acpi_table_header*) ;
 int FUNC_5 (struct acpi_table_header*,int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct acpi_table_header *VAR_5,
       u32 VAR_6, acpi_physical_address VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_4(VAR_5);



 if (VAR_3) {
  FUNC_2(VAR_7, VAR_5);
  return (0);
 }



 if (VAR_1) {
  return (FUNC_5(VAR_5, VAR_6));
 }






 FUNC_6(VAR_2, "%4.4s @ 0x%8.8X%8.8X\n",
  VAR_5->signature, FUNC_1(VAR_7));

 FUNC_3(VAR_2,
        FUNC_0(VAR_4, VAR_5), VAR_8,
        VAR_0, 0);
 FUNC_6(VAR_2, "\n");
 return (0);
}
