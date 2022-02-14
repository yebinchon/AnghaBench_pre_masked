
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_28__ {int size; TYPE_2__* detail; int id; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_3__ cs_insn ;
struct TYPE_30__ {int bits; } ;
struct TYPE_29__ {int cycles; int size; int family; int opex; scalar_t__ prefix; int cond; int id; scalar_t__ nopcode; int mnemonic; int type; int esil; scalar_t__ delay; int * dst; int ** src; void* val; void* ptr; void* fail; void* jump; } ;
struct TYPE_26__ {int* prefix; int* opcode; } ;
struct TYPE_27__ {TYPE_1__ x86; } ;
typedef int RAnalOpMask ;
typedef TYPE_4__ RAnalOp ;
typedef TYPE_5__ RAnal ;


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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;



 int FUNC_0 (TYPE_5__*,TYPE_4__*,int ,int const*,int,scalar_t__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int ,int const*,int,scalar_t__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__,int const*,int,int ,int,TYPE_3__**) ;
 int FUNC_5 (scalar_t__,int const**,size_t*,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (int*) ;
 TYPE_3__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int,scalar_t__*) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_21 ;
 int FUNC_12 (TYPE_4__*,char,int) ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*,scalar_t__*,TYPE_3__*) ;
 int FUNC_14 (int *,scalar_t__,TYPE_3__*) ;
 int FUNC_15 (char*,int ,char*,scalar_t__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int FUNC_19(RAnal *VAR_22, RAnalOp *VAR_23, ut64 VAR_24, const ut8 *VAR_25, int VAR_26, RAnalOpMask VAR_27) {
 static int VAR_28 = 0;



 cs_insn *VAR_29 = ((void*)0);
 int VAR_30 = (VAR_22->bits==64)? VAR_4:
  (VAR_22->bits==32)? VAR_3:
  (VAR_22->bits==16)? VAR_2: 0;
 int VAR_31, VAR_32;

 if (VAR_21 && VAR_30 != VAR_28) {
  if (VAR_21 != 0) {
   FUNC_3 (&VAR_21);
   VAR_21 = 0;
  }
 }
 VAR_28 = VAR_30;
 if (VAR_21 == 0) {
  VAR_32 = FUNC_10 (VAR_0, VAR_30, &VAR_21);
  if (VAR_32 != VAR_1) {
   VAR_21 = 0;
   return 0;
  }
 }
 FUNC_12 (VAR_23, '\0', sizeof (RAnalOp));
 VAR_23->cycles = 1;
 VAR_23->type = VAR_18;
 VAR_23->jump = VAR_19;
 VAR_23->fail = VAR_19;
 VAR_23->ptr = VAR_23->val = VAR_19;
 VAR_23->src[0] = ((void*)0);
 VAR_23->src[1] = ((void*)0);
 VAR_23->dst = ((void*)0);
 VAR_23->size = 0;
 VAR_23->delay = 0;
 FUNC_16 (&VAR_23->esil);
 FUNC_11 (VAR_21, VAR_5, VAR_6);
 VAR_31 = FUNC_4 (VAR_21, (const ut8*)VAR_25, VAR_26, VAR_24, 1, &VAR_29);

 if (VAR_31 < 1) {
  VAR_23->type = VAR_17;
  if (VAR_27 & VAR_10) {
   VAR_23->mnemonic = FUNC_18 ("invalid");
  }
 } else {
  if (VAR_27 & VAR_10) {
   VAR_23->mnemonic = FUNC_15 ("%s%s%s",
    VAR_29->mnemonic,
    VAR_29->op_str[0]?" ":"",
    VAR_29->op_str);
  }




  VAR_23->nopcode = FUNC_8 (VAR_29->detail->x86.prefix)
   + FUNC_8 (VAR_29->detail->x86.opcode);
  VAR_23->size = VAR_29->size;
  VAR_23->id = VAR_29->id;
  VAR_23->family = VAR_7;
  VAR_23->prefix = 0;
  VAR_23->cond = FUNC_2 (VAR_29->id);
  switch (VAR_29->detail->x86.prefix[0]) {
  case 128:
   VAR_23->prefix |= VAR_16;
   break;
  case 129:
   VAR_23->prefix |= VAR_15;
   break;
  case 130:
   VAR_23->prefix |= VAR_14;
   VAR_23->family = VAR_9;
   break;
  }
  FUNC_0 (VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, &VAR_21, VAR_29);
  FUNC_17 (VAR_23, VAR_29);
  if (VAR_27 & VAR_11) {
   FUNC_1 (VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, &VAR_21, VAR_29);
  }
  if (VAR_27 & VAR_12) {
   FUNC_14 (&VAR_23->opex, VAR_21, VAR_29);
  }
  if (VAR_27 & VAR_13) {
   FUNC_13 (VAR_22, VAR_23, &VAR_21, VAR_29);
  }
 }

 if (VAR_29) {






  FUNC_6 (VAR_29, VAR_31);

 }

 return VAR_23->size;
}
