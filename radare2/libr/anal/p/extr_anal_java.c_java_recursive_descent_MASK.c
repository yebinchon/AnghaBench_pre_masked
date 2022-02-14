
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_9__ {int type; int type2; } ;
struct TYPE_8__ {TYPE_2__* current_bb_head; TYPE_2__* current_bb; } ;
typedef TYPE_1__ RAnalState ;
typedef TYPE_2__ RAnalBlock ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_2, RAnalState *VAR_3, ut64 VAR_4) {
 FUNC_2 (VAR_2 && VAR_3 && VAR_3->current_bb && VAR_3->current_bb_head, 0);

 RAnalBlock *VAR_5 = VAR_3->current_bb;
 RAnalBlock *VAR_6 = VAR_3->current_bb_head;

 if (VAR_6 && VAR_5->type & VAR_0) {
  FUNC_1 (VAR_6, VAR_6, VAR_5);
 }
 if (VAR_5->type2 & VAR_1) {
  FUNC_0 (VAR_2, VAR_3);
 }

 return 0;
}
