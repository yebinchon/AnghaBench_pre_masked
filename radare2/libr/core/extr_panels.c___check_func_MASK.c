
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bbs; } ;
struct TYPE_5__ {int offset; int anal; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalFunction ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

bool FUNC_3(RCore *VAR_1) {
 RAnalFunction *VAR_2 = FUNC_0 (VAR_1->anal, VAR_1->offset, VAR_0);
 if (!VAR_2) {
  FUNC_1 ("Not in a function. Type 'df' to define it here");
  return 0;
 }
 if (FUNC_2 (VAR_2->bbs)) {
  FUNC_1 ("No basic blocks in this function. You may want to use 'afb+'.");
  return 0;
 }
 return 1;
}
