
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__*,int ,scalar_t__*) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_9)
{
    HKEY VAR_10;
    DWORD VAR_11;
    DWORD VAR_12 = VAR_7;
    DWORD VAR_13 = sizeof(DWORD);

    if (FUNC_1(VAR_4,
                     VAR_8,
                     0,
                     VAR_6,
                     &VAR_10) == VAR_2)
    {
        if (FUNC_2(VAR_10,
                            FUNC_4("ReportAsWorkstation"),
                            0,
                            &VAR_12,
                            (LPBYTE)&VAR_11,
                            &VAR_13) == VAR_2)
        {
            if (VAR_11 != VAR_3)
            {

                FUNC_3(VAR_9,
                                    VAR_5,
                                    VAR_0,
                                    VAR_1,
                                    0);
            }
        }

        FUNC_0(VAR_10);
    }
}
