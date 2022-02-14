
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lineno; int jmp; scalar_t__ filename_sym; int mrb; int mpool; int lines; int iseq; struct TYPE_3__* prev; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,scalar_t__,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(codegen_scope *VAR_1, const char *VAR_2)
{
  if (!VAR_1) return;
  while (VAR_1->prev) {
    codegen_scope *VAR_3 = VAR_1->prev;
    FUNC_2(VAR_1->mrb, VAR_1->iseq);
    FUNC_2(VAR_1->mrb, VAR_1->lines);
    FUNC_3(VAR_1->mpool);
    VAR_1 = VAR_3;
  }

  if (VAR_1->filename_sym && VAR_1->lineno) {
    const char *VAR_4 = FUNC_4(VAR_1->mrb, VAR_1->filename_sym, ((void*)0));
    FUNC_1(VAR_0, "codegen error:%s:%d: %s\n", VAR_4, VAR_1->lineno, VAR_2);
  }
  else {
    FUNC_1(VAR_0, "codegen error: %s\n", VAR_2);
  }

  FUNC_0(&VAR_1->jmp);
}
