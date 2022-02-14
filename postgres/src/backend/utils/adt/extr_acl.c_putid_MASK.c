
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 bool VAR_3 = 1;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {

  if (!FUNC_0((unsigned char) *VAR_2) && *VAR_2 != '_')
  {
   VAR_3 = 0;
   break;
  }
 }
 if (!VAR_3)
  *VAR_0++ = '"';
 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {

  if (*VAR_2 == '"')
   *VAR_0++ = '"';
  *VAR_0++ = *VAR_2;
 }
 if (!VAR_3)
  *VAR_0++ = '"';
 *VAR_0 = '\0';
}
