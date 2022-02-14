
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static inline uint32
FUNC_0(uint32 VAR_0)
{
 uint32 VAR_1;

 if (VAR_0 <= 0x7F)
 {
  VAR_1 = VAR_0;
 }
 else if (VAR_0 <= 0x7FF)
 {
  VAR_1 = (0xC0 | ((VAR_0 >> 6) & 0x1F)) << 8;
  VAR_1 |= 0x80 | (VAR_0 & 0x3F);
 }
 else if (VAR_0 <= 0xFFFF)
 {
  VAR_1 = (0xE0 | ((VAR_0 >> 12) & 0x0F)) << 16;
  VAR_1 |= (0x80 | ((VAR_0 >> 6) & 0x3F)) << 8;
  VAR_1 |= 0x80 | (VAR_0 & 0x3F);
 }
 else
 {
  VAR_1 = (0xF0 | ((VAR_0 >> 18) & 0x07)) << 24;
  VAR_1 |= (0x80 | ((VAR_0 >> 12) & 0x3F)) << 16;
  VAR_1 |= (0x80 | ((VAR_0 >> 6) & 0x3F)) << 8;
  VAR_1 |= 0x80 | (VAR_0 & 0x3F);
 }

 return VAR_1;
}
