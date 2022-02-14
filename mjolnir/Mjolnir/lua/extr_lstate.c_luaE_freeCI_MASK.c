
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nci; TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ CallInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void FUNC_1 (lua_State *VAR_0) {
  CallInfo *VAR_1 = VAR_0->ci;
  CallInfo *VAR_2 = VAR_1->next;
  VAR_1->next = ((void*)0);
  while ((VAR_1 = VAR_2) != ((void*)0)) {
    VAR_2 = VAR_1->next;
    FUNC_0(VAR_0, VAR_1);
    VAR_0->nci--;
  }
}
