
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int graph; int curnode; } ;
struct TYPE_7__ {int gnode; scalar_t__ is_dummy; } ;
typedef int RGraphNode ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 TYPE_1__* FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int * FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(RAGraph *VAR_0, int VAR_1) {
 const RGraphNode *VAR_2 = FUNC_2 (VAR_0->graph, VAR_0->curnode, VAR_1);
 RANode *VAR_3 = FUNC_0 (VAR_2);

 while (VAR_3 && VAR_3->is_dummy) {
  VAR_2 = FUNC_2 (VAR_0->graph, VAR_3->gnode, 0);
  VAR_3 = FUNC_0 (VAR_2);
 }
 if (VAR_3) {
  FUNC_1 (VAR_0, VAR_3);
 }
}
