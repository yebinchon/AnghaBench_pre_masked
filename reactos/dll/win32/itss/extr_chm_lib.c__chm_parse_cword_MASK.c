
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int UChar ;



__attribute__((used)) static UInt64 FUNC_0(UChar **VAR_0)
{
    UInt64 VAR_1 = 0;
    UChar VAR_2;
    while ((VAR_2=*(*VAR_0)++) >= 0x80)
    {
        VAR_1 <<= 7;
        VAR_1 += VAR_2 & 0x7f;
    }

    return (VAR_1 << 7) + VAR_2;
}
