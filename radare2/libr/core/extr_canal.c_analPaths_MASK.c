
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_15__ {scalar_t__ addr; scalar_t__ jump; scalar_t__ fail; int op_pos_size; scalar_t__* op_pos; } ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ jump; } ;
struct TYPE_13__ {scalar_t__ followDepth; int visited; int path; TYPE_4__* cur; int core; scalar_t__ followCalls; TYPE_1__* toBB; } ;
struct TYPE_12__ {scalar_t__ addr; } ;
typedef TYPE_2__ RCoreAnalPaths ;
typedef TYPE_3__ RAnalOp ;
typedef TYPE_4__ RAnalBlock ;
typedef int PJ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 () ;
 TYPE_3__* FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(RCoreAnalPaths *VAR_2, PJ *VAR_3) {
 RAnalBlock *VAR_4 = VAR_2->cur;
 if (!VAR_4) {

  return;
 }

 if (FUNC_5 ()) {
  return;
 }
 FUNC_2 (&VAR_2->visited, VAR_4->addr, 1, ((void*)0));
 FUNC_7 (VAR_2->path, VAR_4);
 if (VAR_2->followDepth && --VAR_2->followDepth == 0) {
  return;
 }
 if (VAR_2->toBB && VAR_4->addr == VAR_2->toBB->addr) {
  if (!FUNC_3 (VAR_2, VAR_3)) {
   return;
  }
 } else {
  RAnalBlock *VAR_5 = VAR_4;
  ut64 VAR_6 = VAR_4->jump;
  ut64 VAR_7 = VAR_4->fail;
  FUNC_0 (VAR_2, VAR_6, VAR_3);
  VAR_4 = VAR_5;
  FUNC_0 (VAR_2, VAR_7, VAR_3);
  if (VAR_2->followCalls) {
   int VAR_8;
   for (VAR_8 = 0; VAR_8 < VAR_4->op_pos_size; VAR_8++) {
    ut64 VAR_9 = VAR_4->addr + VAR_4->op_pos[VAR_8];
    RAnalOp *VAR_10 = FUNC_6 (VAR_2->core, VAR_9, VAR_0);
    if (VAR_10 && VAR_10->type == VAR_1) {
     FUNC_0 (VAR_2, VAR_10->jump, VAR_3);
    }
    VAR_4 = VAR_5;
    FUNC_4 (VAR_10);
   }
  }
 }
 VAR_2->cur = FUNC_8 (VAR_2->path);
 FUNC_1 (&VAR_2->visited, VAR_4->addr);
 if (VAR_2->followDepth) {
  VAR_2->followDepth++;
 }
}
