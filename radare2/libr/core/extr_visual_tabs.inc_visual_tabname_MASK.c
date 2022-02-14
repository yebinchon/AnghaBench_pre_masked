
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
struct TYPE_6__ {int tab; int tabs; } ;
struct TYPE_8__ {TYPE_1__ visual; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ RCoreVisualTab ;
typedef TYPE_3__ RCore ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3 (RCore *VAR_0) {
 if (!VAR_0->visual.tabs) {
  return;
 }
 char VAR_1[32]={0};
 FUNC_0 ("tab name: ", VAR_1, sizeof (VAR_1));
 RCoreVisualTab *VAR_2 = FUNC_1 (VAR_0->visual.tabs, VAR_0->visual.tab);
 if (VAR_2) {
  FUNC_2 (VAR_2->name, VAR_1);
 }
}
