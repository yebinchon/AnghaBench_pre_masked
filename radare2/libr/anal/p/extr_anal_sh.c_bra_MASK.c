
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_4__ {int delay; int eob; int size; int jump; int esil; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(RAnal* VAR_1, RAnalOp* VAR_2, ut16 VAR_3) {

 VAR_2->type = VAR_0;
 VAR_2->delay = 1;
 VAR_2->jump = FUNC_1 (VAR_2, FUNC_0 (VAR_3));
 VAR_2->eob = 1;
 FUNC_2 (&VAR_2->esil, "1,SETD,0x%x,pc,=", VAR_2->jump);
 return VAR_2->size;
}
