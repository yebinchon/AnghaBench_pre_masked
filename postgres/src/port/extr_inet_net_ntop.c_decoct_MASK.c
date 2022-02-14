
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const u_char *VAR_0, int VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = VAR_2;
 char *VAR_5;
 int VAR_6;

 for (VAR_6 = 1; VAR_6 <= VAR_1; VAR_6++)
 {
  if (VAR_3 <= sizeof "255.")
   return (0);
  VAR_5 = VAR_2;
  VAR_2 += FUNC_0((VAR_2, "%u", *VAR_0++));
  if (VAR_6 != VAR_1)
  {
   *VAR_2++ = '.';
   *VAR_2 = '\0';
  }
  VAR_3 -= (size_t) (VAR_2 - VAR_5);
 }
 return (VAR_2 - VAR_4);
}
