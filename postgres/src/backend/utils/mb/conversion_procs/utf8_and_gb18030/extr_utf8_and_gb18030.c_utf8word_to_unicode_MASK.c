
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
 else if (VAR_0 <= 0xFFFF)
 {
  VAR_1 = ((VAR_0 >> 8) & 0x1F) << 6;
  VAR_1 |= VAR_0 & 0x3F;
 }
 else if (VAR_0 <= 0xFFFFFF)
 {
  VAR_1 = ((VAR_0 >> 16) & 0x0F) << 12;
  VAR_1 |= ((VAR_0 >> 8) & 0x3F) << 6;
  VAR_1 |= VAR_0 & 0x3F;
 }
 else
 {
  VAR_1 = ((VAR_0 >> 24) & 0x07) << 18;
  VAR_1 |= ((VAR_0 >> 16) & 0x3F) << 12;
  VAR_1 |= ((VAR_0 >> 8) & 0x3F) << 6;
  VAR_1 |= VAR_0 & 0x3F;
 }

 return VAR_1;
}
