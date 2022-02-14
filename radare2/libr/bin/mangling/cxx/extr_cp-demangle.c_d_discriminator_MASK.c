
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,int) ;
 int FUNC_1 (struct d_info*) ;
 char FUNC_2 (struct d_info*) ;

__attribute__((used)) static int
FUNC_3 (struct d_info *VAR_0)
{
  int VAR_1, VAR_2 = 1;

  if (FUNC_2 (VAR_0) != '_')
    return 1;
  FUNC_0 (VAR_0, 1);
  if (FUNC_2 (VAR_0) == '_')
    {
      ++VAR_2;
      FUNC_0 (VAR_0, 1);
    }

  VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 < 0)
    return 0;
  if (VAR_2 > 1 && VAR_1 >= 10)
    {
      if (FUNC_2 (VAR_0) == '_')
 FUNC_0 (VAR_0, 1);
      else
 return 0;
    }

  return 1;
}
