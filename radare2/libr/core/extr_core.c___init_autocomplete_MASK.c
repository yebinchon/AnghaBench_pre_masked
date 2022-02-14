
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ autocomplete_type; int autocomplete; } ;
typedef TYPE_1__ RCore ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4 (RCore* VAR_6) {
 int VAR_7;
 VAR_6->autocomplete = FUNC_0 (VAR_2);
 if (VAR_6->autocomplete_type == VAR_0) {
  FUNC_1 (VAR_6);
 } else if (VAR_6->autocomplete_type == VAR_1) {
  FUNC_2 (VAR_6->autocomplete, "ls", VAR_3, 1);
  FUNC_2 (VAR_6->autocomplete, "cd", VAR_3, 1);
  FUNC_2 (VAR_6->autocomplete, "cat", VAR_3, 1);
  FUNC_2 (VAR_6->autocomplete, "get", VAR_3, 1);
  FUNC_2 (VAR_6->autocomplete, "mount", VAR_3, 1);
  for (VAR_7 = 0; VAR_7 < VAR_4 && VAR_5[VAR_7]; VAR_7++) {
   if (!FUNC_3 (VAR_6->autocomplete, VAR_5[VAR_7], 1)) {
    FUNC_2 (VAR_6->autocomplete, VAR_5[VAR_7], VAR_3, 1);
   }
  }
 }
}
