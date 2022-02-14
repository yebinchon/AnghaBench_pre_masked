
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ctxFcnMatchCB {scalar_t__ mincc; int (* cb ) (TYPE_1__*,int ,int ) ;int user; int fcn; } ;
struct TYPE_7__ {scalar_t__ cc; } ;
struct TYPE_6__ {TYPE_2__* graph; } ;
typedef TYPE_1__ RSignItem ;
typedef TYPE_2__ RSignGraph ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(RSignItem *VAR_0, void *VAR_1) {
 struct ctxFcnMatchCB *VAR_2 = (struct ctxFcnMatchCB *) VAR_1;
 RSignGraph *VAR_3 = VAR_0->graph;

 if (!VAR_3) {
  return 1;
 }

 if (VAR_3->cc < VAR_2->mincc) {
  return 1;
 }

 if (!FUNC_0 (VAR_0, VAR_2->fcn)) {
  return 1;
 }

 if (VAR_2->cb) {
  return VAR_2->cb (VAR_0, VAR_2->fcn, VAR_2->user);
 }

 return 1;
}
