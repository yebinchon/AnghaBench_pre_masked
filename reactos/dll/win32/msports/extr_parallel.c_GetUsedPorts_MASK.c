
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szDosDeviceName ;
typedef int WCHAR ;
typedef int VOID ;
typedef int * PWSTR ;
typedef int* PDWORD ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;

__attribute__((used)) static
VOID
FUNC_9(
    PDWORD VAR_4)
{
    WCHAR VAR_5[64];
    WCHAR VAR_6[64];
    DWORD VAR_7, VAR_8, VAR_9;
    DWORD VAR_10, VAR_11;
    PWSTR VAR_12;
    HKEY VAR_13;
    DWORD VAR_14;

    *VAR_4 = 0;

    VAR_14 = FUNC_3(VAR_1,
                            L"Hardware\\DeviceMap\\PARALLEL PORTS",
                            0,
                            VAR_2,
                            &VAR_13);
    if (VAR_14 == VAR_0)
    {
        for (VAR_7 = 0; ; VAR_7++)
        {
            VAR_10 = FUNC_0(VAR_5);
            VAR_11 = sizeof(VAR_6);
            VAR_14 = FUNC_2(VAR_13,
                                    VAR_7,
                                    VAR_5,
                                    &VAR_10,
                                    ((void*)0),
                                    &VAR_8,
                                    (LPBYTE)VAR_6,
                                    &VAR_11);
            if (VAR_14 != VAR_0)
                break;

            if (VAR_8 == VAR_3)
            {
                FUNC_4("%S --> %S\n", VAR_5, VAR_6);
                if (FUNC_5(VAR_6, L"\\DosDevices\\LPT", FUNC_7(L"\\DosDevices\\LPT")) == 0)
                {
                     VAR_12 = VAR_6 + FUNC_7(L"\\DosDevices\\LPT");
                     if (FUNC_6(VAR_12, L'.') == ((void*)0))
                     {
                         FUNC_4("Device number %S\n", VAR_12);
                         VAR_9 = FUNC_8(VAR_12, ((void*)0), 10);
                         if (VAR_9 != 0)
                         {
                             *VAR_4 |=(1 << VAR_9);
                         }
                     }
                }
            }
        }

        FUNC_1(VAR_13);
    }

    FUNC_4("Done\n");
}
