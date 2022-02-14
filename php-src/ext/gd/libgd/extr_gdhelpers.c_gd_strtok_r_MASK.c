
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int separators ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

char *
FUNC_1 (char *VAR_1, char *VAR_2, char **VAR_3)
{
  char VAR_4[256];
  char *VAR_5 = 0;
  FUNC_0 (VAR_4, 0, sizeof (VAR_4));
  while (*VAR_2)
    {
      VAR_4[*((unsigned char *) VAR_2)] = 1;
      VAR_2++;
    }
  if (!VAR_1)
    {

      VAR_1 = *VAR_3;
    }

  if (!(*VAR_1))
    {
      *VAR_3 = VAR_1;
      return 0;
    }

  if (VAR_0)
    {
      do
 {
   VAR_1++;
 }
      while (VAR_0);

      if (!(*VAR_1))
 {
   *VAR_3 = VAR_1;
   return 0;
 }
    }

  VAR_5 = VAR_1;
  do
    {

      if (!(*VAR_1))
 {
   *VAR_3 = VAR_1;
   return VAR_5;
 }
      VAR_1++;
    }
  while (!VAR_0);

  *VAR_1 = '\0';
  do
    {
      VAR_1++;
    }
  while (VAR_0);

  *VAR_3 = VAR_1;
  return VAR_5;
}
