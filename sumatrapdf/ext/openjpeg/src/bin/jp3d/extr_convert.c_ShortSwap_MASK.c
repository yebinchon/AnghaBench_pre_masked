
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short FUNC_0(unsigned short VAR_0)
{
    unsigned char VAR_1, VAR_2;
    VAR_1 = VAR_0 & 0xff;
    VAR_2 = (VAR_0 >> 8) & 0xff;
    return (VAR_1 << 8) + VAR_2;
}
