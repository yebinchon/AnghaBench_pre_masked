
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int ut64 ;
struct TYPE_23__ {int address; TYPE_8__* user; TYPE_10__* anal; } ;
struct TYPE_22__ {int type; } ;
struct TYPE_21__ {TYPE_4__* assembler; } ;
struct TYPE_20__ {TYPE_7__* core; } ;
struct TYPE_19__ {int io; } ;
struct TYPE_18__ {int bits; TYPE_3__* cur; } ;
struct TYPE_17__ {scalar_t__ name; } ;
struct TYPE_16__ {scalar_t__ arch; } ;
struct TYPE_15__ {scalar_t__ armthumb; } ;
struct TYPE_14__ {int bits; TYPE_6__ coreb; TYPE_5__ iob; int reg; TYPE_2__* cur; TYPE_1__ opt; } ;
typedef TYPE_7__ RCore ;
typedef TYPE_8__ RAnalOp ;
typedef TYPE_9__ RAnalEsil ;
typedef TYPE_10__ RAnal ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;
 int FUNC_1 (TYPE_10__*,int,int) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_6(RAnalEsil *VAR_2, const char *VAR_3, ut64 *VAR_4) {
 if (!VAR_2) {
  return 0;
 }
 RAnal *VAR_5 = VAR_2->anal;
 RAnalOp *VAR_6 = VAR_2->user;
 RCore *VAR_7 = VAR_5->coreb.core;


 ut64 VAR_8 = *VAR_4;
 if (VAR_5 && VAR_5->opt.armthumb) {
  if (VAR_5->cur && VAR_5->cur->arch && VAR_5->bits < 33 &&
      FUNC_5 (VAR_5->cur->arch, "arm") && !FUNC_4 (VAR_3, "pc") && VAR_6) {
   switch (VAR_6->type) {
   case 129:
   case 128:

    if (!(*VAR_4 & 1)) {
     FUNC_1 (VAR_5, *VAR_4, 32);
    } else {
     ut64 VAR_9 = FUNC_3 (VAR_5->reg, "pc");
     if (VAR_9 != VAR_0 && VAR_9 != VAR_1) {
      if (FUNC_2 (VAR_5->iob.io, *VAR_4, 1)) {
       FUNC_1 (VAR_5, *VAR_4 - 1, 16);
      }
     }
    }
    break;
   default:
    break;
   }
  }
 }
 if (VAR_7->assembler->bits == 32 && FUNC_5 (VAR_7->assembler->cur->name, "arm")) {
  if ((!(VAR_8 & 1)) && FUNC_2 (VAR_5->iob.io, VAR_8, 0)) {
   FUNC_0 (VAR_5->coreb.core, VAR_2->address, VAR_8);
  }
 }
 return 0;
}
