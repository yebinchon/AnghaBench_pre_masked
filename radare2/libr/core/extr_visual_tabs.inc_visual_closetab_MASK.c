
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * tabs; int tab; } ;
struct TYPE_6__ {TYPE_1__ visual; } ;
typedef int RCoreVisualTab ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_5 (RCore *VAR_0) {
 if (!VAR_0->visual.tabs) {
  return;
 }
 RCoreVisualTab *VAR_1 = FUNC_2 (VAR_0->visual.tabs, VAR_0->visual.tab);
 if (VAR_1) {
  FUNC_0 (VAR_0->visual.tabs, VAR_1);
  const int VAR_2 = FUNC_3 (VAR_0->visual.tabs);
  if (VAR_2 > 0) {
   if (VAR_0->visual.tab > 0) {
    VAR_0->visual.tab--;
   }
   RCoreVisualTab *VAR_3 = FUNC_2 (VAR_0->visual.tabs, VAR_0->visual.tab);
   if (VAR_3) {
    FUNC_4(VAR_0, VAR_3);
   }
  } else {
   FUNC_1 (VAR_0->visual.tabs);
   VAR_0->visual.tabs = ((void*)0);
  }
 }
}
