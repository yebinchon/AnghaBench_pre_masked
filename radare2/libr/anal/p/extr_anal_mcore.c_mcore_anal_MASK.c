
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_11__ {int type; TYPE_1__* args; } ;
typedef TYPE_2__ mcore_t ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_3__ mcore_handle ;
struct TYPE_13__ {int type; int size; int eob; void* jump; void* fail; void* val; void* ptr; scalar_t__ delay; } ;
struct TYPE_10__ {scalar_t__ value; } ;
typedef int RAnalOpMask ;
typedef TYPE_4__ RAnalOp ;
typedef int RAnal ;







 int VAR_0 ;

 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int const*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_2, RAnalOp *VAR_3, ut64 VAR_4, const ut8 *VAR_5, int VAR_6, RAnalOpMask VAR_7) {
 mcore_handle VAR_8 = {0};
 mcore_t* VAR_9 = ((void*)0);

 if (FUNC_2 (&VAR_8, VAR_5, VAR_6)) {
  FUNC_0 ("[!] mcore: bad or invalid data.\n");
  return -1;
 }

 VAR_3->delay = 0;
 VAR_3->type = VAR_0;
 VAR_3->jump = VAR_1;
 VAR_3->fail = VAR_1;
 VAR_3->ptr = VAR_3->val = VAR_1;
 VAR_3->size = 2;
 if ((VAR_9 = FUNC_3 (&VAR_8))) {
  VAR_3->type = VAR_9->type;
  switch (VAR_9->type) {
  case 133:
  case 132:
   VAR_3->fail = VAR_4 + 2;
   VAR_3->jump = VAR_4 + VAR_9->args[0].value + 1;
   break;
  case 129:
   VAR_3->jump = VAR_4 + VAR_9->args[0].value + 1;
   break;
  case 131:



   break;
  case 128:
  case 130:
   VAR_3->eob = 1;
   break;
  default:
   break;
  }
  FUNC_1 (VAR_9);
 }
 return VAR_3->size;
}
