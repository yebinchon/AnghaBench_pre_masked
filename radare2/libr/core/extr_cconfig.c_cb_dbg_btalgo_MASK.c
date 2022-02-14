
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* value; } ;
struct TYPE_6__ {TYPE_1__* dbg; } ;
struct TYPE_5__ {int btalgo; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (*VAR_3->value == '?') {
  FUNC_1 (VAR_3);
  return 0;
 }
 FUNC_0 (VAR_2->dbg->btalgo);
 VAR_2->dbg->btalgo = FUNC_2 (VAR_3->value);
 return 1;
}
