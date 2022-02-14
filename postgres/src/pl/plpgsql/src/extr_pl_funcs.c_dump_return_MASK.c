
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ retvarno; int * expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_return ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_return *VAR_0)
{
 FUNC_1();
 FUNC_2("RETURN ");
 if (VAR_0->retvarno >= 0)
  FUNC_2("variable %d", VAR_0->retvarno);
 else if (VAR_0->expr != ((void*)0))
  FUNC_0(VAR_0->expr);
 else
  FUNC_2("NULL");
 FUNC_2("\n");
}
