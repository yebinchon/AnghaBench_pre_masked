
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ud {int dis_mode; int mnemonic; TYPE_3__* operand; int br_far; scalar_t__ pfx_repne; scalar_t__ pfx_repe; scalar_t__ pfx_rep; scalar_t__ pfx_lock; scalar_t__ pfx_adr; TYPE_1__* itab_entry; scalar_t__ pfx_opr; } ;
struct TYPE_5__ {int ubyte; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ lval; } ;
struct TYPE_4__ {int prefix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ud*,TYPE_3__*) ;
 int FUNC_3 (struct ud*,char*,...) ;
 int FUNC_4 (int) ;

extern void
FUNC_5(struct ud *VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = 0;


  if (! FUNC_1(VAR_2->itab_entry->prefix) && VAR_2->pfx_opr) {
  switch (VAR_2->dis_mode) {
    case 16:
      FUNC_3(VAR_2, "o32 ");
      break;
    case 32:
    case 64:
      FUNC_3(VAR_2, "o16 ");
      break;
  }
  }


  if (! FUNC_0(VAR_2->itab_entry->prefix) && VAR_2->pfx_adr) {
  switch (VAR_2->dis_mode) {
    case 16:
      FUNC_3(VAR_2, "a32 ");
      break;
    case 32:
      FUNC_3(VAR_2, "a16 ");
      break;
    case 64:
      FUNC_3(VAR_2, "a32 ");
      break;
  }
  }

  if (VAR_2->pfx_lock)
    FUNC_3(VAR_2, "lock ");
  if (VAR_2->pfx_rep) {
    FUNC_3(VAR_2, "rep ");
  } else if (VAR_2->pfx_repe) {
    FUNC_3(VAR_2, "repe ");
  } else if (VAR_2->pfx_repne) {
    FUNC_3(VAR_2, "repne ");
  }


  switch (VAR_2->mnemonic) {
  case 128:
    FUNC_3(VAR_2, "lret ");
    break;
  case 131:
    FUNC_3(VAR_2, ".byte 0x%x", VAR_2->operand[0].lval.ubyte);
    return;
  case 129:
  case 132:
    if (VAR_2->br_far) FUNC_3(VAR_2, "l");
        if (VAR_2->operand[0].type == VAR_1) {
          VAR_4 = 1;
        }
    FUNC_3(VAR_2, "%s", FUNC_4(VAR_2->mnemonic));
    break;
  case 133:
  case 130:
    if (VAR_2->operand[0].type != VAR_0)
      FUNC_2(VAR_2, &VAR_2->operand[0]);
    if (VAR_2->operand[1].type != VAR_0) {
      FUNC_3(VAR_2, ",");
      FUNC_2(VAR_2, &VAR_2->operand[1]);
    }
    return;
  default:
    FUNC_3(VAR_2, "%s", FUNC_4(VAR_2->mnemonic));
  }

  if (VAR_3 == 8) {
    FUNC_3(VAR_2, "b");
  } else if (VAR_3 == 16) {
    FUNC_3(VAR_2, "w");
  } else if (VAR_3 == 64) {
    FUNC_3(VAR_2, "q");
  }

  if (VAR_4) {
    FUNC_3(VAR_2, " *");
  } else {
    FUNC_3(VAR_2, " ");
  }

  if (VAR_2->operand[3].type != VAR_0) {
    FUNC_2(VAR_2, &VAR_2->operand[3]);
    FUNC_3(VAR_2, ", ");
  }
  if (VAR_2->operand[2].type != VAR_0) {
    FUNC_2(VAR_2, &VAR_2->operand[2]);
    FUNC_3(VAR_2, ", ");
  }
  if (VAR_2->operand[1].type != VAR_0) {
    FUNC_2(VAR_2, &VAR_2->operand[1]);
    FUNC_3(VAR_2, ", ");
  }
  if (VAR_2->operand[0].type != VAR_0) {
    FUNC_2(VAR_2, &VAR_2->operand[0]);
  }
}
