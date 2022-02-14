
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int curnode; } ;
struct TYPE_6__ {int x; int y; } ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(RAGraph *VAR_0, int VAR_1, int VAR_2) {
 RANode *VAR_3 = FUNC_1 (VAR_0->curnode);
 if (VAR_3) {
  if (FUNC_2 (VAR_0)) {
   VAR_1 = FUNC_0 (VAR_1);
   VAR_2 = FUNC_0 (VAR_2);
  }

  VAR_3->x += VAR_1;
  VAR_3->y += VAR_2;
 }
}
