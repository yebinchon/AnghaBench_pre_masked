
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int acpi_status ;


 int FUNC_0 (char*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,scalar_t__*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static acpi_status
FUNC_4(char *VAR_3, char *VAR_4, u32 *VAR_5)
{



 if (FUNC_3(VAR_3) < VAR_0) {
  return (VAR_1);
 }



 if (FUNC_1((int)VAR_3[VAR_0])) {
  FUNC_2(&VAR_3[VAR_0], "%u", VAR_5);
 } else if (FUNC_3(VAR_3) != VAR_0) {
  return (VAR_1);
 } else {
  *VAR_5 = 0;
 }



 FUNC_0(VAR_4, VAR_3);
 return (VAR_2);
}
