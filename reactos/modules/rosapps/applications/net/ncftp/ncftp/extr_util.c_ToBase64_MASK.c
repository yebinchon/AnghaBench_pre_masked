
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

void
FUNC_0(void *VAR_1, const void *VAR_2, size_t VAR_3, int VAR_4)
{
 unsigned char *VAR_5;
 const unsigned char *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_6 = VAR_2;
 VAR_7 = VAR_6 + VAR_3;
 VAR_5 = VAR_1;

 while (VAR_6 < VAR_7) {
  VAR_8 = *VAR_6++;
  if (VAR_6 < VAR_7) {
   VAR_9 = *VAR_6++;
  } else {
   VAR_9 = 0;
  }
  if (VAR_6 < VAR_7) {
   VAR_10 = *VAR_6++;
  } else {
   VAR_10 = 0;
  }

  VAR_11 = VAR_8 >> 2;
  VAR_5[0] = VAR_0[VAR_11 & 077];

  VAR_11 = ((VAR_8 << 4) & 060) | ((VAR_9 >> 4) & 017);
  VAR_5[1] = VAR_0[VAR_11 & 077];

  VAR_11 = ((VAR_9 << 2) & 074) | ((VAR_10 >> 6) & 03);
  VAR_5[2] = VAR_0[VAR_11 & 077];

  VAR_11 = (VAR_10 & 077);
  VAR_5[3] = VAR_0[VAR_11 & 077];

  VAR_5 += 4;
 }
 if (VAR_4 != 0)
  *VAR_5 = '\0';
}
