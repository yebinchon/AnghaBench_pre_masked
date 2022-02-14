
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(HWND VAR_2)
{
    if (!VAR_1)
        VAR_1 = VAR_2;
    if (!VAR_0 && VAR_2 != VAR_1)
        VAR_0 = VAR_2;

    if (VAR_2 == VAR_1)
        return 1;
    else if (VAR_2 == VAR_0)
        return 2;
    return 0;
}
