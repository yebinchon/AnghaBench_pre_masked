
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* target; scalar_t__ strict; int sqlstmt; } ;
struct TYPE_4__ {int dno; char* refname; } ;
typedef TYPE_2__ PLpgSQL_stmt_execsql ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_execsql *VAR_1)
{
 FUNC_1();
 FUNC_2("EXECSQL ");
 FUNC_0(VAR_1->sqlstmt);
 FUNC_2("\n");

 VAR_0 += 2;
 if (VAR_1->target != ((void*)0))
 {
  FUNC_1();
  FUNC_2("    INTO%s target = %d %s\n",
      VAR_1->strict ? " STRICT" : "",
      VAR_1->target->dno, VAR_1->target->refname);
 }
 VAR_0 -= 2;
}
