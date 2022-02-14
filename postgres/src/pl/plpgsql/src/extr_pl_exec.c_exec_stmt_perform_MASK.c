
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eval_processed; } ;
struct TYPE_8__ {int * expr; } ;
typedef TYPE_1__ PLpgSQL_stmt_perform ;
typedef int PLpgSQL_expr ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(PLpgSQL_execstate *VAR_1, PLpgSQL_stmt_perform *VAR_2)
{
 PLpgSQL_expr *VAR_3 = VAR_2->expr;

 (void) FUNC_1(VAR_1, VAR_3, 0, ((void*)0));
 FUNC_2(VAR_1, (VAR_1->eval_processed != 0));
 FUNC_0(VAR_1);

 return VAR_0;
}
