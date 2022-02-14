
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static uint8 *
FUNC_0(uint8 *VAR_0, int VAR_1)
{
 if (VAR_1 <= 191)
 {
  *VAR_0++ = VAR_1 & 255;
 }
 else if (VAR_1 > 191 && VAR_1 <= 8383)
 {
  *VAR_0++ = ((VAR_1 - 192) >> 8) + 192;
  *VAR_0++ = (VAR_1 - 192) & 255;
 }
 else
 {
  *VAR_0++ = 255;
  *VAR_0++ = (VAR_1 >> 24) & 255;
  *VAR_0++ = (VAR_1 >> 16) & 255;
  *VAR_0++ = (VAR_1 >> 8) & 255;
  *VAR_0++ = VAR_1 & 255;
 }
 return VAR_0;
}
