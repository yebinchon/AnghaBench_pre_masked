
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chain; } ;
typedef TYPE_1__ PLpgSQL_stmt_commit ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_stmt_commit *VAR_0)
{
 FUNC_0();
 if (VAR_0->chain)
  FUNC_1("COMMIT AND CHAIN\n");
 else
  FUNC_1("COMMIT\n");
}
