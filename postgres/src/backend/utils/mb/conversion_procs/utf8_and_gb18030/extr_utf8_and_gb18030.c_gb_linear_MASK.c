
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static inline uint32
FUNC_0(uint32 VAR_0)
{
 uint32 VAR_1 = (VAR_0 & 0xff000000) >> 24;
 uint32 VAR_2 = (VAR_0 & 0x00ff0000) >> 16;
 uint32 VAR_3 = (VAR_0 & 0x0000ff00) >> 8;
 uint32 VAR_4 = (VAR_0 & 0x000000ff);

 return VAR_1 * 12600 + VAR_2 * 1260 + VAR_3 * 10 + VAR_4 -
  (0x81 * 12600 + 0x30 * 1260 + 0x81 * 10 + 0x30);
}
