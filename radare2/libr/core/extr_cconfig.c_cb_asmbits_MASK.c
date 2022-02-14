
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_20__ {int bits; int * cur; } ;
struct TYPE_19__ {int bits; int bp; int reg; TYPE_3__* h; } ;
struct TYPE_18__ {int i_value; } ;
struct TYPE_17__ {int config; TYPE_10__* anal; TYPE_6__* dbg; TYPE_1__* print; TYPE_9__* assembler; } ;
struct TYPE_16__ {char* (* reg_profile ) (TYPE_6__*) ;} ;
struct TYPE_15__ {int arch; } ;
struct TYPE_14__ {int bits; } ;
struct TYPE_13__ {int bits; int syscall; int reg; TYPE_2__* cur; } ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RConfigNode ;
typedef int RAsmPlugin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_10__*,int ) ;
 int FUNC_4 (TYPE_10__*,int) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_9__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*,int) ;
 char* FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_6__*,int ,int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char const*,int,char const*,char const*) ;
 char* FUNC_16 (TYPE_6__*) ;

__attribute__((used)) static bool FUNC_17(void *VAR_3, void *VAR_4) {
 RCore *VAR_5 = (RCore *) VAR_3;
 RConfigNode *VAR_6 = (RConfigNode *) VAR_4;
 int VAR_7 = 0;
 if (!VAR_5) {
  FUNC_1 ("user can't be NULL\n");
  return 0;
 }

 int VAR_8 = VAR_6->i_value;







 if (VAR_8 > 0) {
  VAR_7 = FUNC_6 (VAR_5->assembler, VAR_8);
  if (!VAR_7) {
   RAsmPlugin *VAR_9 = VAR_5->assembler->cur;
   if (!VAR_9) {
    FUNC_1 ("e asm.bits: Cannot set value, no plugins defined yet\n");
    VAR_7 = 1;
   }

  }
  if (!FUNC_4 (VAR_5->anal, VAR_8)) {
   FUNC_1 ("asm.arch: Cannot setup '%d' bits analysis engine\n", VAR_8);
  }
  VAR_5->print->bits = VAR_8;
 }
 if (VAR_5->dbg && VAR_5->anal && VAR_5->anal->cur) {
  FUNC_13 (VAR_5->dbg, VAR_5->anal->cur->arch, VAR_8);
  bool VAR_10 = FUNC_10 (VAR_5->config, "cfg.debug");
  if (VAR_10) {
   if (VAR_5->dbg->h && VAR_5->dbg->h->reg_profile) {
    char *VAR_11 = VAR_5->dbg->h->reg_profile (VAR_5->dbg);
    FUNC_14 (VAR_5->dbg->reg, VAR_11);
    FUNC_14 (VAR_5->anal->reg, VAR_11);
    FUNC_2 (VAR_11);
   }
  } else {
   (void)FUNC_5 (VAR_5->anal);
  }
 }
 FUNC_12 (VAR_5);
 const char *VAR_12 = FUNC_9 (VAR_5->config, "asm.os");
 const char *VAR_13 = FUNC_9 (VAR_5->config, "asm.arch");
 const char *VAR_14 = FUNC_9 (VAR_5->config, "asm.cpu");
 if (VAR_5->anal) {
  if (!FUNC_15 (VAR_5->anal->syscall, VAR_13, VAR_8, VAR_14, VAR_12)) {


  }
  FUNC_0 (VAR_5->config, VAR_13, VAR_5->anal->bits);
  if (VAR_5->dbg) {
   FUNC_8 (VAR_5->dbg->bp, VAR_13, VAR_5->anal->bits);
   FUNC_11 (VAR_5->config, "dbg.bpsize", FUNC_7 (VAR_5->dbg->bp));
  }
 }

 {
  int VAR_15 = FUNC_3 (VAR_5->anal, VAR_0);
  FUNC_11 (VAR_5->config, "asm.pcalign", (VAR_15 != -1)? VAR_15: 0);
 }
 return VAR_7;
}
