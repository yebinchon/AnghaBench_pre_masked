
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int folded; } ;
struct TYPE_5__ {int anal; } ;
typedef TYPE_1__ RCore ;
typedef int RAnalFunction ;
typedef TYPE_2__ RAnalBlock ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int *,int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(RCore *VAR_1, ut64 VAR_2) {
 RAnalFunction *VAR_3 = FUNC_1 (VAR_1->anal, VAR_2, VAR_0);
 if (VAR_3) {
  RAnalBlock *VAR_4 = FUNC_0 (VAR_1->anal, VAR_3, VAR_2);
  if (VAR_4) {
   VAR_4->folded = !VAR_4->folded;
  } else {
   FUNC_2 ();
  }
  return 1;
 }
 return 0;
}
