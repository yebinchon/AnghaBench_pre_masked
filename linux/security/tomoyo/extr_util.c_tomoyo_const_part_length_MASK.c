
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 char VAR_1;
 int VAR_2 = 0;

 if (!VAR_0)
  return 0;
 while ((VAR_1 = *VAR_0++) != '\0') {
  if (VAR_1 != '\\') {
   VAR_2++;
   continue;
  }
  VAR_1 = *VAR_0++;
  switch (VAR_1) {
  case '\\':
   VAR_2 += 2;
   continue;
  case '0':
  case '1':
  case '2':
  case '3':
   VAR_1 = *VAR_0++;
   if (VAR_1 < '0' || VAR_1 > '7')
    break;
   VAR_1 = *VAR_0++;
   if (VAR_1 < '0' || VAR_1 > '7')
    break;
   VAR_2 += 4;
   continue;
  }
  break;
 }
 return VAR_2;
}
