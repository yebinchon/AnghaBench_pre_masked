
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int const* PWSTR ;
typedef int const* LPWSTR ;
typedef int HLOCAL ;
typedef int DEVINSTID_W ;
typedef int DEVINST ;
typedef scalar_t__ CONFIGRET ;


 scalar_t__ FUNC_0 (int ,int const*,int,int ) ;
 scalar_t__ FUNC_1 (int*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static PWSTR
FUNC_6(const WCHAR *VAR_3)
{
    DEVINST VAR_4;
    CONFIGRET VAR_5;
    ULONG VAR_6;
    LPWSTR VAR_7 = ((void*)0);

    FUNC_3("CDevSettings::GetDeviceInstanceId(%ws) UNIMPLEMENTED!\n", VAR_3);

    VAR_5 = FUNC_2(&VAR_4,
                            (DEVINSTID_W)VAR_3,
                            VAR_0);
    if (VAR_5 == VAR_1)
    {
        FUNC_3("Success1\n");
        VAR_5 = FUNC_1(&VAR_6,
                                   VAR_4,
                                   0);
        if (VAR_5 == VAR_1)
        {
            FUNC_3("Success2\n");
            VAR_7 = FUNC_4(VAR_2,
                                     (VAR_6 + 1) * sizeof(WCHAR));

            if (VAR_7 != ((void*)0))
            {
                FUNC_3("Success3\n");
                VAR_5 = FUNC_0(VAR_4,
                                       VAR_7,
                                       VAR_6,
                                       0);

                if (VAR_5 != VAR_1)
                {
                    FUNC_5((HLOCAL)VAR_7);
                    VAR_7 = ((void*)0);
                }
                FUNC_3("instance id: %ws\n", VAR_7);
            }
        }
    }

    return VAR_7;
}
