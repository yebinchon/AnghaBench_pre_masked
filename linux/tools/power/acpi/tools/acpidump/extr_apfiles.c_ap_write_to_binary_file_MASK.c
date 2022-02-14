
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {char* signature; int length; } ;
typedef int instance_str ;
typedef int acpi_size ;
typedef int ACPI_FILE ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_2 ;
 int FUNC_2 (struct acpi_table_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (struct acpi_table_header*,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,int,char*,int) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct acpi_table_header *VAR_5, u32 VAR_6)
{
 char VAR_7[VAR_0 + 16];
 char VAR_8[16];
 ACPI_FILE VAR_9;
 acpi_size VAR_10;
 u32 VAR_11;



 VAR_11 = FUNC_2(VAR_5);



 if (FUNC_1(VAR_5->signature)) {
  FUNC_0(VAR_7, VAR_1);
 } else {
  FUNC_0(VAR_7, VAR_5->signature);
 }

 VAR_7[0] = (char)FUNC_9((int)VAR_7[0]);
 VAR_7[1] = (char)FUNC_9((int)VAR_7[1]);
 VAR_7[2] = (char)FUNC_9((int)VAR_7[2]);
 VAR_7[3] = (char)FUNC_9((int)VAR_7[3]);
 VAR_7[VAR_0] = 0;



 if (VAR_6 > 0) {
  FUNC_7(VAR_8, sizeof(VAR_8), "%u", VAR_6);
  FUNC_8(VAR_7, VAR_8);
 }

 FUNC_8(VAR_7, VAR_2);

 if (VAR_3) {
  FUNC_5(VAR_4,
   "Writing [%4.4s] to binary file: %s 0x%X (%u) bytes\n",
   VAR_5->signature, VAR_7, VAR_5->length,
   VAR_5->length);
 }



 VAR_9 = FUNC_4(VAR_7, "wb");
 if (!VAR_9) {
  FUNC_5(VAR_4, "Could not open output file: %s\n", VAR_7);
  return (-1);
 }

 VAR_10 = FUNC_6(VAR_5, 1, VAR_11, VAR_9);
 if (VAR_10 != VAR_11) {
  FUNC_5(VAR_4, "Error writing binary output file: %s\n",
   VAR_7);
  FUNC_3(VAR_9);
  return (-1);
 }

 FUNC_3(VAR_9);
 return (0);
}
