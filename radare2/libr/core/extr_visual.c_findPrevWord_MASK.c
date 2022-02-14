
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* print; int * block; } ;
struct TYPE_5__ {int cur; int ocur; scalar_t__ cur_enabled; } ;
typedef TYPE_2__ RCore ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0) {
 int VAR_1 = VAR_0->print->cur_enabled? VAR_0->print->cur: 0;
 while (VAR_1 > 1) {
  if (FUNC_0 (VAR_0->block[VAR_1])) {
   VAR_1--;
  } else if (FUNC_0 (VAR_0->block[VAR_1 - 1])) {
   VAR_1 -= 2;
  } else {
   break;
  }
 }
 for (; VAR_1 >= 0; VAR_1--) {
  if (FUNC_0 (VAR_0->block[VAR_1])) {
   if (VAR_0->print->cur_enabled) {
    VAR_0->print->cur = VAR_1 + 1;
    VAR_0->print->ocur = -1;
    FUNC_1 (VAR_0, 1);
   } else {

   }
   break;
  }
 }
}
