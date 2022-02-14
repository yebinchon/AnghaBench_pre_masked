
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;



__attribute__((used)) static U64 FUNC_0 (U64 VAR_0)
{
    return ((VAR_0 << 56) & 0xff00000000000000ULL) |
            ((VAR_0 << 40) & 0x00ff000000000000ULL) |
            ((VAR_0 << 24) & 0x0000ff0000000000ULL) |
            ((VAR_0 << 8) & 0x000000ff00000000ULL) |
            ((VAR_0 >> 8) & 0x00000000ff000000ULL) |
            ((VAR_0 >> 24) & 0x0000000000ff0000ULL) |
            ((VAR_0 >> 40) & 0x000000000000ff00ULL) |
            ((VAR_0 >> 56) & 0x00000000000000ffULL);
}
