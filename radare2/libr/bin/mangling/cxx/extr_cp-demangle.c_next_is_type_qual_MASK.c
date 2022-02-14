
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {int dummy; } ;


 char FUNC_0 (struct d_info*) ;
 char FUNC_1 (struct d_info*) ;

__attribute__((used)) static int
FUNC_2 (struct d_info *VAR_0)
{
  char VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 == 'r' || VAR_1 == 'V' || VAR_1 == 'K')
    return 1;
  if (VAR_1 == 'D')
    {
      VAR_1 = FUNC_1 (VAR_0);
      if (VAR_1 == 'x' || VAR_1 == 'o' || VAR_1 == 'O' || VAR_1 == 'w')
 return 1;
    }
  return 0;
}
