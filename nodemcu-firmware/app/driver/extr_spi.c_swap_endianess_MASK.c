
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32 FUNC_0(uint32 VAR_0)
{
    return ((VAR_0 & 0xff) << 24) |
            ((VAR_0 & 0xff00) << 8) |
            ((VAR_0 & 0xff0000UL) >> 8) |
            ((VAR_0 & 0xff000000UL) >> 24);
}
