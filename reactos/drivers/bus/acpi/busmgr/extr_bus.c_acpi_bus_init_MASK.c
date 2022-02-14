
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int) ;

int
FUNC_13 (void)
{
 int VAR_10 = 0;
 ACPI_STATUS VAR_11 = VAR_5;

 FUNC_6("acpi_bus_init\n");

        FUNC_8(&VAR_9, VAR_6, ((void*)0));

 VAR_11 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_11)) {
  FUNC_7("Unable to start the ACPI Interpreter\n");
  goto error1;
 }
 VAR_11 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_11)) {
  FUNC_7("Unable to initialize ACPI objects\n");
  goto error1;
 }
 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_7, ((void*)0));
 if (FUNC_0(VAR_11)) {
  FUNC_7("Unable to register for device notifications\n");
  VAR_10 = VAR_4;
  goto error1;
 }




 VAR_10 = FUNC_9(&VAR_8, ((void*)0), VAR_2,
  VAR_0);
 if (VAR_10)
  goto error2;





 VAR_10 = FUNC_11(VAR_8);
 if (VAR_10)
  FUNC_7("acpi_bus_scan_fixed failed\n");
 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10)
  FUNC_7("acpi_bus_scan failed\n");

 FUNC_12(0);


error2:
 FUNC_4(VAR_2,
  VAR_3, VAR_7);
error1:
 FUNC_5();
 FUNC_12(VAR_4);
}
