
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int acpi_size ;
typedef int acpi_physical_address ;


 void* FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int * FUNC_4 (int *,int,int ,int ,int,int) ;
 int FUNC_5 (char*,int) ;
 int VAR_6 ;

void *FUNC_6(acpi_physical_address VAR_7, acpi_size VAR_8)
{
 u8 *VAR_9;
 acpi_physical_address VAR_10;
 acpi_size VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_5, VAR_3 | VAR_2);
 if (VAR_12 < 0) {
  FUNC_3(VAR_6, "Cannot open %s\n", VAR_5);
  return (((void*)0));
 }



 VAR_11 = FUNC_1();
 VAR_10 = VAR_7 % VAR_11;



 VAR_9 = FUNC_4(((void*)0), (VAR_8 + VAR_10), VAR_4, VAR_1,
        VAR_12, (VAR_7 - VAR_10));
 if (VAR_9 == VAR_0) {
  FUNC_3(VAR_6, "Cannot map %s\n", VAR_5);
  FUNC_2(VAR_12);
  return (((void*)0));
 }

 FUNC_2(VAR_12);
 return (FUNC_0(VAR_9 + VAR_10));
}
