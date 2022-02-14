
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (double,char*,int*) ;
 char const* FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (double) ;

const char *FUNC_6(js_State *VAR_2, char VAR_3[32], double VAR_4)
{
 char VAR_5[32], *VAR_6 = VAR_3, *VAR_7 = VAR_5;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_4 == 0) return "0";
 if (FUNC_1(VAR_4)) return "NaN";
 if (FUNC_0(VAR_4)) return VAR_4 < 0 ? "-Infinity" : "Infinity";




 if (VAR_4 >= VAR_1 && VAR_4 <= VAR_0) {
  int VAR_11 = (int)VAR_4;
  if ((double)VAR_11 == VAR_4)
   return FUNC_4(VAR_3, VAR_11);
 }

 VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_8);
 VAR_10 = VAR_9 + VAR_8;

 if (FUNC_5(VAR_4))
  *VAR_6++ = '-';

 if (VAR_10 < -5 || VAR_10 > 21) {
  *VAR_6++ = *VAR_7++;
  if (VAR_9 > 1) {
   int VAR_12 = VAR_9 - 1;
   *VAR_6++ = '.';
   while (VAR_12--)
    *VAR_6++ = *VAR_7++;
  }
  FUNC_2(VAR_6, VAR_10 - 1);
 }

 else if (VAR_10 <= 0) {
  *VAR_6++ = '0';
  *VAR_6++ = '.';
  while (VAR_10++ < 0)
   *VAR_6++ = '0';
  while (VAR_9-- > 0)
   *VAR_6++ = *VAR_7++;
  *VAR_6 = 0;
 }

 else {
  while (VAR_9-- > 0) {
   *VAR_6++ = *VAR_7++;
   if (--VAR_10 == 0 && VAR_9 > 0)
    *VAR_6++ = '.';
  }
  while (VAR_10-- > 0)
   *VAR_6++ = '0';
  *VAR_6 = 0;
 }

 return VAR_3;
}
