
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int dwMajorVersion; int dwMinorVersion; int wFlags; } ;
typedef TYPE_1__ VersionLieInfo ;
typedef int * PHOOKAPI ;
typedef int LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,int ,int*) ;
 int VAR_3 ;
 int FUNC_2 (int,char*,...) ;
 int * FUNC_3 (char*,int *,int*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__ const*,int ,int) ;
 int FUNC_6 (int *,TYPE_1__ const*,int ,int) ;
 int FUNC_7 (int *,TYPE_1__ const*,int ,int,int) ;

__attribute__((used)) static void FUNC_8(LPCSTR VAR_4, const VersionLieInfo* VAR_5)
{
    DWORD VAR_6 = 0;
    WCHAR VAR_7[50] = { 0 };
    PHOOKAPI VAR_8;
    DWORD VAR_9;
    FUNC_0(VAR_0, 0, VAR_4, -1, VAR_7, 50);
    VAR_8 = FUNC_3("", VAR_7, &VAR_6);
    VAR_9 = (VAR_5->dwMajorVersion << 8) | VAR_5->dwMinorVersion;
    if (VAR_8 == ((void*)0))
    {
        FUNC_4("Skipping tests for layers (%s) not present in this os (0x%x)\n", VAR_4, VAR_3);
        return;
    }
    FUNC_2(VAR_8 != ((void*)0), "Expected hook to be a valid pointer for %s\n", VAR_4);
    if (VAR_5->wFlags & VAR_1)
    {
        FUNC_2(VAR_6 == 3, "Expected num_shims to be 3, was: %u for %s\n", VAR_6, VAR_4);
        if (VAR_8 && VAR_6 == 3)
        {
            int VAR_10 = 0;
            FUNC_1(VAR_8 + 0, "KERNEL32.DLL", "GetVersion", VAR_4, &VAR_10);
            FUNC_5(VAR_8 + 0, VAR_5, VAR_4, VAR_10);
            FUNC_1(VAR_8 + 1, "KERNEL32.DLL", "GetVersionExA", VAR_4, &VAR_10);
            FUNC_6(VAR_8 + 1, VAR_5, VAR_4, VAR_10);
            FUNC_1(VAR_8 + 2, "KERNEL32.DLL", "GetVersionExW", VAR_4, &VAR_10);
            FUNC_7(VAR_8 + 2, VAR_5, VAR_4, VAR_10, 0);
        }
    }
    else
    {
        int VAR_11 = VAR_6 == 4 || ((VAR_9 < VAR_2) && (VAR_6 == 3));
        FUNC_2(VAR_11, "Expected num_shims to be 4%s, was: %u for %s\n", ((VAR_9 < VAR_2) ? " or 3":""), VAR_6, VAR_4);
        if (VAR_8 && VAR_11)
        {
            int VAR_12 = 0;
            FUNC_1(VAR_8 + 0, "KERNEL32.DLL", "GetVersionExA", VAR_4, &VAR_12);
            FUNC_6(VAR_8 + 0, VAR_5, VAR_4, VAR_12);
            FUNC_1(VAR_8 + 1, "KERNEL32.DLL", "GetVersionExW", VAR_4, &VAR_12);
            FUNC_7(VAR_8 + 1, VAR_5, VAR_4, VAR_12, 0);
            FUNC_1(VAR_8 + 2, "KERNEL32.DLL", "GetVersion", VAR_4, &VAR_12);
            FUNC_5(VAR_8 + 2, VAR_5, VAR_4, VAR_12);
            if (VAR_6 == 4)
            {
                FUNC_1(VAR_8 + 3, "NTDLL.DLL", "RtlGetVersion", VAR_4, &VAR_12);
                FUNC_7(VAR_8 + 3, VAR_5, VAR_4, VAR_12, 1);
            }
        }
    }
}
