
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int bbs; } ;
struct TYPE_11__ {int anal; } ;
struct TYPE_10__ {int bbsum; int ebbs; int edges; int nbbs; int cc; } ;
typedef TYPE_1__ RSignGraph ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalFunction ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,TYPE_1__) ;

__attribute__((used)) static bool FUNC_5(RCore *VAR_0, RAnalFunction *VAR_1, const char *VAR_2) {
 RSignGraph VAR_3 = {
  .cc = FUNC_0 (VAR_0->anal, VAR_1),
  .nbbs = FUNC_3 (VAR_1->bbs)
 };

 VAR_3.edges = FUNC_1 (VAR_1, &VAR_3.ebbs);
 VAR_3.bbsum = FUNC_2 (VAR_1);
 return FUNC_4 (VAR_0->anal, VAR_2, VAR_3);
}
