
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPCSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_2(LPCSTR VAR_2, LPCSTR VAR_3)
{
    DWORD VAR_4 = FUNC_1(VAR_2);
    DWORD VAR_5;

    while (*VAR_3)
    {
        VAR_5 = FUNC_1(VAR_3);

        if (VAR_5 == VAR_4)
        {
            if (!FUNC_0(VAR_2, VAR_3))
                return VAR_1;
        }

        VAR_3 += VAR_5 + 1;
    }

    return VAR_0;
}
