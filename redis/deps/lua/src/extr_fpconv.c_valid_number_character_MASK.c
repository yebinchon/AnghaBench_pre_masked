
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(char VAR_0)
{
    char VAR_1;

    if ('0' <= VAR_0 && VAR_0 <= '9')
        return 1;
    if (VAR_0 == '-' || VAR_0 == '+' || VAR_0 == '.')
        return 1;


    VAR_1 = VAR_0 | 0x20;
    if ('a' <= VAR_1 && VAR_1 <= 'y')
        return 1;

    return 0;
}
