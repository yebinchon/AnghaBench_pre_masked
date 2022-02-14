
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imagetag_cmdline_params {int override; int initialize; int check_required; int print_errors; scalar_t__ check_ambiguity; } ;
struct gengetopt_args_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gengetopt_args_info*) ;
 int FUNC_2 (int,char**,struct gengetopt_args_info*,struct imagetag_cmdline_params*,int ) ;

int
FUNC_3 (int VAR_1, char **VAR_2, struct gengetopt_args_info *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7;
  struct imagetag_cmdline_params VAR_8;

  VAR_8.override = VAR_4;
  VAR_8.initialize = VAR_5;
  VAR_8.check_required = VAR_6;
  VAR_8.check_ambiguity = 0;
  VAR_8.print_errors = 1;

  VAR_7 = FUNC_2 (VAR_1, VAR_2, VAR_3, &VAR_8, 0);

  if (VAR_7 == VAR_0)
    {
      FUNC_1 (VAR_3);
      FUNC_0 (VAR_0);
    }

  return VAR_7;
}
