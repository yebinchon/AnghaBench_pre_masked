
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 () ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_9 (void)
{
 ACPI_STATUS VAR_7 = VAR_3;

 FUNC_3("acpi_bus_exit\n");

 VAR_7 = FUNC_1(VAR_1,
  VAR_2, VAR_4);
 if (FUNC_0(VAR_7))
  FUNC_3("Error removing notify handler\n");
 FUNC_8();

 FUNC_4(VAR_5, VAR_0);

 VAR_7 = FUNC_2();
 if (FUNC_0(VAR_7))
  FUNC_3("Unable to terminate the ACPI Interpreter\n");
 else
  FUNC_3("Interpreter disabled\n");

 VAR_6;
}
