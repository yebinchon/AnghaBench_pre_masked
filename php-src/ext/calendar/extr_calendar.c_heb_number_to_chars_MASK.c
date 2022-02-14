
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(int VAR_4, int VAR_5, char **VAR_6)
{
 char *VAR_7, VAR_8[18], *VAR_9;

 VAR_7 = VAR_9 = VAR_8;




 if (VAR_4 > 9999 || VAR_4 < 1) {
  *VAR_6 = ((void*)0);
  return ((void*)0);
 }


 if (VAR_4 / 1000) {
  *VAR_7 = VAR_3[VAR_4 / 1000];
  VAR_7++;

  if (VAR_1 & VAR_5) {
   *VAR_7 = '\'';
   VAR_7++;
  }
  if (VAR_0 & VAR_5) {

   FUNC_1(VAR_7, " \xE0\xEC\xF4\xE9\xED ");
   VAR_7 += 7;
  }

  VAR_9 = VAR_7;
  VAR_4 = VAR_4 % 1000;
 }


 while (VAR_4 >= 400) {
  *VAR_7 = VAR_3[22];
  VAR_7++;
  VAR_4 -= 400;
 }


 if (VAR_4 >= 100) {
  *VAR_7 = VAR_3[18 + VAR_4 / 100];
  VAR_7++;
  VAR_4 = VAR_4 % 100;
 }


 if (VAR_4 == 15 || VAR_4 == 16) {
  *VAR_7 = VAR_3[9];
  VAR_7++;
  *VAR_7 = VAR_3[VAR_4 - 9];
  VAR_7++;
 } else {

  if (VAR_4 >= 10) {
   *VAR_7 = VAR_3[9 + VAR_4 / 10];
   VAR_7++;
   VAR_4 = VAR_4 % 10;
  }


  if (VAR_4 > 0) {
   *VAR_7 = VAR_3[VAR_4];
   VAR_7++;
  }
 }

 if (VAR_2 & VAR_5) {
  switch (VAR_7 - VAR_9) {
  case 0:
   break;
  case 1:
   *VAR_7 = '\'';
   VAR_7++;
   break;
  default:
   *(VAR_7) = *(VAR_7 - 1);
   *(VAR_7 - 1) = '"';
   VAR_7++;
  }
 }

 *VAR_7 = '\0';
 *VAR_6 = FUNC_0(VAR_8, (VAR_7 - VAR_8) + 1);
 VAR_7 = *VAR_6;
 return VAR_7;
}
