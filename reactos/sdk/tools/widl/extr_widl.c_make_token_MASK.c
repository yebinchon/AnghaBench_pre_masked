
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* FUNC_1 (char const*,char) ;
 char FUNC_2 (char) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0)
{
  char *VAR_1;
  char *VAR_2;
  int VAR_3;

  VAR_2 = FUNC_1(VAR_0, '/');
  if(!VAR_2)
    VAR_2 = FUNC_1(VAR_0, '\\');

  if (VAR_2) VAR_0 = VAR_2 + 1;

  VAR_1 = FUNC_3(VAR_0);
  for (VAR_3=0; VAR_1[VAR_3]; VAR_3++) {
    if (!FUNC_0(VAR_1[VAR_3])) VAR_1[VAR_3] = '_';
    else VAR_1[VAR_3] = FUNC_2(VAR_1[VAR_3]);
  }
  return VAR_1;
}
