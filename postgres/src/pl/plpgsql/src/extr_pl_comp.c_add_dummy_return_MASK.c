
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* action; int out_param_varno; scalar_t__ nstatements; } ;
struct TYPE_10__ {scalar_t__ cmd_type; } ;
struct TYPE_9__ {scalar_t__ body; scalar_t__ stmtid; int cmd_type; int * exceptions; } ;
struct TYPE_8__ {int retvarno; int * expr; scalar_t__ stmtid; scalar_t__ cmd_type; } ;
typedef TYPE_1__ PLpgSQL_stmt_return ;
typedef TYPE_2__ PLpgSQL_stmt_block ;
typedef TYPE_3__ PLpgSQL_stmt ;
typedef TYPE_4__ PLpgSQL_function ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(PLpgSQL_function *VAR_3)
{





 if (VAR_3->action->exceptions != ((void*)0))
 {
  PLpgSQL_stmt_block *VAR_4;

  VAR_4 = FUNC_3(sizeof(PLpgSQL_stmt_block));
  VAR_4->cmd_type = VAR_1;
  VAR_4->stmtid = ++VAR_3->nstatements;
  VAR_4->body = FUNC_1(VAR_3->action);

  VAR_3->action = VAR_4;
 }
 if (VAR_3->action->body == VAR_0 ||
  ((PLpgSQL_stmt *) FUNC_2(VAR_3->action->body))->cmd_type != VAR_2)
 {
  PLpgSQL_stmt_return *VAR_5;

  VAR_5 = FUNC_3(sizeof(PLpgSQL_stmt_return));
  VAR_5->cmd_type = VAR_2;
  VAR_5->stmtid = ++VAR_3->nstatements;
  VAR_5->expr = ((void*)0);
  VAR_5->retvarno = VAR_3->out_param_varno;

  VAR_3->action->body = FUNC_0(VAR_3->action->body, VAR_5);
 }
}
