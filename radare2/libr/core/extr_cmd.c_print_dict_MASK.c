
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; char* name; } ;
struct TYPE_4__ {int n_subcmds; scalar_t__ type; struct TYPE_4__** subcmds; int cmd; scalar_t__ locked; } ;
typedef TYPE_1__ RCoreAutocomplete ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*,int,char const*,int ) ;

__attribute__((used)) static inline void FUNC_1(RCoreAutocomplete* VAR_2, int VAR_3) {
 if (!VAR_2) {
  return;
 }
 int VAR_4, VAR_5;
 const char* VAR_6 = "unknown";
 for (VAR_4 = 0; VAR_4 < VAR_2->n_subcmds; ++VAR_4) {
  RCoreAutocomplete* VAR_7 = VAR_2->subcmds[VAR_4];
  if (VAR_7->locked) {
   continue;
  }
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
   if (VAR_7->type == VAR_1[VAR_5].type) {
    VAR_6 = VAR_1[VAR_5].name;
    break;
   }
  }
  FUNC_0 ("[%3d] %s: '%s'\n", VAR_3, VAR_6, VAR_7->cmd);
  FUNC_1 (VAR_2->subcmds[VAR_4], VAR_3 + 1);
 }
}
