
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * simple_eval_estate; } ;
struct TYPE_6__ {scalar_t__ chain; } ;
typedef TYPE_1__ PLpgSQL_stmt_commit ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(PLpgSQL_execstate *VAR_1, PLpgSQL_stmt_commit *VAR_2)
{
 if (VAR_2->chain)
  FUNC_1();
 else
 {
  FUNC_0();
  FUNC_2();
 }

 VAR_1->simple_eval_estate = ((void*)0);
 FUNC_3(VAR_1);

 return VAR_0;
}
