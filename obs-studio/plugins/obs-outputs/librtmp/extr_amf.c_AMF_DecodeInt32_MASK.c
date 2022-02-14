
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int
FUNC_0(const char *VAR_0)
{
    unsigned char *VAR_1 = (unsigned char *)VAR_0;
    unsigned int VAR_2;
    VAR_2 = (VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8) | VAR_1[3];
    return VAR_2;
}
