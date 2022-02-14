
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*,int ,struct acpi_table_header**,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,struct acpi_table_header**,int *) ;
 scalar_t__ FUNC_3 () ;

acpi_status
FUNC_4(char *VAR_5,
     u32 VAR_6,
     struct acpi_table_header **VAR_7,
     acpi_physical_address *VAR_8)
{
 acpi_status VAR_9;



 VAR_9 = FUNC_3();
 if (FUNC_0(VAR_9)) {
  return (VAR_9);
 }



 if (!VAR_3) {



  VAR_9 =
      FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 } else {


  VAR_9 = FUNC_2(VAR_2, VAR_5,
        VAR_6, VAR_7, VAR_8);
 }

 if (FUNC_0(VAR_9) && VAR_9 == VAR_0) {
  if (VAR_4) {



   VAR_9 =
       FUNC_2(VAR_1,
           VAR_5, VAR_6, VAR_7,
           VAR_8);
  }
 }

 return (VAR_9);
}
