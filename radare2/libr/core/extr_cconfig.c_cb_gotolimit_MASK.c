
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int i_value; } ;
struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {int esil_goto_limit; scalar_t__ esil; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (FUNC_1 (0)) {
  FUNC_0 ("Cannot change gotolimit\n");
  return 0;
 }
 if (VAR_2->anal->esil) {
  VAR_2->anal->esil_goto_limit = VAR_3->i_value;
 }
 return 1;
}
