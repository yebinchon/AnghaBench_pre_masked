
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned VAR_0)
{
    union
    {
        unsigned val;
        char c[4];
    } VAR_1;

    VAR_1.val = VAR_0;
    return (VAR_1.c[0] << 24) | (VAR_1.c[1] << 16) | (VAR_1.c[2] << 8) | VAR_1.c[3];
}
