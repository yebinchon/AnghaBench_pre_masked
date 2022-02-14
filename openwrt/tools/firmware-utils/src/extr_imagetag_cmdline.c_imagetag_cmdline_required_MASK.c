
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gengetopt_args_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gengetopt_args_info*) ;
 scalar_t__ FUNC_2 (struct gengetopt_args_info*,char const*,int ) ;

int
FUNC_3 (struct gengetopt_args_info *VAR_2, const char *VAR_3)
{
  int VAR_4 = VAR_1;

  if (FUNC_2(VAR_2, VAR_3, 0) > 0)
    VAR_4 = VAR_0;

  if (VAR_4 == VAR_0)
    {
      FUNC_1 (VAR_2);
      FUNC_0 (VAR_0);
    }

  return VAR_4;
}
