
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* mrb_value ;
typedef TYPE_1__* mrb_sym ;
typedef int mrb_state ;
struct TYPE_11__ {int ilen; int plen; int slen; int rlen; int nlocals; int nregs; int debug_info; struct TYPE_11__** reps; struct TYPE_11__** syms; struct TYPE_11__** pool; int * iseq; scalar_t__ flags; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
struct TYPE_12__ {int nlocals; int pc; int mpool; int ai; int nregs; int lines; int * mrb; int debug_start_pos; TYPE_1__* irep; int filename_index; int parser; scalar_t__ filename_sym; TYPE_1__** iseq; } ;
typedef TYPE_4__ codegen_scope ;


 int FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_1__**,int) ;
 int FUNC_2 (int *,int ,char const*,int ,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_8(codegen_scope *VAR_0)
{
  mrb_state *VAR_1 = VAR_0->mrb;
  mrb_irep *VAR_2 = VAR_0->irep;

  if (VAR_0->nlocals >= 0x3ff) {
    FUNC_0(VAR_0, "too many local variables");
  }
  VAR_2->flags = 0;
  if (VAR_0->iseq) {
    VAR_2->iseq = (mrb_code *)FUNC_1(VAR_0, VAR_0->iseq, sizeof(mrb_code)*VAR_0->pc);
    VAR_2->ilen = VAR_0->pc;
  }
  VAR_2->pool = (mrb_value*)FUNC_1(VAR_0, VAR_2->pool, sizeof(mrb_value)*VAR_2->plen);
  VAR_2->syms = (mrb_sym*)FUNC_1(VAR_0, VAR_2->syms, sizeof(mrb_sym)*VAR_2->slen);
  VAR_2->reps = (mrb_irep**)FUNC_1(VAR_0, VAR_2->reps, sizeof(mrb_irep*)*VAR_2->rlen);
  if (VAR_0->filename_sym) {
    mrb_sym VAR_3 = FUNC_5(VAR_0->parser, VAR_0->filename_index);
    const char *VAR_4 = FUNC_7(VAR_0->mrb, VAR_3, ((void*)0));

    FUNC_2(VAR_0->mrb, VAR_0->irep->debug_info,
                               VAR_4, VAR_0->lines, VAR_0->debug_start_pos, VAR_0->pc);
  }
  FUNC_3(VAR_0->mrb, VAR_0->lines);

  VAR_2->nlocals = VAR_0->nlocals;
  VAR_2->nregs = VAR_0->nregs;

  FUNC_4(VAR_1, VAR_0->ai);
  FUNC_6(VAR_0->mpool);
}
