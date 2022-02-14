
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int,double) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

char *
FUNC_4 (double VAR_0, int VAR_1, char *VAR_2)
{
  char *VAR_3 = VAR_2;

  FUNC_1 (VAR_2, "%-#.*g", VAR_1, VAR_0);


  if (*VAR_3 == '-')
    VAR_3++;
  if (*VAR_3 == '0' && VAR_3[1] == '.')
    FUNC_0 (VAR_3, VAR_3 + 1, FUNC_3 (VAR_3 + 1) + 1);


  VAR_3 = FUNC_2 (VAR_2, 'e');
  if (!VAR_3)
    {
      VAR_3 = VAR_2 + FUNC_3 (VAR_2);

      while (VAR_3[-1] == '0' && VAR_3 > VAR_2 + 2)
 *--VAR_3 = '\0';
    }
  if (VAR_3 > VAR_2 && VAR_3[-1] == '.')
    FUNC_0 (VAR_3 - 1, VAR_3, FUNC_3 (VAR_3) + 1);
  return VAR_2;
}
