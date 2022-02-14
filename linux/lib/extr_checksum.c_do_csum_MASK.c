
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;

 if (VAR_1 <= 0)
  goto out;
 VAR_2 = 1 & (unsigned long) VAR_0;
 if (VAR_2) {



  VAR_3 = *VAR_0;

  VAR_1--;
  VAR_0++;
 }
 if (VAR_1 >= 2) {
  if (2 & (unsigned long) VAR_0) {
   VAR_3 += *(unsigned short *) VAR_0;
   VAR_1 -= 2;
   VAR_0 += 2;
  }
  if (VAR_1 >= 4) {
   const unsigned char *VAR_4 = VAR_0 + ((unsigned)VAR_1 & ~3);
   unsigned int VAR_5 = 0;
   do {
    unsigned int VAR_6 = *(unsigned int *) VAR_0;
    VAR_0 += 4;
    VAR_3 += VAR_5;
    VAR_3 += VAR_6;
    VAR_5 = (VAR_6 > VAR_3);
   } while (VAR_0 < VAR_4);
   VAR_3 += VAR_5;
   VAR_3 = (VAR_3 & 0xffff) + (VAR_3 >> 16);
  }
  if (VAR_1 & 2) {
   VAR_3 += *(unsigned short *) VAR_0;
   VAR_0 += 2;
  }
 }
 if (VAR_1 & 1)



  VAR_3 += (*VAR_0 << 8);

 VAR_3 = FUNC_0(VAR_3);
 if (VAR_2)
  VAR_3 = ((VAR_3 >> 8) & 0xff) | ((VAR_3 & 0xff) << 8);
out:
 return VAR_3;
}
