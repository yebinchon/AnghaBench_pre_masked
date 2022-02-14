
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

char *
FUNC_0(unsigned long VAR_1,
       const char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_3 < 3 || VAR_5 < 3 + 4 + 1 || (VAR_1 && VAR_1 != 1000))
 {
  if (VAR_5 > 0)
   VAR_4[0] = '\0';
  return ((void*)0);
 }

 VAR_4[0] = '$';
 VAR_4[1] = '1';
 VAR_4[2] = '$';
 VAR_6 = (unsigned long) (unsigned char) VAR_2[0] |
  ((unsigned long) (unsigned char) VAR_2[1] << 8) |
  ((unsigned long) (unsigned char) VAR_2[2] << 16);
 VAR_4[3] = VAR_0[VAR_6 & 0x3f];
 VAR_4[4] = VAR_0[(VAR_6 >> 6) & 0x3f];
 VAR_4[5] = VAR_0[(VAR_6 >> 12) & 0x3f];
 VAR_4[6] = VAR_0[(VAR_6 >> 18) & 0x3f];
 VAR_4[7] = '\0';

 if (VAR_3 >= 6 && VAR_5 >= 3 + 4 + 4 + 1)
 {
  VAR_6 = (unsigned long) (unsigned char) VAR_2[3] |
   ((unsigned long) (unsigned char) VAR_2[4] << 8) |
   ((unsigned long) (unsigned char) VAR_2[5] << 16);
  VAR_4[7] = VAR_0[VAR_6 & 0x3f];
  VAR_4[8] = VAR_0[(VAR_6 >> 6) & 0x3f];
  VAR_4[9] = VAR_0[(VAR_6 >> 12) & 0x3f];
  VAR_4[10] = VAR_0[(VAR_6 >> 18) & 0x3f];
  VAR_4[11] = '\0';
 }

 return VAR_4;
}
