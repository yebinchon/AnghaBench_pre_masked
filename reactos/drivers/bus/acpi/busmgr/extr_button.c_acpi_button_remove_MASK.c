
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_button {int type; int handle; } ;
typedef int ACPI_STATUS ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int const,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct acpi_button*,char) ;
 int VAR_4 ;
 int VAR_5 ;
 struct acpi_button* FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8 (struct acpi_device *VAR_6, int VAR_7)
{
 ACPI_STATUS VAR_8 = 0;
 struct acpi_button *VAR_9 = ((void*)0);

 FUNC_2("acpi_button_remove");

 if (!VAR_6 || !FUNC_6(VAR_6))
  FUNC_7(-1);

 VAR_9 = FUNC_6(VAR_6);


 switch (VAR_9->type) {
 case 129:
  VAR_8 = FUNC_3(
   VAR_2, VAR_5);
  break;
 case 128:
  VAR_8 = FUNC_3(
   VAR_3, VAR_5);
  break;
 case 130:
  VAR_8 = FUNC_3(
   130, VAR_5);
  break;
 default:
  VAR_8 = FUNC_4(VAR_9->handle,
   VAR_1, VAR_4);
  break;
 }

 if (FUNC_1(VAR_8))
  FUNC_0((VAR_0,
   "Error removing notify handler\n"));

 FUNC_5(VAR_9, 'IPCA');

 FUNC_7(0);
}
