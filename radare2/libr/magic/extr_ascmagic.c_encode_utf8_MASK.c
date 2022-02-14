
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ut8 ;
typedef int unichar ;



__attribute__((used)) static ut8 *
FUNC_0(ut8 *VAR_0, size_t VAR_1, unichar *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 ut8 *VAR_5 = VAR_0 + VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4] <= 0x7f) {
   if (VAR_5 - VAR_0 < 1) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)VAR_2[VAR_4];
  } else if (VAR_2[VAR_4] <= 0x7ff) {
   if (VAR_5 - VAR_0 < 2) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)((VAR_2[VAR_4] >> 6) + 0xc0);
   *VAR_0++ = (ut8)((VAR_2[VAR_4] & 0x3f) + 0x80);
  } else if (VAR_2[VAR_4] <= 0xffff) {
   if (VAR_5 - VAR_0 < 3) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)((VAR_2[VAR_4] >> 12) + 0xe0);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 6) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)((VAR_2[VAR_4] & 0x3f) + 0x80);
  } else if (VAR_2[VAR_4] <= 0x1fffff) {
   if (VAR_5 - VAR_0 < 4) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)((VAR_2[VAR_4] >> 18) + 0xf0);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 12) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 6) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)((VAR_2[VAR_4] & 0x3f) + 0x80);
  } else if (VAR_2[VAR_4] <= 0x3ffffff) {
   if (VAR_5 - VAR_0 < 5) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)((VAR_2[VAR_4] >> 24) + 0xf8);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 18) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 12) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 6) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)((VAR_2[VAR_4] & 0x3f) + 0x80);
  } else if (VAR_2[VAR_4] <= 0x7fffffff) {
   if (VAR_5 - VAR_0 < 6) {
    return ((void*)0);
   }
   *VAR_0++ = (ut8)((VAR_2[VAR_4] >> 30) + 0xfc);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 24) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 18) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 12) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)(((VAR_2[VAR_4] >> 6) & 0x3f) + 0x80);
   *VAR_0++ = (ut8)((VAR_2[VAR_4] & 0x3f) + 0x80);
  } else {
   return ((void*)0);
  }
 }

 return VAR_0;
}
