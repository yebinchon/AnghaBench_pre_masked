
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int addr; int bbs; } ;
struct TYPE_6__ {int anal_ret_val; TYPE_2__* current_fcn; } ;
typedef TYPE_1__ RAnalState ;
typedef TYPE_2__ RAnalFunction ;
typedef int RAnal ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_0, RAnalFunction *VAR_1, RAnalState *VAR_2) {

 FUNC_3 (VAR_1->bbs);
 VAR_1->bbs = FUNC_1 ();
 FUNC_0 (VAR_1->addr);
 VAR_2->current_fcn = VAR_1;


 FUNC_2 (VAR_0, VAR_2, VAR_1->addr);
 return VAR_2->anal_ret_val;
}
