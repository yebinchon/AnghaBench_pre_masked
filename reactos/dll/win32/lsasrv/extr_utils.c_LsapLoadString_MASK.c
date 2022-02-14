
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UINT ;
typedef scalar_t__* LPWSTR ;
typedef int INT ;
typedef int HRSRC ;
typedef int HINSTANCE ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (int,scalar_t__) ;

INT
FUNC_7(HINSTANCE VAR_1,
               UINT VAR_2,
               LPWSTR VAR_3,
               INT VAR_4)
{
    HGLOBAL VAR_5;
    HRSRC VAR_6;
    WCHAR *VAR_7;
    int VAR_8;
    int VAR_9;


    VAR_6 = FUNC_0(VAR_1,
                          FUNC_4((FUNC_1(VAR_2) >> 4) + 1),
                          (LPWSTR)VAR_0);
    if (!VAR_6)
        return 0;

    VAR_5 = FUNC_2(VAR_1, VAR_6);
    if (!VAR_5)
        return 0;

    VAR_7 = FUNC_3(VAR_5);
    VAR_8 = VAR_2 & 0x000f;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        VAR_7 += *VAR_7 + 1;

    VAR_9 = FUNC_6(VAR_4 - 1, *VAR_7);
    if (VAR_9 > 0)
    {
        FUNC_5(VAR_3, VAR_7 + 1, VAR_9 * sizeof(WCHAR));
        VAR_3[VAR_9] = 0;
    }
    else
    {
        if (VAR_4 > 1)
        {
            VAR_3[0] = 0;
            return 0;
        }
    }

    return VAR_9;
}
