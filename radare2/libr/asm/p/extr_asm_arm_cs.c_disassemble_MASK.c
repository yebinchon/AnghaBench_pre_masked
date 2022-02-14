
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef int cs_mode ;
struct TYPE_10__ {int size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_12__ {int immdisp; int bits; scalar_t__ syntax; scalar_t__* features; int pc; scalar_t__* cpu; scalar_t__ big_endian; } ;
struct TYPE_11__ {int size; int buf_asm; } ;
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
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,int const*,int ,int ,int,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (char*,char) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (char*,int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_11 (scalar_t__*,char*) ;

__attribute__((used)) static int FUNC_12(RAsm *VAR_16, RAsmOp *VAR_17, const ut8 *VAR_18, int VAR_19) {
 static int VAR_20 = -1;
 static int VAR_21 = 32;
 bool VAR_22 = VAR_16->immdisp;
 cs_insn* VAR_23 = ((void*)0);
 cs_mode VAR_24 = 0;
 int VAR_25, VAR_26 = 0;
 VAR_24 |= (VAR_16->bits == 16)? VAR_6: VAR_2;
 VAR_24 |= (VAR_16->big_endian)? VAR_3: VAR_4;
 if (VAR_24 != VAR_20 || VAR_16->bits != VAR_21) {
  FUNC_2 (&VAR_15);
  VAR_15 = 0;
  VAR_20 = VAR_24;
  VAR_21 = VAR_16->bits;
 }

 if (VAR_16->cpu) {
  if (FUNC_11 (VAR_16->cpu, "cortex")) {
   VAR_24 |= VAR_5;
  }
  if (VAR_16->bits != 64) {
   if (FUNC_11 (VAR_16->cpu, "v8")) {
    VAR_24 |= VAR_7;
   }
  }
 }
 if (VAR_16->features && VAR_16->bits != 64) {
  if (FUNC_11 (VAR_16->features, "v8")) {
   VAR_24 |= VAR_7;
  }
 }
 if (VAR_17) {
  VAR_17->size = 4;
  FUNC_9 (&VAR_17->buf_asm, "");
 }
 if (!VAR_15 || VAR_24 != VAR_20) {
  VAR_25 = (VAR_16->bits == 64)?
   FUNC_5 (VAR_1, VAR_24, &VAR_15):
   FUNC_5 (VAR_0, VAR_24, &VAR_15);
  if (VAR_25) {
   VAR_25 = -1;
   goto beach;
  }
 }
 FUNC_6 (VAR_15, VAR_11, (VAR_16->syntax == VAR_14)
   ? VAR_13
   : VAR_12);
 FUNC_6 (VAR_15, VAR_8, (VAR_16->features && *VAR_16->features)
  ? VAR_10: VAR_9);
 if (!VAR_18) {
  goto beach;
 }
 VAR_26 = FUNC_3 (VAR_15, VAR_18, FUNC_0 (4, VAR_19), VAR_16->pc, 1, &VAR_23);
 if (VAR_26 < 1 || VAR_23->size < 1) {
  VAR_25 = -1;
  goto beach;
 }
 if (VAR_17) {
  VAR_17->size = 0;
 }
 if (VAR_16->features && *VAR_16->features) {
  if (!FUNC_1 (VAR_16, VAR_23) && VAR_17) {
   VAR_17->size = VAR_23->size;
   FUNC_9 (&VAR_17->buf_asm, "illegal");
  }
 }
 if (VAR_17 && !VAR_17->size) {
  VAR_17->size = VAR_23->size;
  char *VAR_27 = FUNC_10 ("%s%s%s",
   VAR_23->mnemonic,
   VAR_23->op_str[0]?" ":"",
   VAR_23->op_str);
  if (!VAR_22) {
   FUNC_7 (VAR_27, '#');
  }
  FUNC_9 (&VAR_17->buf_asm, VAR_27);
 }
 FUNC_4 (VAR_23, VAR_26);
 beach:
 FUNC_2 (&VAR_15);
 if (VAR_17) {
  if (!*FUNC_8 (&VAR_17->buf_asm)) {
   FUNC_9 (&VAR_17->buf_asm, "invalid");
  }
  return VAR_17->size;
 }
 return VAR_25;
}
