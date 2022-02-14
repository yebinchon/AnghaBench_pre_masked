
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uint ;



__attribute__((used)) static uint
FUNC_0(const ushort *VAR_0)
{
    uint VAR_1 = VAR_0[0];
    if (0xD800 <= VAR_0[0] && VAR_0[0] <= 0xDBFF)
        VAR_1 = ((VAR_0[0] & 0x3FF) << 10) + (VAR_0[1] & 0x3FF) + 0x10000;
    return VAR_1;
}
