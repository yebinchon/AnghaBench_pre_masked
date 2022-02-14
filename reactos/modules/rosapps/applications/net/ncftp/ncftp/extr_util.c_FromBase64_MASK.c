
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

void
FUNC_0(void *VAR_1, const void *VAR_2, size_t VAR_3, int VAR_4)
{
 unsigned char *VAR_5;
 const unsigned char *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;

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
  if (VAR_6 < VAR_7) {
   VAR_11 = *VAR_6++;
  } else {
   VAR_11 = 0;
  }

  VAR_12 = (((unsigned int) VAR_0[VAR_8]) << 2) | (((unsigned int) VAR_0[VAR_9]) >> 4);
  VAR_5[0] = (unsigned char) VAR_12;

  VAR_12 = (((unsigned int) VAR_0[VAR_9]) << 4) | (((unsigned int) VAR_0[VAR_10]) >> 2);
  VAR_5[1] = (unsigned char) VAR_12;

  VAR_12 = (((unsigned int) VAR_0[VAR_10]) << 6) | (((unsigned int) VAR_0[VAR_11]));
  VAR_5[2] = (unsigned char) VAR_12;

  VAR_5 += 3;
 }
 if (VAR_4 != 0)
  *VAR_5 = '\0';
}
