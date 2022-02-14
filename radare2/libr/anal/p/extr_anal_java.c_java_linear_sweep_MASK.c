
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int type; int type2; } ;
struct TYPE_5__ {TYPE_2__* current_bb; scalar_t__ current_bb_head; } ;
typedef TYPE_1__ RAnalState ;
typedef TYPE_2__ RAnalBlock ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(RAnal *VAR_2, RAnalState *VAR_3, ut64 VAR_4) {
 RAnalBlock *VAR_5 = VAR_3->current_bb;
 if (VAR_3->current_bb_head && VAR_3->current_bb->type & VAR_0) {

 }
 if (VAR_5->type2 & VAR_1) {
  FUNC_0 (VAR_2, VAR_3);
 }

 return 0;
}
