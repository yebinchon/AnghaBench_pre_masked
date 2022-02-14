
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static inline uint32
FUNC_0(uint32 VAR_0)
{
 uint32 VAR_1 = 0x81 + VAR_0 / 12600;
 uint32 VAR_2 = 0x30 + (VAR_0 / 1260) % 10;
 uint32 VAR_3 = 0x81 + (VAR_0 / 10) % 126;
 uint32 VAR_4 = 0x30 + VAR_0 % 10;

 return (VAR_1 << 24) | (VAR_2 << 16) | (VAR_3 << 8) | VAR_4;
}
