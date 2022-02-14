
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1)
{
  char VAR_2[VAR_0];
  int VAR_3;

  VAR_3 = FUNC_1(VAR_1);
  while (VAR_3 > 0 && VAR_1[VAR_3] != '.')
    {
      VAR_3--;
    }
  if (VAR_3 > 0)
    {
      FUNC_0(VAR_2, 0, sizeof(VAR_2));
      FUNC_3(&VAR_2[0], &VAR_1[VAR_3], FUNC_1(&VAR_1[VAR_3]));

      if ((FUNC_2(VAR_2, ".c", 2) == 0) || (FUNC_2(VAR_2, ".C", 2) == 0))
        {
          return 1;
        }
    }
  return 0;
}
