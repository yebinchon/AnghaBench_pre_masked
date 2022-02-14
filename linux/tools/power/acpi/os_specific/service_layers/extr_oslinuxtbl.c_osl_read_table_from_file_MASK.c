
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {char* signature; } ;
typedef int s32 ;
typedef int acpi_status ;
typedef int acpi_size ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct acpi_table_header*) ;
 int FUNC_3 (struct acpi_table_header*) ;
 struct acpi_table_header* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (struct acpi_table_header*,int,int,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;

__attribute__((used)) static acpi_status
FUNC_11(char *VAR_8,
    acpi_size VAR_9,
    char *VAR_10, struct acpi_table_header **VAR_11)
{
 FILE *VAR_12;
 struct acpi_table_header VAR_13;
 struct acpi_table_header *VAR_14 = ((void*)0);
 u32 VAR_15;
 s32 VAR_16;
 acpi_status VAR_17 = VAR_5;



 VAR_12 = FUNC_6(VAR_8, "rb");
 if (VAR_12 == ((void*)0)) {
  FUNC_7(VAR_7, "Could not open table file: %s\n", VAR_8);
  return (FUNC_10(VAR_3));
 }

 FUNC_9(VAR_12, VAR_9, VAR_6);



 VAR_16 = FUNC_8(&VAR_13, 1, sizeof(struct acpi_table_header), VAR_12);
 if (VAR_16 != sizeof(struct acpi_table_header)) {
  FUNC_7(VAR_7, "Could not read table header: %s\n", VAR_8);
  VAR_17 = VAR_0;
  goto exit;
 }



 if (VAR_10) {
  if (FUNC_1(VAR_10)) {
   if (!FUNC_1(VAR_13.signature)) {
    FUNC_7(VAR_7,
     "Incorrect RSDP signature: found %8.8s\n",
     VAR_13.signature);
    VAR_17 = VAR_1;
    goto exit;
   }
  } else if (!FUNC_0(VAR_10, VAR_13.signature)) {
   FUNC_7(VAR_7,
    "Incorrect signature: Expecting %4.4s, found %4.4s\n",
    VAR_10, VAR_13.signature);
   VAR_17 = VAR_1;
   goto exit;
  }
 }

 VAR_15 = FUNC_2(&VAR_13);
 if (VAR_15 == 0) {
  VAR_17 = VAR_0;
  goto exit;
 }



 VAR_14 = FUNC_4(1, VAR_15);
 if (!VAR_14) {
  FUNC_7(VAR_7,
   "%4.4s: Could not allocate buffer for table of length %X\n",
   VAR_13.signature, VAR_15);
  VAR_17 = VAR_4;
  goto exit;
 }

 FUNC_9(VAR_12, VAR_9, VAR_6);

 VAR_16 = FUNC_8(VAR_14, 1, VAR_15, VAR_12);
 if (VAR_16 != VAR_15) {
  FUNC_7(VAR_7, "%4.4s: Could not read table content\n",
   VAR_13.signature);
  VAR_17 = VAR_2;
  goto exit;
 }



 (void)FUNC_3(VAR_14);

exit:
 FUNC_5(VAR_12);
 *VAR_11 = VAR_14;
 return (VAR_17);
}
