
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int varno; scalar_t__ slice; int body; int expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_foreach_a ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_stmt_foreach_a *VAR_0)
{
 FUNC_1();
 FUNC_3("FOREACHA var %d ", VAR_0->varno);
 if (VAR_0->slice != 0)
  FUNC_3("SLICE %d ", VAR_0->slice);
 FUNC_3("IN ");
 FUNC_0(VAR_0->expr);
 FUNC_3("\n");

 FUNC_2(VAR_0->body);

 FUNC_1();
 FUNC_3("    ENDFOREACHA");
}
