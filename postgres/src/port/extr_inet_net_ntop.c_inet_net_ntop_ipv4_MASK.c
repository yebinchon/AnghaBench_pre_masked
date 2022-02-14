
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_1(const u_char *VAR_3, int VAR_4, char *VAR_5, size_t VAR_6)
{
 char *VAR_7 = VAR_5;
 char *VAR_8;
 int VAR_9 = 4;
 int VAR_10;

 if (VAR_4 < 0 || VAR_4 > 32)
 {
  VAR_2 = VAR_0;
  return (((void*)0));
 }


 for (VAR_10 = VAR_9; VAR_10 > 0; VAR_10--)
 {
  if (VAR_6 <= sizeof ".255")
   goto emsgsize;
  VAR_8 = VAR_5;
  if (VAR_5 != VAR_7)
   *VAR_5++ = '.';
  VAR_5 += FUNC_0((VAR_5, "%u", *VAR_3++));
  VAR_6 -= (size_t) (VAR_5 - VAR_8);
 }


 if (VAR_4 != 32)
 {
  if (VAR_6 <= sizeof "/32")
   goto emsgsize;
  VAR_5 += FUNC_0((VAR_5, "/%u", VAR_4));
 }

 return (VAR_7);

emsgsize:
 VAR_2 = VAR_1;
 return (((void*)0));
}
