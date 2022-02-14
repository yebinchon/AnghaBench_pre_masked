
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int16_t ;



int FUNC_0(uint8_t * VAR_0, uint8_t * VAR_1, char * VAR_2, int16_t VAR_3)
{
 uint16_t VAR_4;
 uint8_t * VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_5 = VAR_1;

 for (;;)
 {
  VAR_4 = *VAR_5++;

  if (!VAR_7) VAR_6++;

  if ((VAR_4 & 0xc0) == 0xc0)
  {
   if (!VAR_7)
    VAR_6++;
   VAR_7 = 1;

   VAR_5 = &VAR_0[((VAR_4 & 0x3f)<<8) + *VAR_5];
   VAR_4 = *VAR_5++;
  }

  if (VAR_4 == 0)
   break;

  VAR_3 -= VAR_4 + 1;

  if (VAR_3 < 0) return -1;

  if (!VAR_7) VAR_6 += VAR_4;

  while (VAR_4-- != 0) *VAR_2++ = (char)*VAR_5++;
  *VAR_2++ = '.';
  VAR_8++;
 }

 if (VAR_8 == 0)
 {

  *VAR_2++ = '.';
  VAR_3--;
 }

 *VAR_2++ = '\0';
 VAR_3--;

 return VAR_6;
}
