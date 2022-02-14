
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
DWORD
FUNC_0(
    LONG VAR_1,
    LONG VAR_2)
{
    LONG VAR_3;

    VAR_3 = VAR_1 + VAR_2;
    if (VAR_3 < 0)
        VAR_3 += VAR_0;
    else if (VAR_3 > VAR_0)
        VAR_3 -= VAR_0;

    return (DWORD)VAR_3;
}
