
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, int VAR_1, char VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_1 + 1);
 char *VAR_4 = VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1 && VAR_0[VAR_5] != VAR_2; ++VAR_5) {
  if (VAR_0[VAR_5] == '\\' && (VAR_0[VAR_5 + 1] == '\\' || (VAR_2 && VAR_0[VAR_5 + 1] == VAR_2))) {
   *VAR_4++ = VAR_0[++VAR_5];
  } else {
   *VAR_4++ = VAR_0[VAR_5];
  }
 }

 *VAR_4 = '\0';
 return VAR_3;
}
