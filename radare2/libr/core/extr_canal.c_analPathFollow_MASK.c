
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {TYPE_1__* core; int cur; int visited; } ;
struct TYPE_5__ {int anal; } ;
typedef TYPE_2__ RCoreAnalPaths ;
typedef int PJ ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(RCoreAnalPaths *VAR_1, ut64 VAR_2, PJ *VAR_3) {
 if (VAR_2 == VAR_0) {
  return;
 }
 if (!FUNC_1 (&VAR_1->visited, VAR_2)) {
  VAR_1->cur = FUNC_2 (VAR_1->core->anal, VAR_2);
  FUNC_0 (VAR_1, VAR_3);
 }
}
