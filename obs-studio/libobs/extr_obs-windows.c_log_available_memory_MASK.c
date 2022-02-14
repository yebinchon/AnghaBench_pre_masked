
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ms ;
struct TYPE_3__ {int dwLength; int ullTotalPhys; int ullAvailPhys; } ;
typedef TYPE_1__ MEMORYSTATUSEX ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_2(void)
{
 MEMORYSTATUSEX VAR_1;
 VAR_1.dwLength = sizeof(VAR_1);

 FUNC_0(&VAR_1);




 const char *VAR_2 = " (NOTE: 32bit programs cannot use more than 3gb)";


 FUNC_1(VAR_0, "Physical Memory: %luMB Total, %luMB Free%s",
      (DWORD)(VAR_1.ullTotalPhys / 1048576),
      (DWORD)(VAR_1.ullAvailPhys / 1048576), VAR_2);
}
