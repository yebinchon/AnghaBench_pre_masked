
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_1)
{
 if (FUNC_2(VAR_1, VAR_0)) {
  char *VAR_2 = FUNC_0(FUNC_1(20));
  char *VAR_3 = VAR_2;

  *VAR_2++ = '_';
  *VAR_2++ = '_';
  if (*VAR_1 == '.')
   VAR_1++;
  while (*VAR_1 && *VAR_1 != '.')
   *VAR_2++ = *VAR_1++;
  *VAR_2 = '\0';
  if (*VAR_1 == '.')
   VAR_1++;
  if (FUNC_5(VAR_1, "rodata") != ((void*)0))
   FUNC_3(VAR_2, "const ");
  else if (FUNC_5(VAR_1, "data") != ((void*)0))
   FUNC_3(VAR_2, "data ");
  else
   FUNC_3(VAR_2, " ");
  return VAR_3;
 } else {
  return FUNC_0(FUNC_4(""));
 }
}
