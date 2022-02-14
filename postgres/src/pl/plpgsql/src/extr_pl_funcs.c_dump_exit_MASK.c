
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* label; int * cond; scalar_t__ is_exit; } ;
typedef TYPE_1__ PLpgSQL_stmt_exit ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_exit *VAR_0)
{
 FUNC_1();
 FUNC_2("%s", VAR_0->is_exit ? "EXIT" : "CONTINUE");
 if (VAR_0->label != ((void*)0))
  FUNC_2(" label='%s'", VAR_0->label);
 if (VAR_0->cond != ((void*)0))
 {
  FUNC_2(" WHEN ");
  FUNC_0(VAR_0->cond);
 }
 FUNC_2("\n");
}
