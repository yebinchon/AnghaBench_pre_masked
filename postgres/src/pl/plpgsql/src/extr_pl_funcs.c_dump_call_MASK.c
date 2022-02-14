
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; scalar_t__ is_call; } ;
typedef TYPE_1__ PLpgSQL_stmt_call ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_call *VAR_0)
{
 FUNC_1();
 FUNC_2("%s expr = ", VAR_0->is_call ? "CALL" : "DO");
 FUNC_0(VAR_0->expr);
 FUNC_2("\n");
}
