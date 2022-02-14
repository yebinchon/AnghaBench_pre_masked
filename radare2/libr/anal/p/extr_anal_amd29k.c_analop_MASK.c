
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_9__ {int op_type; int member_0; } ;
typedef TYPE_1__ amd29k_instr_t ;
struct TYPE_11__ {int cpu; } ;
struct TYPE_10__ {int type; int size; int eob; scalar_t__ delay; void* fail; void* jump; void* val; void* ptr; } ;
typedef int RAnalOpMask ;
typedef TYPE_2__ RAnalOp ;
typedef TYPE_3__ RAnal ;





 int VAR_0 ;

 void* VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_2, RAnalOp *VAR_3, ut64 VAR_4, const ut8 *VAR_5, int VAR_6, RAnalOpMask VAR_7) {
 VAR_3->delay = 0;
 VAR_3->type = VAR_0;
 VAR_3->jump = VAR_3->fail = VAR_1;
 VAR_3->ptr = VAR_3->val = VAR_1;
 VAR_3->size = 4;
 VAR_3->eob = 0;



 amd29k_instr_t VAR_8 = {0};
 if (FUNC_0 (VAR_5, VAR_6, &VAR_8, VAR_2->cpu)) {
  VAR_3->type = VAR_8.op_type;
  switch (VAR_3->type) {
  case 129:
   VAR_3->jump = FUNC_2 (VAR_4, &VAR_8);

   break;
  case 131:
   VAR_3->jump = FUNC_2 (VAR_4, &VAR_8);
   VAR_3->fail = VAR_4 + 4;

   break;
  case 130:
   if (FUNC_1 (&VAR_8)) {
    VAR_3->type = 128;
    VAR_3->eob = 1;
   }

   break;
  case 128:
   VAR_3->eob = 1;

   break;
  default:
   VAR_3->delay = 0;
   break;
  }
 }

 return VAR_3->size;
}
