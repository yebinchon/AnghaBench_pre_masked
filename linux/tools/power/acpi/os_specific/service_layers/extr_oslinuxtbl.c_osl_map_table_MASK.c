
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {char* signature; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_table_header* FUNC_3 (int ,int) ;
 int FUNC_4 (struct acpi_table_header*,int) ;
 int FUNC_5 (struct acpi_table_header*) ;
 int FUNC_6 (struct acpi_table_header*) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;

__attribute__((used)) static acpi_status
FUNC_9(acpi_size VAR_6,
       char *VAR_7, struct acpi_table_header **VAR_8)
{
 struct acpi_table_header *VAR_9;
 u32 VAR_10;

 if (!VAR_6) {
  return (VAR_0);
 }







 VAR_9 =
     FUNC_3(VAR_6, sizeof(struct acpi_table_header));
 if (!VAR_9) {
  FUNC_7(VAR_5, "Could not map table header at 0x%8.8X%8.8X\n",
   FUNC_1(VAR_6));
  return (FUNC_8(VAR_0));
 }



 if (VAR_7) {
  if (FUNC_2(VAR_7)) {
   if (!FUNC_2(VAR_9->signature)) {
    FUNC_4(VAR_9,
           sizeof(struct
           acpi_table_header));
    return (VAR_2);
   }
  } else
      if (!FUNC_0
   (VAR_7, VAR_9->signature)) {
   FUNC_4(VAR_9,
          sizeof(struct acpi_table_header));
   return (VAR_2);
  }
 }



 VAR_10 = FUNC_5(VAR_9);
 FUNC_4(VAR_9, sizeof(struct acpi_table_header));
 if (VAR_10 == 0) {
  return (VAR_1);
 }

 VAR_9 = FUNC_3(VAR_6, VAR_10);
 if (!VAR_9) {
  FUNC_7(VAR_5,
   "Could not map table at 0x%8.8X%8.8X length %8.8X\n",
   FUNC_1(VAR_6), VAR_10);
  return (FUNC_8(VAR_3));
 }

 (void)FUNC_6(VAR_9);

 *VAR_8 = VAR_9;
 return (VAR_4);
}
