
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PWSTR ;
typedef int* PINT ;
typedef scalar_t__ PCWSTR ;


 int FUNC_0 (scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static PCWSTR
FUNC_1(PCWSTR VAR_0, PINT VAR_1)
{
    PWSTR VAR_2 = ((void*)0);

    *VAR_1 = FUNC_0(VAR_0, &VAR_2, 10);
    if (VAR_2 == VAR_0)
    {
        *VAR_1 = -1;
        return ((void*)0);
    }

    return VAR_2;
}
