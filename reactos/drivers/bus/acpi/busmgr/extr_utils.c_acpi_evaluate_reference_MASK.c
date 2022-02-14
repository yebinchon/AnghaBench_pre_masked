
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct acpi_handle_list {size_t count; scalar_t__* handles; } ;
typedef size_t UINT32 ;
struct TYPE_9__ {scalar_t__ Length; scalar_t__ Pointer; int * member_1; int member_0; } ;
struct TYPE_7__ {scalar_t__ Handle; } ;
struct TYPE_6__ {scalar_t__ Count; TYPE_3__* Elements; } ;
struct TYPE_8__ {scalar_t__ Type; TYPE_2__ Reference; int type; TYPE_1__ Package; } ;
typedef int ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int *,TYPE_4__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
 ACPI_HANDLE VAR_11,
 ACPI_STRING VAR_12,
 ACPI_OBJECT_LIST *VAR_13,
 struct acpi_handle_list *VAR_14)
{
 ACPI_STATUS VAR_15 = VAR_10;
 ACPI_OBJECT *VAR_16 = ((void*)0);
 ACPI_OBJECT *VAR_17 = ((void*)0);
 ACPI_BUFFER VAR_18 = {VAR_0, ((void*)0)};
 UINT32 VAR_19 = 0;

 FUNC_2("acpi_evaluate_reference");

 if (!VAR_14) {
  FUNC_6(VAR_7);
 }



 VAR_15 = FUNC_3(VAR_11, VAR_12, VAR_13, &VAR_18);
 if (FUNC_1(VAR_15))
  goto end;

 VAR_16 = (ACPI_OBJECT *) VAR_18.Pointer;

 if ((VAR_18.Length == 0) || !VAR_16) {
  FUNC_0((VAR_1,
   "No return object (len %X ptr %p)\n",
   VAR_18.Length, VAR_16));
  VAR_15 = VAR_6;
  FUNC_5(VAR_11, VAR_12, VAR_15);
  goto end;
 }
 if (VAR_16->Type != VAR_5) {
  FUNC_0((VAR_1,
   "Expecting a [Package], found type %X\n",
   VAR_16->Type));
  VAR_15 = VAR_6;
  FUNC_5(VAR_11, VAR_12, VAR_15);
  goto end;
 }
 if (!VAR_16->Package.Count) {
  FUNC_0((VAR_1,
   "[Package] has zero elements (%p)\n",
   VAR_16));
  VAR_15 = VAR_6;
  FUNC_5(VAR_11, VAR_12, VAR_15);
  goto end;
 }

 if (VAR_16->Package.Count > VAR_3) {
  return VAR_8;
 }
 VAR_14->count = VAR_16->Package.Count;



 for (VAR_19 = 0; VAR_19 < VAR_14->count; VAR_19++) {

  VAR_17 = &(VAR_16->Package.Elements[VAR_19]);

  if (VAR_17->Type != VAR_4) {
   VAR_15 = VAR_6;
   FUNC_0((VAR_1,
    "Expecting a [Reference] package element, found type %X\n",
    VAR_17->type));
   FUNC_5(VAR_11, VAR_12, VAR_15);
   break;
  }

  if (!VAR_17->Reference.Handle) {
   FUNC_0((VAR_1, "Invalid reference in"
          " package %s\n", VAR_12));
   VAR_15 = VAR_9;
   break;
  }


  VAR_14->handles[VAR_19] = VAR_17->Reference.Handle;
  FUNC_0((VAR_2, "Found reference [%p]\n",
   VAR_14->handles[VAR_19]));
 }

end:
 if (FUNC_1(VAR_15)) {
  VAR_14->count = 0;

 }

    if (VAR_18.Pointer)
        FUNC_4(VAR_18.Pointer);

 FUNC_6(VAR_15);
}
