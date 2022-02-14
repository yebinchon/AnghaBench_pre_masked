
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {int dummy; } ;


 int FUNC_0 (struct d_info*,char) ;
 int FUNC_1 (struct d_info*) ;
 int FUNC_2 (struct d_info*) ;

__attribute__((used)) static int
FUNC_3 (struct d_info *VAR_0, int VAR_1)
{
  if (VAR_1 == '\0')
    VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1 == 'h')
    FUNC_2 (VAR_0);
  else if (VAR_1 == 'v')
    {
      FUNC_2 (VAR_0);
      if (! FUNC_0 (VAR_0, '_'))
 return 0;
      FUNC_2 (VAR_0);
    }
  else
    return 0;

  if (! FUNC_0 (VAR_0, '_'))
    return 0;

  return 1;
}
