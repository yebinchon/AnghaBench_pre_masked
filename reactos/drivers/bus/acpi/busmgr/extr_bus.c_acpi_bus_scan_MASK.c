
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ present; } ;
struct acpi_device {TYPE_1__ status; struct acpi_device* parent; scalar_t__ handle; } ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT_TYPE ;
typedef scalar_t__ ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;

 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (struct acpi_device**,struct acpi_device*,scalar_t__,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7 (
 struct acpi_device *VAR_8)
{
 ACPI_STATUS VAR_9 = VAR_7;
 struct acpi_device *VAR_10 = ((void*)0);
 struct acpi_device *VAR_11 = ((void*)0);
 ACPI_HANDLE VAR_12 = 0;
 ACPI_HANDLE VAR_13 = 0;
 ACPI_OBJECT_TYPE VAR_14 = 0;
 UINT32 VAR_15 = 1;

 if (!VAR_8)
  FUNC_6(VAR_6);

 VAR_10 = VAR_8;
 VAR_12 = VAR_8->handle;





 while ((VAR_15 > 0) && VAR_10) {

  VAR_9 = FUNC_2(VAR_4, VAR_12,
   VAR_13, &VAR_13);




  if (FUNC_0(VAR_9)) {
   VAR_15--;
   VAR_13 = VAR_12;
   FUNC_3(VAR_12, &VAR_12);
   if (VAR_10->parent)
    VAR_10 = VAR_10->parent;
   continue;
  }

  VAR_9 = FUNC_4(VAR_13, &VAR_14);
  if (FUNC_0(VAR_9))
   continue;




  if (VAR_14 == VAR_5) {
   VAR_15++;
   VAR_12 = VAR_13;
   VAR_13 = 0;
   continue;
  }




  switch (VAR_14) {
  case 131:
   VAR_14 = VAR_0;
   break;
  case 129:
   VAR_14 = VAR_2;
   break;
  case 128:
   VAR_14 = VAR_3;
   break;
  case 130:
   VAR_14 = VAR_1;
   break;
  default:
   continue;
  }

  VAR_9 = FUNC_5(&VAR_11, VAR_10, VAR_13, VAR_14);
  if (FUNC_0(VAR_9))
   continue;
  if (VAR_11->status.present) {
   VAR_9 = FUNC_2(VAR_4, VAR_13,
    0, ((void*)0));
   if (FUNC_1(VAR_9)) {
    VAR_15++;
    VAR_12 = VAR_13;
    VAR_13 = 0;
    VAR_10 = VAR_11;
   }
  }
 }

 FUNC_6(0);
}
