
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* namewhat; char* what; int lastlinedefined; int linedefined; int currentline; char* source; scalar_t__ nups; int short_src; } ;
typedef TYPE_1__ lua_Debug ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(lua_Debug*VAR_0){
VAR_0->name=VAR_0->namewhat="";
VAR_0->what="tail";
VAR_0->lastlinedefined=VAR_0->linedefined=VAR_0->currentline=-1;
VAR_0->source="=(tail call)";
FUNC_0(VAR_0->short_src,VAR_0->source,60);
VAR_0->nups=0;
}
