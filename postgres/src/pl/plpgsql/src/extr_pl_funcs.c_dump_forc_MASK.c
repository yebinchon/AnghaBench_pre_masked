
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int curvar; int body; int * argquery; TYPE_1__* var; } ;
struct TYPE_4__ {char* refname; } ;
typedef TYPE_2__ PLpgSQL_stmt_forc ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_stmt_forc *VAR_1)
{
 FUNC_1();
 FUNC_3("FORC %s ", VAR_1->var->refname);
 FUNC_3("curvar=%d\n", VAR_1->curvar);

 VAR_0 += 2;
 if (VAR_1->argquery != ((void*)0))
 {
  FUNC_1();
  FUNC_3("  arguments = ");
  FUNC_0(VAR_1->argquery);
  FUNC_3("\n");
 }
 VAR_0 -= 2;

 FUNC_2(VAR_1->body);

 FUNC_1();
 FUNC_3("    ENDFORC\n");
}
