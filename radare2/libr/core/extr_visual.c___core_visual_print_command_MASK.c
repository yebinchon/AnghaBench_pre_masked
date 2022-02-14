
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tab; scalar_t__ tabs; } ;
struct TYPE_9__ {int stkcmd; int config; TYPE_1__ visual; } ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_2__ RCoreVisualTab ;
typedef TYPE_3__ RCore ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 char const** VAR_1 ;
 char const** VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static const char *FUNC_5(RCore *VAR_3) {
 if (VAR_3->visual.tabs) {
  RCoreVisualTab *VAR_4 = FUNC_2 (VAR_3->visual.tabs, VAR_3->visual.tab);
  if (VAR_4 && VAR_4->name[0] == ':') {
   return VAR_4->name + 1;
  }
 }
 if (FUNC_1 (VAR_3->config, "scr.dumpcols")) {
  FUNC_0 (VAR_3->stkcmd);
  VAR_3->stkcmd = FUNC_3 (FUNC_4 (VAR_3));
  return VAR_1[VAR_0];
 }
 return VAR_2[VAR_0];
}
