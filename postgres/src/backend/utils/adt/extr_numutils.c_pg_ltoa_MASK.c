
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

void
FUNC_1(int32 VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 bool VAR_4 = 0;





 if (VAR_1 == VAR_0)
 {
  FUNC_0(VAR_2, "-2147483648", 12);
  return;
 }
 else if (VAR_1 < 0)
 {
  VAR_1 = -VAR_1;
  VAR_4 = 1;
 }


 do
 {
  int32 VAR_5;
  int32 VAR_6 = VAR_1;

  VAR_1 /= 10;
  VAR_5 = VAR_6 - VAR_1 * 10;
  *VAR_2++ = '0' + VAR_5;
 } while (VAR_1 != 0);

 if (VAR_4)
  *VAR_2++ = '-';


 *VAR_2-- = '\0';


 while (VAR_3 < VAR_2)
 {
  char VAR_7 = *VAR_3;

  *VAR_3++ = *VAR_2;
  *VAR_2-- = VAR_7;
 }
}
