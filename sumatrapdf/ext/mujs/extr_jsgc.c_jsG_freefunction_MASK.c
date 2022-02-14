
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {struct TYPE_4__* code; struct TYPE_4__* vartab; struct TYPE_4__* strtab; struct TYPE_4__* numtab; struct TYPE_4__* funtab; } ;
typedef TYPE_1__ js_Function ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_0, js_Function *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->funtab);
 FUNC_0(VAR_0, VAR_1->numtab);
 FUNC_0(VAR_0, VAR_1->strtab);
 FUNC_0(VAR_0, VAR_1->vartab);
 FUNC_0(VAR_0, VAR_1->code);
 FUNC_0(VAR_0, VAR_1);
}
