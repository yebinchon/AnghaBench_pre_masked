
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* refsCol; void* xrefsCol; scalar_t__ addr; int core; TYPE_1__* fcn; int mainCol; int cur; } ;
struct TYPE_9__ {TYPE_1__* fcn; scalar_t__ addr; } ;
struct TYPE_8__ {scalar_t__ addr; } ;
typedef TYPE_2__ RCoreVisualViewGraphItem ;
typedef TYPE_3__ RCoreVisualViewGraph ;


 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,void*) ;
 void* FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(RCoreVisualViewGraph *VAR_1) {
 RCoreVisualViewGraphItem *VAR_2 = FUNC_5 (VAR_1->mainCol, VAR_1->cur);
 if (!VAR_2) {
  FUNC_4 (VAR_1->mainCol);
  FUNC_1 (VAR_1);
  return;
 }

 VAR_1->addr = VAR_2->addr;
 VAR_1->fcn = VAR_2->fcn;


 if (VAR_1->fcn && VAR_1->fcn->addr) {
  VAR_1->xrefsCol = FUNC_3 (VAR_1->core, VAR_1->fcn->addr);
  VAR_1->refsCol = FUNC_0 (VAR_1->core, VAR_1->fcn->addr);
 } else {
  VAR_1->xrefsCol = FUNC_3 (VAR_1->core, VAR_1->addr);
  VAR_1->refsCol = FUNC_6 (VAR_0);
 }
 FUNC_2 (VAR_1, VAR_1->xrefsCol);
 FUNC_2 (VAR_1, VAR_1->refsCol);
}
