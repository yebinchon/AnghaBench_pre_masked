
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char*,int,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0,
       double *VAR_1,
       char *VAR_2,
       double *VAR_3,
       char *VAR_4,
       double *VAR_5)
{
 int VAR_6,
    VAR_7;
 char *VAR_8;

 VAR_6 = VAR_7 = (unsigned char) VAR_4[0];
 for (VAR_8 = VAR_2; *VAR_8; VAR_8++)
 {
  if (VAR_6 > (unsigned char) *VAR_8)
   VAR_6 = (unsigned char) *VAR_8;
  if (VAR_7 < (unsigned char) *VAR_8)
   VAR_7 = (unsigned char) *VAR_8;
 }
 for (VAR_8 = VAR_4; *VAR_8; VAR_8++)
 {
  if (VAR_6 > (unsigned char) *VAR_8)
   VAR_6 = (unsigned char) *VAR_8;
  if (VAR_7 < (unsigned char) *VAR_8)
   VAR_7 = (unsigned char) *VAR_8;
 }

 if (VAR_6 <= 'Z' && VAR_7 >= 'A')
 {
  if (VAR_6 > 'A')
   VAR_6 = 'A';
  if (VAR_7 < 'Z')
   VAR_7 = 'Z';
 }

 if (VAR_6 <= 'z' && VAR_7 >= 'a')
 {
  if (VAR_6 > 'a')
   VAR_6 = 'a';
  if (VAR_7 < 'z')
   VAR_7 = 'z';
 }

 if (VAR_6 <= '9' && VAR_7 >= '0')
 {
  if (VAR_6 > '0')
   VAR_6 = '0';
  if (VAR_7 < '9')
   VAR_7 = '9';
 }





 if (VAR_7 - VAR_6 < 9)
 {
  VAR_6 = ' ';
  VAR_7 = 127;
 }




 while (*VAR_2)
 {
  if (*VAR_2 != *VAR_4 || *VAR_2 != *VAR_0)
   break;
  VAR_2++, VAR_4++, VAR_0++;
 }




 *VAR_1 = FUNC_0(VAR_0, VAR_6, VAR_7);
 *VAR_3 = FUNC_0(VAR_2, VAR_6, VAR_7);
 *VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_7);
}
