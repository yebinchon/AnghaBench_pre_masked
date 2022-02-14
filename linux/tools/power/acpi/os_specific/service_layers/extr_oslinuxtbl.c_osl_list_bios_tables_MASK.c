
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct acpi_table_header {int signature; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;
struct TYPE_5__ {int length; } ;
struct TYPE_6__ {TYPE_1__ header; } ;


 scalar_t__* FUNC_0 (int*) ;
 scalar_t__* FUNC_1 (int*) ;
 int* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *,struct acpi_table_header**) ;
 int FUNC_7 (struct acpi_table_header*) ;

__attribute__((used)) static acpi_status FUNC_8(void)
{
 struct acpi_table_header *VAR_3 = ((void*)0);
 u8 *VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 acpi_physical_address VAR_7 = 0;
 acpi_status VAR_8 = VAR_0;
 u32 VAR_9;

 if (FUNC_5()) {
  VAR_6 = sizeof(u64);
  VAR_4 =
      FUNC_2(VAR_2) + sizeof(struct acpi_table_header);
  VAR_5 =
      (u8)((VAR_2->header.length -
     sizeof(struct acpi_table_header))
    / VAR_6);
 } else {

  VAR_6 = sizeof(u32);
  VAR_4 =
      FUNC_2(VAR_1) + sizeof(struct acpi_table_header);
  VAR_5 =
      (u8)((VAR_1->header.length -
     sizeof(struct acpi_table_header))
    / VAR_6);
 }



 for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9, VAR_4 += VAR_6) {
  if (FUNC_5()) {
   VAR_7 =
       (acpi_physical_address)(*FUNC_1(VAR_4));
  } else {
   VAR_7 =
       (acpi_physical_address)(*FUNC_0(VAR_4));
  }



  if (VAR_7 == 0) {
   continue;
  }

  VAR_8 = FUNC_6(VAR_7, ((void*)0), &VAR_3);
  if (FUNC_3(VAR_8)) {
   return (VAR_8);
  }

  FUNC_4(VAR_3->signature, 0);
  FUNC_7(VAR_3);
 }

 return (VAR_0);
}
