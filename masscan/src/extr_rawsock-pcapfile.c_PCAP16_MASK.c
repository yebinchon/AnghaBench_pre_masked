
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned VAR_0, const unsigned char *VAR_1)
{
    switch (VAR_0) {
    case 129: return VAR_1[0]*256 + VAR_1[1];
    case 128: return VAR_1[1]*256 + VAR_1[0];
    default: return (unsigned)0xa3a3;
    }
}
