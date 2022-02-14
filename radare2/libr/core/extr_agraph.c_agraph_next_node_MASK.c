
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int curnode; } ;
struct TYPE_10__ {int gnode; scalar_t__ is_dummy; } ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(RAGraph *VAR_0) {
 RANode *VAR_1 = FUNC_2 (FUNC_1 (VAR_0, VAR_0->curnode, 1));
 while (VAR_1 && VAR_1->is_dummy) {
  VAR_1 = FUNC_2 (FUNC_1 (VAR_0, VAR_1->gnode, 1));
 }
 FUNC_3 (VAR_0, VAR_1);
 FUNC_0 (VAR_0, FUNC_2 (VAR_0->curnode), 0);
}
