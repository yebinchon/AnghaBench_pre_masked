
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static LPWSTR FUNC_2(LPCWSTR VAR_2, LPCWSTR VAR_3)
{
    INT VAR_4, VAR_5, VAR_6;

    VAR_5 = FUNC_1(VAR_2);
    VAR_6 = FUNC_1(VAR_3);
    for(VAR_4 = 0; VAR_4 <= VAR_5 - VAR_6; VAR_4++)
    {
        if (FUNC_0(VAR_0, VAR_1,
                           VAR_2 + VAR_4, VAR_6, VAR_3, VAR_6) == 2)
            return (LPWSTR) (VAR_2 + VAR_4);
    }
    return ((void*)0);
}
