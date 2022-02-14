
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oInst; } ;
struct TYPE_5__ {int varkind; int wVarFlags; int elemdescVar; TYPE_1__ u; int lpstrSchema; int memid; } ;
typedef TYPE_2__ VARDESC ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(const VARDESC *VAR_0)
{
    FUNC_0("memid %d\n",VAR_0->memid);
    FUNC_0("lpstrSchema %s\n",FUNC_1(VAR_0->lpstrSchema));
    FUNC_0("oInst %d\n",VAR_0->u.oInst);
    FUNC_2(&(VAR_0->elemdescVar));
    FUNC_0("wVarFlags %x\n",VAR_0->wVarFlags);
    FUNC_0("varkind %d\n",VAR_0->varkind);
}
