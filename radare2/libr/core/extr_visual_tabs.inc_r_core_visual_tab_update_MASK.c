
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tab; int tabs; } ;
struct TYPE_6__ {TYPE_1__ visual; } ;
typedef int RCoreVisualTab ;
typedef TYPE_2__ RCore ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0) {
 if (!VAR_0->visual.tabs) {
  return;
 }
 RCoreVisualTab *VAR_1 = FUNC_0 (VAR_0->visual.tabs, VAR_0->visual.tab);
 if (VAR_1) {
  FUNC_1 (VAR_0, VAR_1);
 }
}
