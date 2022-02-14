
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {char* source; int linedefined; int lastlinedefined; char* what; int short_src; } ;
typedef TYPE_4__ lua_Debug ;
struct TYPE_10__ {TYPE_2__* p; } ;
struct TYPE_8__ {scalar_t__ isC; } ;
struct TYPE_12__ {TYPE_3__ l; TYPE_1__ c; } ;
struct TYPE_9__ {int linedefined; int lastlinedefined; int source; } ;
typedef TYPE_5__ Closure ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2 (lua_Debug *VAR_1, Closure *VAR_2, void *VAR_3) {
  if (VAR_3 || VAR_2->c.isC) {
    VAR_1->source = "=[C]";
    VAR_1->linedefined = -1;
    VAR_1->lastlinedefined = -1;
    VAR_1->what = "C";
  }
  else {
    VAR_1->source = FUNC_0(VAR_2->l.p->source);
    VAR_1->linedefined = VAR_2->l.p->linedefined;
    VAR_1->lastlinedefined = VAR_2->l.p->lastlinedefined;
    VAR_1->what = (VAR_1->linedefined == 0) ? "main" : "Lua";
  }
  FUNC_1(VAR_1->short_src, VAR_1->source, VAR_0);
}
