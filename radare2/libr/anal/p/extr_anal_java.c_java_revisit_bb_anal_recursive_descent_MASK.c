
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {int done; TYPE_2__* current_bb; TYPE_2__* current_bb_head; } ;
typedef TYPE_1__ RAnalState ;
typedef TYPE_2__ RAnalBlock ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(RAnal *VAR_3, RAnalState *VAR_4, ut64 VAR_5) {
 FUNC_1 (VAR_3 && VAR_4, VAR_2);
 RAnalBlock *VAR_6 = VAR_4->current_bb_head;
 RAnalBlock *VAR_7 = VAR_4->current_bb;
 FUNC_1 (VAR_7 && VAR_6, VAR_2);
 if (VAR_7->type & VAR_0) {
  FUNC_0 (VAR_6, VAR_6, VAR_7);

  VAR_4->done = 1;
 }
 return VAR_1;
}
