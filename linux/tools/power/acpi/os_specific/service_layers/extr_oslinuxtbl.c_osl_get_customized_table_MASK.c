
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 char* FUNC_3 (void*) ;
 void* FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int *,struct acpi_table_header**) ;
 int FUNC_7 (char*,char*,scalar_t__*) ;
 int FUNC_8 (char*,char*,char*,char*,...) ;

__attribute__((used)) static acpi_status
FUNC_9(char *VAR_5,
    char *VAR_6,
    u32 VAR_7,
    struct acpi_table_header **VAR_8,
    acpi_physical_address *VAR_9)
{
 void *VAR_10;
 u32 VAR_11 = 0;
 char VAR_12[VAR_0];
 char VAR_13[VAR_3];
 char *VAR_14;
 acpi_status VAR_15;



 VAR_10 = FUNC_4(VAR_5, "*", VAR_4);
 if (!VAR_10) {
  return (FUNC_5(VAR_2));
 }



 while ((VAR_14 = FUNC_3(VAR_10))) {



  if (!FUNC_0(VAR_14, VAR_6)) {
   continue;
  }



  VAR_15 =
      FUNC_7(VAR_14, VAR_12,
          &VAR_11);



  if (FUNC_1(VAR_15) || VAR_11 != VAR_7) {
   continue;
  }



  if (VAR_7 != 0) {
   FUNC_8(VAR_13, "%s/%4.4s%d", VAR_5,
    VAR_12, VAR_7);
  } else {
   FUNC_8(VAR_13, "%s/%4.4s", VAR_5,
    VAR_12);
  }
  break;
 }

 FUNC_2(VAR_10);

 if (!VAR_14) {
  return (VAR_1);
 }



 *VAR_9 = 0;
 VAR_15 = FUNC_6(VAR_13, 0, ((void*)0), VAR_8);

 return (VAR_15);
}
