
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_bool ;
struct TYPE_3__ {char* cmd1; char* cmd2; char* short_msg; } ;
typedef TYPE_1__ help_msg ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static mrb_bool
FUNC_1(void)
{
  help_msg *VAR_2;

  FUNC_0("Commands\n");

  for (VAR_2 = VAR_1; VAR_2->cmd1 != ((void*)0); VAR_2++) {
    if (VAR_2->cmd2 == ((void*)0)) {
      FUNC_0("  %s -- %s\n", VAR_2->cmd1, VAR_2->short_msg);
    }
    else {
      FUNC_0("  %s %s -- %s\n", VAR_2->cmd1, VAR_2->cmd2, VAR_2->short_msg);
    }
  }
  return VAR_0;
}
