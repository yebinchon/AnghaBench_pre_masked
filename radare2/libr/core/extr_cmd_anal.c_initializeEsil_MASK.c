
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_15__ {int reg; TYPE_4__* esil; } ;
struct TYPE_14__ {int exectrap; void* cmd_step_out; void* cmd_step; int cmd; void* verbose; } ;
struct TYPE_13__ {int paddr; int vaddr; } ;
struct TYPE_12__ {scalar_t__ has_va; } ;
struct TYPE_11__ {TYPE_8__* anal; int offset; int bin; int config; } ;
typedef int RList ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RBinInfo ;
typedef TYPE_3__ RBinAddr ;
typedef TYPE_4__ RAnalEsil ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int,int,unsigned int) ;
 int FUNC_2 (TYPE_4__*,TYPE_8__*,int,int,int) ;
 int * FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 char* FUNC_5 (int ,char*) ;
 void* FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 char* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char const*,int ) ;
 void* FUNC_13 (char const*) ;

__attribute__((used)) static ut64 FUNC_14(RCore *VAR_3) {
 const char *VAR_4 = FUNC_11 (VAR_3->anal->reg, VAR_0);
 int VAR_5 = FUNC_6 (VAR_3->config, "esil.romem");
 int VAR_6 = FUNC_6 (VAR_3->config, "esil.stats");
 int VAR_7 = FUNC_6 (VAR_3->config, "esil.iotrap");
 int VAR_8 = FUNC_6 (VAR_3->config, "esil.exectrap");
 int VAR_9 = FUNC_6 (VAR_3->config, "esil.stack.depth");
 int VAR_10 = FUNC_6 (VAR_3->config, "esil.noNULL");
 unsigned int VAR_11 = FUNC_6 (VAR_3->config, "esil.addr.size");
 if (!(VAR_3->anal->esil = FUNC_1 (VAR_9, VAR_7, VAR_11))) {
  return VAR_1;
 }
 ut64 VAR_12;
 RAnalEsil *VAR_13 = VAR_3->anal->esil;
 VAR_13->verbose = FUNC_6 (VAR_3->config, "esil.verbose");
 VAR_13->cmd = VAR_2;
 FUNC_2 (VAR_13, VAR_3->anal, VAR_5, VAR_6, VAR_10);
 {
  const char *VAR_14 = FUNC_5 (VAR_3->config, "cmd.esil.step");
  if (VAR_14 && *VAR_14) {
   VAR_13->cmd_step = FUNC_13 (VAR_14);
  }
  const char *VAR_15 = FUNC_5 (VAR_3->config, "cmd.esil.stepout");
  if (VAR_15 && *VAR_15) {
   VAR_13->cmd_step_out = FUNC_13 (VAR_15);
  }
  {
   const char *VAR_16 = FUNC_5 (VAR_3->config, "cmd.esil.intr");
   if (VAR_16) {
    char *VAR_17 = FUNC_13 (VAR_16);
    if (VAR_17) {
     FUNC_7 (VAR_3->config, "cmd.esil.intr", VAR_17);
     FUNC_0 (VAR_17);
    }
   }
  }
 }
 VAR_13->exectrap = VAR_8;
 RList *VAR_18 = FUNC_3 (VAR_3->bin);
 RBinAddr *VAR_19 = ((void*)0);
 RBinInfo *VAR_20 = ((void*)0);
 if (VAR_18 && !FUNC_8 (VAR_18)) {
  VAR_19 = (RBinAddr *)FUNC_9 (VAR_18);
  VAR_20 = FUNC_4 (VAR_3->bin);
  VAR_12 = VAR_20->has_va? VAR_19->vaddr: VAR_19->paddr;
  FUNC_10 (VAR_18, VAR_19);
 } else {
  VAR_12 = VAR_3->offset;
 }
 FUNC_12 (VAR_3->anal->reg, VAR_4, VAR_12);

 return VAR_12;
}
