
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int bbs; } ;
struct TYPE_10__ {int cc; int nbbs; int edges; int ebbs; scalar_t__ bbsum; } ;
struct TYPE_9__ {TYPE_2__* graph; } ;
typedef TYPE_1__ RSignItem ;
typedef TYPE_2__ RSignGraph ;
typedef TYPE_3__ RAnalFunction ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(RSignItem *VAR_0, RAnalFunction *VAR_1) {
 RSignGraph *VAR_2 = VAR_0->graph;
 int VAR_3 = -1;

 if (VAR_2->cc != -1 && VAR_2->cc != FUNC_1 (((void*)0), VAR_1)) {
  return 0;
 }
 if (VAR_2->nbbs != -1 && VAR_2->nbbs != FUNC_4 (VAR_1->bbs)) {
  return 0;
 }
 if (VAR_2->edges != -1 && VAR_2->edges != FUNC_2 (VAR_1, &VAR_3)) {
  return 0;
 }
 if (VAR_2->ebbs != -1 && VAR_2->ebbs != VAR_3) {
  return 0;
 }
 if (VAR_2->bbsum > 0 && FUNC_0 (VAR_2->bbsum, FUNC_3 (VAR_1))) {
  return 0;
 }
 return 1;
}
