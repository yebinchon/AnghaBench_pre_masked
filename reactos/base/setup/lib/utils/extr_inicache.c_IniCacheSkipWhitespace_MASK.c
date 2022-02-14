
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PCHAR ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static
PCHAR
FUNC_1(
    PCHAR VAR_0)
{
    while (*VAR_0 != 0 && FUNC_0(*VAR_0))
        VAR_0++;

    return (*VAR_0 == 0) ? ((void*)0) : VAR_0;
}
