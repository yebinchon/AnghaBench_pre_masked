
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* namewhat; char* what; int lastlinedefined; int linedefined; int currentline; char* source; scalar_t__ nups; int short_src; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1 (lua_Debug *VAR_1) {
  VAR_1->name = VAR_1->namewhat = "";
  VAR_1->what = "tail";
  VAR_1->lastlinedefined = VAR_1->linedefined = VAR_1->currentline = -1;
  VAR_1->source = "=(tail call)";
  FUNC_0(VAR_1->short_src, VAR_1->source, VAR_0);
  VAR_1->nups = 0;
}
