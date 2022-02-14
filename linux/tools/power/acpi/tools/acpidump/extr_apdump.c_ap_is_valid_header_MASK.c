
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_table_header {int length; scalar_t__ signature; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;

u8 FUNC_3(struct acpi_table_header *VAR_3)
{

 if (!FUNC_0(VAR_3->signature)) {



  if (!FUNC_1(VAR_3->signature)) {
   FUNC_2(VAR_2,
    "Table signature (0x%8.8X) is invalid\n",
    *(u32 *)VAR_3->signature);
   return (VAR_0);
  }



  if (VAR_3->length < sizeof(struct acpi_table_header)) {
   FUNC_2(VAR_2, "Table length (0x%8.8X) is invalid\n",
    VAR_3->length);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
