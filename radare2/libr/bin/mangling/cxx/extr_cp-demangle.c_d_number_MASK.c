
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {int dummy; } ;


 char VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (struct d_info*,int) ;
 char FUNC_2 (struct d_info*) ;

__attribute__((used)) static int
FUNC_3 (struct d_info *VAR_1)
{
  int VAR_2;
  char VAR_3;
  int VAR_4;

  VAR_2 = 0;
  VAR_3 = FUNC_2 (VAR_1);
  if (VAR_3 == 'n')
    {
      VAR_2 = 1;
      FUNC_1 (VAR_1, 1);
      VAR_3 = FUNC_2 (VAR_1);
    }

  VAR_4 = 0;
  while (1)
    {
      if (! FUNC_0 (VAR_3))
 {
   if (VAR_2)
     VAR_4 = - VAR_4;
   return VAR_4;
 }
      if (VAR_4 > ((VAR_0 - (VAR_3 - '0')) / 10))
        return -1;
      VAR_4 = VAR_4 * 10 + VAR_3 - '0';
      FUNC_1 (VAR_1, 1);
      VAR_3 = FUNC_2 (VAR_1);
    }
}
