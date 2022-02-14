
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int member_0; TYPE_2__* member_1; } ;
struct TYPE_5__ {unsigned long long Value; } ;
struct TYPE_6__ {scalar_t__ Type; TYPE_1__ Integer; } ;
typedef int ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT_LIST ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int *,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
 ACPI_HANDLE VAR_5,
 ACPI_STRING VAR_6,
 ACPI_OBJECT_LIST *VAR_7,
 unsigned long long *VAR_8)
{
 ACPI_STATUS VAR_9 = VAR_4;
 ACPI_OBJECT VAR_10;
 ACPI_BUFFER VAR_11 = {sizeof(ACPI_OBJECT), &VAR_10};

 FUNC_2("acpi_evaluate_integer");

 if (!VAR_8)
  FUNC_5(VAR_3);

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, &VAR_11);
 if (FUNC_1(VAR_9)) {
  FUNC_4(VAR_5, VAR_6, VAR_9);
  FUNC_5(VAR_9);
 }

 if (VAR_10.Type != VAR_1) {
  FUNC_4(VAR_5, VAR_6, VAR_2);
  FUNC_5(VAR_2);
 }

 *VAR_8 = VAR_10.Integer.Value;

 FUNC_0((VAR_0, "Return value [%lu]\n", *VAR_8));

 FUNC_5(VAR_4);
}
