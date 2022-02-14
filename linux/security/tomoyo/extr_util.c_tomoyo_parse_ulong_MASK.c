
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (char const*,char**,int) ;

u8 FUNC_1(unsigned long *VAR_4, char **VAR_5)
{
 const char *VAR_6 = *VAR_5;
 char *VAR_7;
 int VAR_8 = 10;

 if (*VAR_6 == '0') {
  char VAR_9 = *(VAR_6 + 1);

  if (VAR_9 == 'x' || VAR_9 == 'X') {
   VAR_8 = 16;
   VAR_6 += 2;
  } else if (VAR_9 >= '0' && VAR_9 <= '7') {
   VAR_8 = 8;
   VAR_6++;
  }
 }
 *VAR_4 = FUNC_0(VAR_6, &VAR_7, VAR_8);
 if (VAR_6 == VAR_7)
  return VAR_2;
 *VAR_5 = VAR_7;
 switch (VAR_8) {
 case 16:
  return VAR_1;
 case 8:
  return VAR_3;
 default:
  return VAR_0;
 }
}
