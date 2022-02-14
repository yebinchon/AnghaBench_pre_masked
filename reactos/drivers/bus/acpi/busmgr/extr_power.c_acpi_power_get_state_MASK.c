
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_name ;
struct TYPE_3__ {int member_0; char* member_1; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int *,unsigned long long*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5 (
 ACPI_HANDLE VAR_5,
 int *VAR_6)
{
 ACPI_STATUS VAR_7 = VAR_4;
 unsigned long long VAR_8 = 0;
 char VAR_9[5];
 ACPI_BUFFER VAR_10 = { sizeof(VAR_9), VAR_9 };


 if (!VAR_5 || !VAR_6)
  FUNC_4(-1);

 VAR_7 = FUNC_3(VAR_5, "_STA", ((void*)0), &VAR_8);
 if (FUNC_1(VAR_7))
  FUNC_4(-15);

 *VAR_6 = (VAR_8 & 0x01)?VAR_2:
         VAR_1;

 FUNC_2(VAR_5, VAR_3, &VAR_10);

 FUNC_0((VAR_0, "Resource [%s] is %s\n",
  VAR_9, *VAR_6?"on":"off"));

 return 0;
}
