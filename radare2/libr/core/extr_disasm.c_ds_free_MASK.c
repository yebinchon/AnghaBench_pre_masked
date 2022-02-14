
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int stackFd; int _tabsbuf; int sl; int osl; int opstr; int prev_line_col; int refline2; int refline; int line_col; int line; int comment; int ssa; int hint; int analop; int asmop; TYPE_1__* core; scalar_t__ show_emu_stack; } ;
struct TYPE_7__ {int io; } ;
typedef TYPE_2__ RDisasmState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(RDisasmState *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->show_emu_stack) {

  FUNC_3 ("Free fake stack\n");
  if (VAR_0->stackFd != -1) {
   FUNC_8 (VAR_0->core->io, VAR_0->stackFd);
  }
 }
 FUNC_7 (&VAR_0->asmop);
 FUNC_6 (&VAR_0->analop);
 FUNC_5 (VAR_0->hint);
 FUNC_1 (VAR_0);
 FUNC_2 (VAR_0);
 FUNC_1 (VAR_0);
 FUNC_9 (VAR_0->ssa);
 FUNC_4 (VAR_0->comment);
 FUNC_4 (VAR_0->line);
 FUNC_4 (VAR_0->line_col);
 FUNC_4 (VAR_0->refline);
 FUNC_4 (VAR_0->refline2);
 FUNC_4 (VAR_0->prev_line_col);
 FUNC_4 (VAR_0->opstr);
 FUNC_4 (VAR_0->osl);
 FUNC_4 (VAR_0->sl);
 FUNC_4 (VAR_0->_tabsbuf);
 FUNC_0 (VAR_0);
}
