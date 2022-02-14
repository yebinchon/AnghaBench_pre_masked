
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char **VAR_0, char **VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5 = 0;
 char *VAR_6;

 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  if (FUNC_1("cpu", VAR_0[VAR_4])) {
   VAR_5 += FUNC_3(VAR_0[VAR_4]) + 1;
   VAR_0[VAR_4 - VAR_3] = VAR_0[VAR_4];
  } else
   VAR_3++;
 }
 VAR_0[VAR_4 - VAR_3] = ((void*)0);

 *VAR_1 = FUNC_0(VAR_5 + 1 + 2);
 if (!*VAR_1)
  return -1;
 VAR_6 = *VAR_1;
 if (VAR_4 - VAR_3 == 0) {
  *VAR_6 = 0;
  return 0;
 }
 if (VAR_2)
  *VAR_6++ = '{';
 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  FUNC_2(VAR_6, VAR_0[VAR_4]);
  VAR_6 += FUNC_3(VAR_6);
  *VAR_6++ = ',';
 }
 if (VAR_2) {
  VAR_6[-1] = '}';
  *VAR_6 = 0;
 } else
  VAR_6[-1] = 0;
 return 0;
}
