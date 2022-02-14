
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
    unsigned char *VAR_1 = (unsigned char *)VAR_0;
    unsigned int VAR_2;

    VAR_2 = (VAR_1[3] << 24) | (VAR_1[2] << 16) | (VAR_1[1] << 8) | VAR_1[0];
    return VAR_2;
}
