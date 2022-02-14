
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct acpi_table_header {int length; char* signature; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_12__ {scalar_t__ dsdt; scalar_t__ facs; TYPE_1__ header; scalar_t__ Xfacs; scalar_t__ Xdsdt; } ;
struct TYPE_11__ {scalar_t__ rsdt_physical_address; scalar_t__ xsdt_physical_address; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_10__ {TYPE_2__ header; } ;


 scalar_t__* FUNC_0 (int*) ;
 scalar_t__* FUNC_1 (int*) ;
 int* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct acpi_table_header*) ;
 struct acpi_table_header* FUNC_6 (int,int) ;
 TYPE_6__* VAR_15 ;
 int VAR_16 ;
 TYPE_5__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_3__* VAR_19 ;
 TYPE_3__* VAR_20 ;
 int FUNC_7 (struct acpi_table_header*,struct acpi_table_header*,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,char*,struct acpi_table_header**) ;
 int FUNC_10 (struct acpi_table_header*) ;

__attribute__((used)) static acpi_status
FUNC_11(char *VAR_21,
     u32 VAR_22,
     struct acpi_table_header **VAR_23,
     acpi_physical_address *VAR_24)
{
 struct acpi_table_header *VAR_25 = ((void*)0);
 struct acpi_table_header *VAR_26 = ((void*)0);
 u8 *VAR_27;
 u8 VAR_28;
 u8 VAR_29;
 u32 VAR_30 = 0;
 acpi_physical_address VAR_31;
 acpi_physical_address VAR_32 = 0;
 u32 VAR_33 = 0;
 acpi_status VAR_34 = VAR_10;
 u32 VAR_35;



 if (FUNC_3(VAR_21, VAR_0) ||
     FUNC_3(VAR_21, VAR_4) ||
     FUNC_3(VAR_21, VAR_5) ||
     FUNC_3(VAR_21, VAR_1) ||
     FUNC_3(VAR_21, VAR_2)) {

find_next_instance:

  VAR_31 = 0;






  if (FUNC_3(VAR_21, VAR_1)) {
   if (VAR_30 < 2) {
    if ((VAR_15->header.length >=
         VAR_13) && VAR_15->Xdsdt
        && VAR_30 == 0) {
     VAR_31 =
         (acpi_physical_address)VAR_15->
         Xdsdt;
    } else
        if ((VAR_15->header.length >=
      VAR_11)
     && VAR_15->dsdt !=
     VAR_32) {
     VAR_31 =
         (acpi_physical_address)VAR_15->
         dsdt;
    }
   }
  } else if (FUNC_3(VAR_21, VAR_2)) {
   if (VAR_30 < 2) {
    if ((VAR_15->header.length >=
         VAR_14) && VAR_15->Xfacs
        && VAR_30 == 0) {
     VAR_31 =
         (acpi_physical_address)VAR_15->
         Xfacs;
    } else
        if ((VAR_15->header.length >=
      VAR_12)
     && VAR_15->facs !=
     VAR_32) {
     VAR_31 =
         (acpi_physical_address)VAR_15->
         facs;
    }
   }
  } else if (FUNC_3(VAR_21, VAR_5)) {
   if (!VAR_16) {
    return (VAR_7);
   }
   if (VAR_30 == 0) {
    VAR_31 =
        (acpi_physical_address)VAR_17.
        xsdt_physical_address;
   }
  } else if (FUNC_3(VAR_21, VAR_4)) {
   if (VAR_30 == 0) {
    VAR_31 =
        (acpi_physical_address)VAR_17.
        rsdt_physical_address;
   }
  } else {
   if (VAR_30 == 0) {
    VAR_31 =
        (acpi_physical_address)VAR_18;
    VAR_21 = VAR_3;
   }
  }

  if (VAR_31 == 0) {
   goto exit_find_table;
  }



  VAR_34 = FUNC_9(VAR_31, VAR_21, &VAR_26);
  if (FUNC_4(VAR_34)) {
   return (VAR_34);
  }

  VAR_33 = FUNC_5(VAR_26);
  if (VAR_32 == 0) {
   VAR_32 = VAR_31;
  }



  if (VAR_30 != VAR_22) {
   FUNC_10(VAR_26);
   VAR_26 = ((void*)0);
   VAR_30++;
   goto find_next_instance;
  }
 } else {

  if (FUNC_8()) {
   VAR_29 = sizeof(u64);
   VAR_27 =
       FUNC_2(VAR_20) +
       sizeof(struct acpi_table_header);
   VAR_28 =
       (u8)((VAR_20->header.length -
      sizeof(struct acpi_table_header))
     / VAR_29);
  } else {

   VAR_29 = sizeof(u32);
   VAR_27 =
       FUNC_2(VAR_19) +
       sizeof(struct acpi_table_header);
   VAR_28 =
       (u8)((VAR_19->header.length -
      sizeof(struct acpi_table_header))
     / VAR_29);
  }



  for (VAR_35 = 0; VAR_35 < VAR_28; ++VAR_35, VAR_27 += VAR_29) {
   if (FUNC_8()) {
    VAR_31 =
        (acpi_physical_address)(*FUNC_1
           (VAR_27));
   } else {
    VAR_31 =
        (acpi_physical_address)(*FUNC_0
           (VAR_27));
   }



   if (VAR_31 == 0) {
    continue;
   }

   VAR_34 =
       FUNC_9(VAR_31, ((void*)0), &VAR_26);
   if (FUNC_4(VAR_34)) {
    return (VAR_34);
   }
   VAR_33 = VAR_26->length;



   if (!FUNC_3
       (VAR_26->signature, VAR_21)) {
    FUNC_10(VAR_26);
    VAR_26 = ((void*)0);
    continue;
   }



   if (VAR_30 != VAR_22) {
    FUNC_10(VAR_26);
    VAR_26 = ((void*)0);
    VAR_30++;
    continue;
   }

   break;
  }
 }

exit_find_table:

 if (!VAR_26) {
  return (VAR_8);
 }

 if (VAR_33 == 0) {
  VAR_34 = VAR_6;
  goto exit;
 }



 VAR_25 = FUNC_6(1, VAR_33);
 if (!VAR_25) {
  VAR_34 = VAR_9;
  goto exit;
 }

 FUNC_7(VAR_25, VAR_26, VAR_33);
 *VAR_24 = VAR_31;
 *VAR_23 = VAR_25;

exit:
 FUNC_10(VAR_26);
 return (VAR_34);
}
