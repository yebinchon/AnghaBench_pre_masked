
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_15__ {int type; } ;
struct TYPE_16__ {size_t op; int pseudoInstruction; int value; void* immediate; void* csr; void* dest_reg; void* src0_reg; void* src1_reg; TYPE_14__ op_decode; } ;
typedef TYPE_1__ RAsmLm32Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_14__* VAR_2 ;
 size_t VAR_3 ;

 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 void* FUNC_18 (int,int ,void*) ;



__attribute__((used)) static int FUNC_19(RAsmLm32Instruction *VAR_4) {
 VAR_4->op = FUNC_3 (VAR_4->value);
 if (VAR_4->op >= VAR_3) {
  return -1;
 }
 VAR_4->op_decode = VAR_2[VAR_4->op];

 switch (VAR_4->op_decode.type) {
 case 133:
  VAR_4->dest_reg = FUNC_5 (VAR_4->value);
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  VAR_4->immediate = FUNC_18 (0, VAR_0,
    FUNC_0 (VAR_4->value));
  break;
 case 134:
  VAR_4->dest_reg = FUNC_5 (VAR_4->value);
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  VAR_4->immediate = FUNC_18 (2, VAR_0,
    FUNC_0 (VAR_4->value));
  break;
 case 132:
  VAR_4->dest_reg = FUNC_5 (VAR_4->value);
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  VAR_4->immediate = FUNC_0 (VAR_4->value);
  break;
 case 131:
  if (FUNC_7 (VAR_4)) {
   return -1;
  }
  VAR_4->dest_reg = FUNC_5 (VAR_4->value);
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  VAR_4->immediate = FUNC_2 (VAR_4->value);
  break;
 case 136:
  if (FUNC_7 (VAR_4)) {
   return -1;
  }


  VAR_4->immediate = FUNC_2 (VAR_4->value);
  break;
 case 137:
  if (FUNC_8 (VAR_4)) {
   return -1;
  }
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  break;
 case 128:
  if (FUNC_9 (VAR_4)) {
   return -1;
  }
  VAR_4->dest_reg = FUNC_6 (VAR_4->value);
  VAR_4->src0_reg = FUNC_4 (VAR_4->value);
  break;
 case 129:
  VAR_4->dest_reg = FUNC_6 (VAR_4->value);
  VAR_4->src0_reg = FUNC_5 (VAR_4->value);
  VAR_4->src1_reg = FUNC_4 (VAR_4->value);
  break;
 case 135:
  if (FUNC_10 (VAR_4)) {
   return -1;
  }
  VAR_4->src0_reg = FUNC_5 (VAR_4->value);
  VAR_4->csr = FUNC_4 (VAR_4->value);
  break;
 case 139:

  if (FUNC_9 (VAR_4)) {
   return -1;
  }
  VAR_4->dest_reg = FUNC_6 (VAR_4->value);
  VAR_4->csr = FUNC_4 (VAR_4->value);
  break;
 case 138:
  VAR_4->immediate = FUNC_18 (2, VAR_1,
    FUNC_1 (VAR_4->value));
  break;
 case 130:
 default:
  return -1;
 }


 VAR_4->pseudoInstruction = FUNC_17 (VAR_4) || FUNC_11 (VAR_4) ||
   FUNC_12 (VAR_4) || FUNC_15 (VAR_4) || FUNC_13 (VAR_4) ||
   FUNC_14 (VAR_4) || FUNC_16 (VAR_4);

 return 0;
}
