
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_button {int pushed; int device; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_1 ;

void
FUNC_3 (
 ACPI_HANDLE VAR_2,
 UINT32 VAR_3,
 void *VAR_4)
{
 struct acpi_button *VAR_5 = (struct acpi_button *) VAR_4;

 FUNC_1("acpi_button_notify");

 if (!VAR_5 || !VAR_5->device)
  VAR_1;

 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_5->device, VAR_3, ++VAR_5->pushed);
  break;
 default:
  FUNC_0((VAR_0,
   "Unsupported event [0x%x]\n", VAR_3));
  break;
 }

 VAR_1;
}
