
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;



__attribute__((used)) static char *
FUNC_0(const char *VAR_0)
{
 static char VAR_1[30 + 1];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_1) - 1; VAR_2++)
 {
  char VAR_3 = VAR_0[VAR_2];

  if (VAR_3 == '\0')
   break;

  if (VAR_3 >= 0x21 && VAR_3 <= 0x7E)
   VAR_1[VAR_2] = VAR_3;
  else
   VAR_1[VAR_2] = '?';
 }
 VAR_1[VAR_2] = '\0';
 return VAR_1;
}
