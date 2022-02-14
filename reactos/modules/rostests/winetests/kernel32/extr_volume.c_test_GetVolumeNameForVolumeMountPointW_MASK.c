
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume ;
typedef char WCHAR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_5;
    WCHAR VAR_6[VAR_3], VAR_7[] = {'c',':','\\',0};
    DWORD VAR_8 = sizeof(VAR_6) / sizeof(WCHAR);


    if (!&FUNC_2) {
        FUNC_3("GetVolumeNameForVolumeMountPointW not found\n");
        return;
    }

    VAR_5 = FUNC_2(VAR_7, VAR_6, 0);
    FUNC_1(VAR_5 == VAR_2, "GetVolumeNameForVolumeMountPointW succeeded\n");
    FUNC_1(FUNC_0() == VAR_0 ||
        FUNC_0() == VAR_1,
        "wrong error, last=%d\n", FUNC_0());

    if (0) {
    VAR_5 = FUNC_2(VAR_7, ((void*)0), VAR_8);
    FUNC_1(VAR_5 == VAR_2, "GetVolumeNameForVolumeMountPointW succeeded\n");

    VAR_5 = FUNC_2(((void*)0), VAR_6, VAR_8);
    FUNC_1(VAR_5 == VAR_2, "GetVolumeNameForVolumeMountPointW succeeded\n");
    }

    VAR_5 = FUNC_2(VAR_7, VAR_6, VAR_8);
    FUNC_1(VAR_5 == VAR_4, "GetVolumeNameForVolumeMountPointW failed\n");
}
