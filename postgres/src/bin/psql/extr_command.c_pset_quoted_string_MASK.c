
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0)
{
 char *VAR_1 = FUNC_0(FUNC_1(VAR_0) * 2 + 3);
 char *VAR_2 = VAR_1;

 *VAR_2++ = '\'';

 for (; *VAR_0; VAR_0++)
 {
  if (*VAR_0 == '\n')
  {
   *VAR_2++ = '\\';
   *VAR_2++ = 'n';
  }
  else if (*VAR_0 == '\'')
  {
   *VAR_2++ = '\\';
   *VAR_2++ = '\'';
  }
  else
   *VAR_2++ = *VAR_0;
 }

 *VAR_2++ = '\'';
 *VAR_2 = '\0';

 return VAR_1;
}
