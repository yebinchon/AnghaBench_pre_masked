
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;

int FUNC_1(char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_2 < VAR_3) {
  int VAR_5, VAR_6, VAR_7, VAR_8;

  if (VAR_2[0] == '\n') {
   VAR_2++;
   continue;
  }
  if (VAR_2 + 4 > VAR_3)
   return -VAR_0;
  VAR_5 = FUNC_0(VAR_2[0]);
  VAR_6 = FUNC_0(VAR_2[1]);
  VAR_7 = FUNC_0(VAR_2[2]);
  VAR_8 = FUNC_0(VAR_2[3]);
  if (VAR_5 < 0 || VAR_6 < 0 || VAR_7 < 0 || VAR_8 < 0)
   return -VAR_0;

  *VAR_1++ = (VAR_5 << 2) | (VAR_6 >> 4);
  if (VAR_2[2] == '=')
   return VAR_4 + 1;
  *VAR_1++ = ((VAR_6 & 15) << 4) | (VAR_7 >> 2);
  if (VAR_2[3] == '=')
   return VAR_4 + 2;
  *VAR_1++ = ((VAR_7 & 3) << 6) | VAR_8;
  VAR_4 += 3;
  VAR_2 += 4;
 }
 return VAR_4;
}
