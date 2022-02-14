
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_16__ {int size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_18__ {int bits; scalar_t__ syntax; scalar_t__* features; int pc; } ;
struct TYPE_17__ {int size; char* buf_asm; } ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int,int const*,int,int ,int,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int,int const**,size_t*,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int const*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_13 (TYPE_2__*,char*) ;
 char* FUNC_14 (char**) ;
 char* FUNC_15 (char*,int ,char*,scalar_t__*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 char* FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int) ;
 char* FUNC_21 (char*,char*) ;

__attribute__((used)) static int FUNC_22(RAsm *VAR_17, RAsmOp *VAR_18, const ut8 *VAR_19, int VAR_20) {
 static int VAR_21 = 0;
 int VAR_22, VAR_23;
 ut64 VAR_24 = VAR_17->pc;

 VAR_22 = (VAR_17->bits == 64)? VAR_3:
  (VAR_17->bits == 32)? VAR_2:
  (VAR_17->bits == 16)? VAR_1: 0;
 if (VAR_15 && VAR_22 != VAR_21) {
  FUNC_1 (&VAR_15);
  VAR_15 = 0;
 }
 if (VAR_18) {
  VAR_18->size = 0;
 }
 VAR_21 = VAR_22;
 if (VAR_15 == 0) {
  VAR_23 = FUNC_6 (VAR_0, VAR_22, &VAR_15);
  if (VAR_23) {
   return 0;
  }
 }
 if (VAR_17->features && *VAR_17->features) {
  FUNC_7 (VAR_15, VAR_4, VAR_6);
 } else {
  FUNC_7 (VAR_15, VAR_4, VAR_5);
 }





 if (VAR_17->syntax == VAR_14) {



 } else if (VAR_17->syntax == VAR_12) {
  FUNC_7 (VAR_15, VAR_7, VAR_8);
 } else {
  FUNC_7 (VAR_15, VAR_7, VAR_9);
 }
 if (!VAR_18) {
  return 1;
 }
 VAR_18->size = 1;
 cs_insn *VAR_25 = ((void*)0);
 VAR_16 = FUNC_2 (VAR_15, (const ut8*)VAR_19, VAR_20, VAR_24, 1, &VAR_25);

 if (VAR_18) {
  VAR_18->size = 0;
 }
 if (VAR_17->features && *VAR_17->features) {
  if (!FUNC_0 (VAR_17, VAR_25)) {
   VAR_18->size = VAR_25->size;
   FUNC_13 (VAR_18, "illegal");
  }
 }
 if (VAR_18->size == 0 && VAR_16 > 0 && VAR_25->size > 0) {
  char *VAR_26;
  VAR_18->size = VAR_25->size;
  char *VAR_27 = FUNC_15 ("%s%s%s",
    VAR_25->mnemonic, VAR_25->op_str[0]?" ":"",
    VAR_25->op_str);
  VAR_26 = FUNC_21 (VAR_27, "ptr ");
  if (VAR_26) {
   FUNC_11 (VAR_26, VAR_26 + 4, FUNC_19 (VAR_26 + 4) + 1);
  }
  FUNC_13 (VAR_18, VAR_27);
 } else {
  FUNC_8 (VAR_17, VAR_18, VAR_19, VAR_20);
 }
 if (VAR_17->syntax == VAR_13) {
  char *VAR_28 = FUNC_14 (&VAR_18->buf_asm);
  if (!FUNC_20 (VAR_28, "je ", 3)) {
   FUNC_10 (VAR_28, "jz", 2);
  } else if (!FUNC_20 (VAR_28, "jne ", 4)) {
   FUNC_10 (VAR_28, "jnz", 3);
  }
 }
 if (VAR_25) {
  FUNC_4 (VAR_25, VAR_16);
 }

 return VAR_18->size;
}
