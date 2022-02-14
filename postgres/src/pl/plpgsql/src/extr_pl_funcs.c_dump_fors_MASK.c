
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int body; int query; TYPE_1__* var; } ;
struct TYPE_4__ {char* refname; } ;
typedef TYPE_2__ PLpgSQL_stmt_fors ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_stmt_fors *VAR_0)
{
 FUNC_1();
 FUNC_3("FORS %s ", VAR_0->var->refname);
 FUNC_0(VAR_0->query);
 FUNC_3("\n");

 FUNC_2(VAR_0->body);

 FUNC_1();
 FUNC_3("    ENDFORS\n");
}
