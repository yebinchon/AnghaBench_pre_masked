
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static inline unsigned char
FUNC_0(unsigned char VAR_1)
{
    VAR_1 &= 0xff;
    return (VAR_1 & 0x80) ? (0xD5 ^ (VAR_0[0xFF ^ VAR_1] - 1)) : (0x55 ^ (VAR_0[0x7F ^ VAR_1] - 1));
}
