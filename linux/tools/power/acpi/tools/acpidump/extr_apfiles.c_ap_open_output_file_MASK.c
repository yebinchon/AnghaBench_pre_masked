
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_FILE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

int FUNC_3(char *VAR_3)
{
 ACPI_FILE VAR_4;



 if (FUNC_0(VAR_3) != 0) {
  return (-1);
 }



 VAR_4 = FUNC_1(VAR_3, "w");
 if (!VAR_4) {
  FUNC_2(VAR_2, "Could not open output file: %s\n", VAR_3);
  return (-1);
 }



 VAR_0 = VAR_4;
 VAR_1 = VAR_3;
 return (0);
}
