
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {int dwCrashDumpEnabled; scalar_t__ szDumpFile; scalar_t__ szMinidumpDir; } ;
typedef TYPE_1__* PSTARTINFO ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_7, PSTARTINFO VAR_8)
{
    if (VAR_8->dwCrashDumpEnabled == 0)
    {

        FUNC_0(FUNC_1(VAR_7, VAR_3), VAR_1);
        FUNC_0(FUNC_1(VAR_7, VAR_4), VAR_1);
    }
    else if (VAR_8->dwCrashDumpEnabled == 3)
    {

        FUNC_0(FUNC_1(VAR_7, VAR_3), VAR_5);
        FUNC_0(FUNC_1(VAR_7, VAR_4), VAR_1);
        FUNC_3(FUNC_1(VAR_7, VAR_3), VAR_6, (WPARAM)0, (LPARAM)VAR_8->szMinidumpDir);
    }
    else if (VAR_8->dwCrashDumpEnabled == 1 || VAR_8->dwCrashDumpEnabled == 2)
    {

        FUNC_0(FUNC_1(VAR_7, VAR_3), VAR_5);
        FUNC_0(FUNC_1(VAR_7, VAR_4), VAR_5);
        FUNC_3(FUNC_1(VAR_7, VAR_3), VAR_6, (WPARAM)0, (LPARAM)VAR_8->szDumpFile);
    }
    FUNC_2(VAR_7, VAR_2, VAR_0, (WPARAM)VAR_8->dwCrashDumpEnabled, (LPARAM)0);
}
