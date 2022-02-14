
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int *VAR_0,
      int VAR_1,
      unsigned char VAR_2,
      size_t VAR_3)
{
 unsigned int VAR_4 = *VAR_0, VAR_5, VAR_6;
 unsigned long long VAR_7, VAR_8 = 0;


 if (VAR_2 > 0x9) {
  *VAR_0 += VAR_1;
  return VAR_4;
 }


 for (VAR_5=0 ; VAR_5 < VAR_3 ; VAR_5++) {
  VAR_7 = (*VAR_0 >> (VAR_5 << 2)) & 0xf;
  VAR_7 = VAR_7 > 9 ? 9 : VAR_7;
  for (VAR_6=0 ; VAR_6 < VAR_5 ; VAR_6++)
   VAR_7 = VAR_7 * 10;
  VAR_8 += VAR_7;
 }


 VAR_8 += VAR_1;
 *VAR_0 = 0;


 for (VAR_5=0 ; VAR_5 < VAR_3 ; VAR_5++) {
  for (VAR_7=1,VAR_6=0 ; VAR_6 < VAR_5 ; VAR_6++)
   VAR_7 = VAR_7 * 10;
  VAR_7 = (VAR_8 / VAR_7) % 10;
  *VAR_0 += VAR_7 << (VAR_5 << 2);
 }
 return VAR_4;
}
