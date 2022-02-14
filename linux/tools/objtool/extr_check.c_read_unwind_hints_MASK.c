
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct unwind_hint {scalar_t__ type; int sp_reg; int end; int sp_offset; } ;
struct section {int len; TYPE_1__* data; struct section* rela; } ;
struct rela {int addend; TYPE_2__* sym; } ;
struct objtool_file {int hints; int elf; } ;
struct cfi_reg {int offset; int base; } ;
struct TYPE_6__ {scalar_t__ type; int end; struct cfi_reg cfa; } ;
struct instruction {int save; int restore; int hint; TYPE_3__ state; int offset; int sec; } ;
struct TYPE_5__ {int sec; } ;
struct TYPE_4__ {scalar_t__ d_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int) ;
 struct instruction* FUNC_2 (struct objtool_file*,int ,int ) ;
 struct rela* FUNC_3 (struct section*,int) ;
 struct section* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct objtool_file *VAR_10)
{
 struct section *VAR_11, *VAR_12;
 struct rela *VAR_13;
 struct unwind_hint *VAR_14;
 struct instruction *VAR_15;
 struct cfi_reg *VAR_16;
 int VAR_17;

 VAR_11 = FUNC_4(VAR_10->elf, ".discard.unwind_hints");
 if (!VAR_11)
  return 0;

 VAR_12 = VAR_11->rela;
 if (!VAR_12) {
  FUNC_0("missing .rela.discard.unwind_hints section");
  return -1;
 }

 if (VAR_11->len % sizeof(struct unwind_hint)) {
  FUNC_0("struct unwind_hint size mismatch");
  return -1;
 }

 VAR_10->hints = 1;

 for (VAR_17 = 0; VAR_17 < VAR_11->len / sizeof(struct unwind_hint); VAR_17++) {
  VAR_14 = (struct unwind_hint *)VAR_11->data->d_buf + VAR_17;

  VAR_13 = FUNC_3(VAR_11, VAR_17 * sizeof(*VAR_14));
  if (!VAR_13) {
   FUNC_0("can't find rela for unwind_hints[%d]", VAR_17);
   return -1;
  }

  VAR_15 = FUNC_2(VAR_10, VAR_13->sym->sec, VAR_13->addend);
  if (!VAR_15) {
   FUNC_0("can't find insn for unwind_hints[%d]", VAR_17);
   return -1;
  }

  VAR_16 = &VAR_15->state.cfa;

  if (VAR_14->type == VAR_9) {
   VAR_15->save = 1;
   continue;

  } else if (VAR_14->type == VAR_8) {
   VAR_15->restore = 1;
   VAR_15->hint = 1;
   continue;
  }

  VAR_15->hint = 1;

  switch (VAR_14->sp_reg) {
  case 128:
   VAR_16->base = VAR_7;
   break;
  case 130:
   VAR_16->base = VAR_5;
   break;
  case 135:
   VAR_16->base = VAR_0;
   break;
  case 129:
   VAR_16->base = VAR_6;
   break;
  case 132:
   VAR_16->base = VAR_3;
   break;
  case 131:
   VAR_16->base = VAR_4;
   break;
  case 134:
   VAR_16->base = VAR_1;
   break;
  case 133:
   VAR_16->base = VAR_2;
   break;
  default:
   FUNC_1("unsupported unwind_hint sp base reg %d",
      VAR_15->sec, VAR_15->offset, VAR_14->sp_reg);
   return -1;
  }

  VAR_16->offset = VAR_14->sp_offset;
  VAR_15->state.type = VAR_14->type;
  VAR_15->state.end = VAR_14->end;
 }

 return 0;
}
