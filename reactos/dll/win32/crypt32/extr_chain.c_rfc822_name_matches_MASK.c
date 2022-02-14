
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,char) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_2, LPCWSTR VAR_3,
 DWORD *VAR_4)
{
    BOOL VAR_5 = VAR_1;
    LPCWSTR VAR_6;

    FUNC_0("%s, %s\n", FUNC_1(VAR_2), FUNC_1(VAR_3));

    if (!VAR_2)
        *VAR_4 |= VAR_0;
    else if (!VAR_3)
        ;
    else if (FUNC_4(VAR_2, '@'))
        VAR_5 = !FUNC_3(VAR_2, VAR_3);
    else
    {
        if ((VAR_6 = FUNC_4(VAR_3, '@')))
            VAR_5 = FUNC_2(VAR_2, VAR_6 + 1);
        else
            VAR_5 = !FUNC_3(VAR_2, VAR_3);
    }
    return VAR_5;
}
