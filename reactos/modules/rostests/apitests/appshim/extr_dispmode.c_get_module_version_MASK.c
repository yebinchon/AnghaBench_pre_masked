
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwFileVersionMS; int dwProductVersionMS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef int LPVOID ;
typedef scalar_t__ HRSRC ;
typedef int HMODULE ;
typedef int HLOCAL ;
typedef int HGLOBAL ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int ,char*,int *,int *) ;

DWORD FUNC_12(HMODULE VAR_3)
{
    DWORD VAR_4 = 0;
    HRSRC VAR_5 = FUNC_1(VAR_3, FUNC_9(VAR_2), VAR_1);
    DWORD VAR_6 = FUNC_10(VAR_3, VAR_5);
    if (VAR_5 && VAR_6)
    {
        VS_FIXEDFILEINFO *VAR_7;
        UINT VAR_8;

        HGLOBAL VAR_9 = FUNC_5(VAR_3, VAR_5);
        LPVOID VAR_10 = FUNC_8(VAR_9);
        HLOCAL VAR_11 = FUNC_6(VAR_0, VAR_6);

        FUNC_0(VAR_11, VAR_10, VAR_6);
        FUNC_2(VAR_9);

        if (FUNC_11(VAR_11, L"\\", (LPVOID*)&VAR_7, &VAR_8))
        {
            VAR_4 = (FUNC_3(VAR_7->dwProductVersionMS) << 8) | FUNC_4(VAR_7->dwProductVersionMS);
            if (!VAR_4)
                VAR_4 = (FUNC_3(VAR_7->dwFileVersionMS) << 8) | FUNC_4(VAR_7->dwFileVersionMS);
        }

        FUNC_7(VAR_11);
    }

    return VAR_4;
}
