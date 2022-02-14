
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lineno; } ;
struct TYPE_5__ {TYPE_1__* func; TYPE_3__* err_stmt; int * err_text; } ;
struct TYPE_4__ {int fn_signature; } ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 PLpgSQL_execstate *VAR_1 = (PLpgSQL_execstate *) VAR_0;

 if (VAR_1->err_text != ((void*)0))
 {
  if (VAR_1->err_stmt != ((void*)0))
  {




   FUNC_1("PL/pgSQL function %s line %d %s",
        VAR_1->func->fn_signature,
        VAR_1->err_stmt->lineno,
        FUNC_0(VAR_1->err_text));
  }
  else
  {




   FUNC_1("PL/pgSQL function %s %s",
        VAR_1->func->fn_signature,
        FUNC_0(VAR_1->err_text));
  }
 }
 else if (VAR_1->err_stmt != ((void*)0))
 {

  FUNC_1("PL/pgSQL function %s line %d at %s",
       VAR_1->func->fn_signature,
       VAR_1->err_stmt->lineno,
       FUNC_2(VAR_1->err_stmt));
 }
 else
  FUNC_1("PL/pgSQL function %s",
       VAR_1->func->fn_signature);
}
