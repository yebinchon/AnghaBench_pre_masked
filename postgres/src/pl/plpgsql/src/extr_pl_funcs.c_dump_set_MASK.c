
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* expr; } ;
struct TYPE_4__ {char* query; } ;
typedef TYPE_2__ PLpgSQL_stmt_set ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(PLpgSQL_stmt_set *VAR_0)
{
 FUNC_0();
 FUNC_1("%s\n", VAR_0->expr->query);
}
