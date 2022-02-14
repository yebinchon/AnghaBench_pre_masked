
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_physical_address ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;
 int FUNC_3 (char*,char*,unsigned long long*) ;

__attribute__((used)) static acpi_physical_address
FUNC_4(FILE * VAR_1, const char *VAR_2)
{
 char VAR_3[80];
 unsigned long long VAR_4 = 0;
 char VAR_5[32];

 FUNC_2(VAR_5, 32, "%s=%s", VAR_2, "%llx");
 FUNC_1(VAR_1, 0, VAR_0);
 while (FUNC_0(VAR_3, 80, VAR_1)) {
  if (FUNC_3(VAR_3, VAR_5, &VAR_4) == 1) {
   break;
  }
 }

 return ((acpi_physical_address)(VAR_4));
}
