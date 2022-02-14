
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t UINT ;
typedef scalar_t__* PWSTR ;
typedef scalar_t__* PCWSTR ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,char*) ;
 size_t FUNC_4 (scalar_t__*) ;

PWSTR
FUNC_5(PCWSTR VAR_1,
              PCWSTR VAR_2,
              PCWSTR VAR_3)
{
    PWSTR VAR_4;
    UINT VAR_5;
    UINT VAR_6;
    UINT VAR_7;
    UINT VAR_8;

    VAR_4 = (PWSTR)FUNC_1(FUNC_0(), 0, VAR_0 * sizeof(WCHAR));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_7 = 0;
    VAR_8 = 0;

    FUNC_3(VAR_4, L"");

    while (VAR_8 < FUNC_4(VAR_1))
    {
        if (VAR_1[VAR_8] == VAR_3[0])
        {
            VAR_6 = 0;
            for (VAR_5 = VAR_8; VAR_5 < VAR_8 + FUNC_4(VAR_3); VAR_5++)
            {
                if (VAR_1[VAR_5] == VAR_3[VAR_6])
                {
                    VAR_6++;
                }
                else
                {
                    break;
                }

                if (FUNC_4(VAR_3) == VAR_6)
                {
                    FUNC_2(VAR_4, VAR_2);
                    VAR_7 = FUNC_4(VAR_4);
                    VAR_8 += FUNC_4(VAR_3) - 1;
                    break;
                }
            }
        }
        else
        {
            VAR_4[VAR_7++] = VAR_1[VAR_8];
            VAR_4[VAR_7] = L'\0';
        }

        VAR_8++;
    }

    return VAR_4;
}
