
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ud {int dis_mode; size_t pfx_seg; int mnemonic; TYPE_2__* operand; scalar_t__ pfx_repne; scalar_t__ pfx_repe; scalar_t__ pfx_rep; scalar_t__ pfx_lock; scalar_t__ pfx_adr; TYPE_1__* itab_entry; scalar_t__ pfx_opr; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ size; scalar_t__ base; } ;
struct TYPE_4__ {int prefix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct ud*,TYPE_2__*,int) ;
 int FUNC_3 (struct ud*,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int * VAR_7 ;

extern void
FUNC_6(struct ud* VAR_8)
{

  if (!FUNC_1(VAR_8->itab_entry->prefix) && VAR_8->pfx_opr) {
    switch (VAR_8->dis_mode) {
    case 16: FUNC_3(VAR_8, "o32 "); break;
    case 32:
    case 64: FUNC_3(VAR_8, "o16 "); break;
    }
  }


  if (!FUNC_0(VAR_8->itab_entry->prefix) && VAR_8->pfx_adr) {
    switch (VAR_8->dis_mode) {
    case 16: FUNC_3(VAR_8, "a32 "); break;
    case 32: FUNC_3(VAR_8, "a16 "); break;
    case 64: FUNC_3(VAR_8, "a32 "); break;
    }
  }

  if (VAR_8->pfx_seg &&
      VAR_8->operand[0].type != VAR_3 &&
      VAR_8->operand[1].type != VAR_3 ) {
    FUNC_3(VAR_8, "%s ", VAR_7[VAR_8->pfx_seg - VAR_5]);
  }

  if (VAR_8->pfx_lock) {
    FUNC_3(VAR_8, "lock ");
  }
  if (VAR_8->pfx_rep) {
    FUNC_3(VAR_8, "rep ");
  } else if (VAR_8->pfx_repe) {
    FUNC_3(VAR_8, "repe ");
  } else if (VAR_8->pfx_repne) {
    FUNC_3(VAR_8, "repne ");
  }


  FUNC_3(VAR_8, "%s", FUNC_4(VAR_8->mnemonic));

  if (VAR_8->operand[0].type != VAR_0) {
    int VAR_9 = 0;
    FUNC_3(VAR_8, " ");
    if (VAR_8->operand[0].type == VAR_3) {
      if (VAR_8->operand[1].type == VAR_2 ||
          VAR_8->operand[1].type == VAR_1 ||
          VAR_8->operand[1].type == VAR_0 ||
          (VAR_8->operand[0].size != VAR_8->operand[1].size)) {
          VAR_9 = 1;
      } else if (VAR_8->operand[1].type == VAR_4 &&
                 VAR_8->operand[1].base == VAR_6) {
          switch (VAR_8->mnemonic) {
          case 134:
          case 132:
          case 131:
          case 133:
          case 129:
          case 128:
          case 130:
              VAR_9 = 1;
              break;
          default: break;
          }
      }
    }
    FUNC_2(VAR_8, &VAR_8->operand[0], VAR_9);
  }

  if (VAR_8->operand[1].type != VAR_0) {
    int VAR_10 = 0;
    FUNC_3(VAR_8, ", ");
    if (VAR_8->operand[1].type == VAR_3 &&
        VAR_8->operand[0].size != VAR_8->operand[1].size &&
        !FUNC_5(&VAR_8->operand[0])) {
      VAR_10 = 1;
    }
    FUNC_2(VAR_8, &VAR_8->operand[1], VAR_10);
  }

  if (VAR_8->operand[2].type != VAR_0) {
    int VAR_11 = 0;
    FUNC_3(VAR_8, ", ");
    if (VAR_8->operand[2].type == VAR_3 &&
        VAR_8->operand[2].size != VAR_8->operand[1].size) {
      VAR_11 = 1;
    }
    FUNC_2(VAR_8, &VAR_8->operand[2], VAR_11);
  }

  if (VAR_8->operand[3].type != VAR_0) {
    FUNC_3(VAR_8, ", ");
    FUNC_2(VAR_8, &VAR_8->operand[3], 0);
  }
}
