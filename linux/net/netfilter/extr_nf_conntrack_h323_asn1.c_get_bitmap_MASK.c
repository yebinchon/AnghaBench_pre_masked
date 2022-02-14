
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstr {unsigned int bit; int* cur; } ;



__attribute__((used)) static unsigned int FUNC_0(struct bitstr *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;

 if (!VAR_1)
  return 0;

 VAR_3 = VAR_0->bit + VAR_1;

 if (VAR_3 < 8) {
  VAR_2 = (unsigned int)(*VAR_0->cur) << (VAR_0->bit + 24);
  VAR_0->bit = VAR_3;
 } else if (VAR_3 == 8) {
  VAR_2 = (unsigned int)(*VAR_0->cur++) << (VAR_0->bit + 24);
  VAR_0->bit = 0;
 } else {
  for (VAR_5 = VAR_3 >> 3, VAR_4 = 24, VAR_2 = 0; VAR_5;
       VAR_5--, VAR_4 -= 8)
   VAR_2 |= (unsigned int)(*VAR_0->cur++) << VAR_4;

  if (VAR_3 < 32) {
   VAR_2 |= (unsigned int)(*VAR_0->cur) << VAR_4;
   VAR_2 <<= VAR_0->bit;
  } else if (VAR_3 > 32) {
   VAR_2 <<= VAR_0->bit;
   VAR_2 |= (*VAR_0->cur) >> (8 - VAR_0->bit);
  }

  VAR_0->bit = VAR_3 & 0x7;
 }

 VAR_2 &= 0xffffffff << (32 - VAR_1);

 return VAR_2;
}
