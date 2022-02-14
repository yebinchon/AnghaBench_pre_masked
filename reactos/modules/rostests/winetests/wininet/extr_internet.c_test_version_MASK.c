
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int version ;
struct TYPE_3__ {int dwMajorVersion; int dwMinorVersion; } ;
typedef TYPE_1__ INTERNET_VERSION_INFO ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_1__*,int*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    INTERNET_VERSION_INFO VAR_1;
    DWORD VAR_2;
    BOOL VAR_3;

    VAR_2 = sizeof(VAR_1);
    VAR_3 = FUNC_1(((void*)0), VAR_0, &VAR_1, &VAR_2);
    FUNC_2(VAR_3, "Could not get version: %u\n", FUNC_0());
    FUNC_2(VAR_1.dwMajorVersion == 1, "dwMajorVersion=%d, expected 1\n", VAR_1.dwMajorVersion);
    FUNC_2(VAR_1.dwMinorVersion == 2, "dwMinorVersion=%d, expected 2\n", VAR_1.dwMinorVersion);
}
