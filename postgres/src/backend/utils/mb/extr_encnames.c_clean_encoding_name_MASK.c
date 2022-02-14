
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0, char *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;

 for (VAR_2 = VAR_0, VAR_3 = VAR_1; *VAR_2 != '\0'; VAR_2++)
 {
  if (FUNC_0((unsigned char) *VAR_2))
  {
   if (*VAR_2 >= 'A' && *VAR_2 <= 'Z')
    *VAR_3++ = *VAR_2 + 'a' - 'A';
   else
    *VAR_3++ = *VAR_2;
  }
 }
 *VAR_3 = '\0';
 return VAR_1;
}
