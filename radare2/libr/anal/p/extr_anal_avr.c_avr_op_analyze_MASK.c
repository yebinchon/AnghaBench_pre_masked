
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
typedef int ut16 ;
struct TYPE_9__ {int mask; int selector; int cycles; int size; int (* handler ) (int *,TYPE_1__*,int const*,int,int*,int *) ;int type; } ;
struct TYPE_8__ {int cycles; int size; int nopcode; int esil; void* val; void* ptr; void* jump; void* fail; void* addr; int type; int family; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;
typedef TYPE_2__ OPCODE_DESC ;
typedef int CPU_MODEL ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_2__* VAR_3 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_1__*,int const*,int,int*,int *) ;

__attribute__((used)) static OPCODE_DESC* FUNC_7(RAnal *VAR_4, RAnalOp *VAR_5, ut64 VAR_6, const ut8 *VAR_7, int VAR_8, CPU_MODEL *VAR_9) {
 OPCODE_DESC *VAR_10;
 if (VAR_8 < 2) {
  return ((void*)0);
 }
 ut16 VAR_11 = (VAR_7[1] << 8) | VAR_7[0];
 int VAR_12;
 char *VAR_13;


 FUNC_0 (VAR_5, 0, sizeof (RAnalOp));
 VAR_5->ptr = VAR_2;
 VAR_5->val = VAR_2;
 VAR_5->jump = VAR_2;
 FUNC_2 (&VAR_5->esil);


 for (VAR_10 = VAR_3; VAR_10->handler; VAR_10++) {
  if ((VAR_11 & VAR_10->mask) == VAR_10->selector) {
   VAR_12 = 0;


   VAR_5->cycles = VAR_10->cycles;
   VAR_5->size = VAR_10->size;
   VAR_5->type = VAR_10->type;
   VAR_5->jump = VAR_2;
   VAR_5->fail = VAR_2;

   VAR_5->addr = VAR_6;


   FUNC_4 (&VAR_5->esil, "");


   VAR_10->handler (VAR_4, VAR_5, VAR_7, VAR_8, &VAR_12, VAR_9);
   if (VAR_12) {
    goto INVALID_OP;
   }
   if (VAR_5->cycles <= 0) {

    VAR_10->cycles = 2;
   }
   VAR_5->nopcode = (VAR_5->type == VAR_1);


   VAR_13 = FUNC_1 (&VAR_5->esil);
   if (VAR_13 && FUNC_5 (VAR_13) > 1) {
    VAR_13 += FUNC_5 (VAR_13) - 1;
    if (*VAR_13 == ',') {
     *VAR_13 = '\0';
    }
   }

   return VAR_10;
  }
 }


 if ((VAR_11 & 0xff00) == 0xff00 && (VAR_11 & 0xf) > 7) {
  goto INVALID_OP;
 }

INVALID_OP:


 VAR_5->family = VAR_0;
 VAR_5->type = VAR_1;
 VAR_5->addr = VAR_6;
 VAR_5->fail = VAR_2;
 VAR_5->jump = VAR_2;
 VAR_5->ptr = VAR_2;
 VAR_5->val = VAR_2;
 VAR_5->nopcode = 1;
 VAR_5->cycles = 1;
 VAR_5->size = 2;


 FUNC_3 (&VAR_5->esil, "1,$");

 return ((void*)0);
}
