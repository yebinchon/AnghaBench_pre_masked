
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char const *
FUNC_2(char *VAR_2, zic_t VAR_3)
{
 char VAR_4 = '+';
 int VAR_5,
    VAR_6;

 if (VAR_3 < 0)
 {
  VAR_3 = -VAR_3;
  VAR_4 = '-';
 }

 VAR_5 = VAR_3 % VAR_1;
 VAR_3 /= VAR_1;
 VAR_6 = VAR_3 % VAR_0;
 VAR_3 /= VAR_0;
 if (100 <= VAR_3)
 {
  FUNC_1(FUNC_0("%%z UT offset magnitude exceeds 99:59:59"));
  return "%z";
 }
 else
 {
  char *VAR_7 = VAR_2;

  *VAR_7++ = VAR_4;
  *VAR_7++ = '0' + VAR_3 / 10;
  *VAR_7++ = '0' + VAR_3 % 10;
  if (VAR_6 | VAR_5)
  {
   *VAR_7++ = '0' + VAR_6 / 10;
   *VAR_7++ = '0' + VAR_6 % 10;
   if (VAR_5)
   {
    *VAR_7++ = '0' + VAR_5 / 10;
    *VAR_7++ = '0' + VAR_5 % 10;
   }
  }
  *VAR_7 = '\0';
  return VAR_2;
 }
}
