
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint32 ;


 scalar_t__ FUNC_0 (char) ;

uint32_t FUNC_1(char *VAR_0)
{
    uint32 VAR_1 = 0;

    while (FUNC_0(*VAR_0))
    {
        VAR_1 = VAR_1 * 10 + *VAR_0++ - '0';
    }

    return VAR_1;
}
