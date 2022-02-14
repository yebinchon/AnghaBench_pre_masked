
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, size_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0[VAR_2] == ' ' ||
      VAR_0[VAR_2] == '\t' ||
      VAR_0[VAR_2] == '\n' ||
      VAR_0[VAR_2] == '\0')
   continue;

  return VAR_2 + 1;
 }

 return 0;
}
