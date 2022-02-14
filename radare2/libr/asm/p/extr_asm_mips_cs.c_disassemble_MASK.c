
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_10__ {int size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_12__ {int bits; scalar_t__ syntax; int pc; scalar_t__* cpu; scalar_t__ big_endian; } ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,int *,int,int ,int,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 char* FUNC_8 (char*,int ,char*,scalar_t__*) ;
 int FUNC_9 (char*,char,int ) ;
 int FUNC_10 (scalar_t__*,char*) ;

__attribute__((used)) static int FUNC_11(RAsm *VAR_16, RAsmOp *VAR_17, const ut8 *VAR_18, int VAR_19) {
 cs_insn* VAR_20;
 int VAR_21, VAR_22, VAR_23 = -1;
 VAR_21 = (VAR_16->big_endian)? VAR_1: VAR_2;
 if (!VAR_17) {
  return 0;
 }
 if (VAR_16->cpu && *VAR_16->cpu) {
  if (!FUNC_10 (VAR_16->cpu, "micro")) {
   VAR_21 |= VAR_3;
  } else if (!FUNC_10 (VAR_16->cpu, "r6")) {
   VAR_21 |= VAR_7;
  } else if (!FUNC_10 (VAR_16->cpu, "v3")) {
   VAR_21 |= VAR_5;
  } else if (!FUNC_10 (VAR_16->cpu, "v2")) {



  }
 }
 VAR_21 |= (VAR_16->bits == 64)? VAR_8 : VAR_6;
 FUNC_6 (VAR_17, 0, sizeof (RAsmOp));
 VAR_17->size = 4;
 if (VAR_15 != 0) {
  FUNC_0 (&VAR_15);
 }
 VAR_23 = FUNC_3 (VAR_0, VAR_21, &VAR_15);
 if (VAR_23) {
  goto fin;
 }
 if (VAR_16->syntax == VAR_14) {
  FUNC_4 (VAR_15, VAR_11, VAR_13);
 } else {
  FUNC_4 (VAR_15, VAR_11, VAR_12);
 }
 FUNC_4 (VAR_15, VAR_9, VAR_10);
 VAR_22 = FUNC_1 (VAR_15, (ut8*)VAR_18, VAR_19, VAR_16->pc, 1, &VAR_20);
 if (VAR_22 < 1) {
  FUNC_7 (VAR_17, "invalid");
  VAR_17->size = 4;
  goto beach;
 }
 if (VAR_20->size < 1) {
  goto beach;
 }
 VAR_17->size = VAR_20->size;
 char *VAR_24 = FUNC_8 ("%s%s%s", VAR_20->mnemonic, VAR_20->op_str[0]? " ": "", VAR_20->op_str);
 if (VAR_24) {
  FUNC_9 (VAR_24, '$', 0);

  FUNC_7 (VAR_17, VAR_24);
  FUNC_5 (VAR_24);
 }
 FUNC_2 (VAR_20, VAR_22);
beach:

fin:
 return VAR_17->size;
}
