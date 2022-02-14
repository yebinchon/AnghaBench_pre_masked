
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cParams; int funckind; int invkind; int callconv; int elemdescFunc; int wFuncFlags; int cParamsOpt; int oVft; int * lprgelemdescParam; int memid; } ;
typedef TYPE_1__ FUNCDESC ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const FUNCDESC *VAR_0) {
  int VAR_1;
  FUNC_0("memid is %08x\n",VAR_0->memid);
  for (VAR_1=0;VAR_1<VAR_0->cParams;VAR_1++) {
      FUNC_0("Param %d:\n",VAR_1);
      FUNC_1(VAR_0->lprgelemdescParam+VAR_1);
  }
  FUNC_0("\tfunckind: %d (",VAR_0->funckind);
  switch (VAR_0->funckind) {
  case 132: FUNC_0("virtual");break;
  case 134: FUNC_0("pure virtual");break;
  case 135: FUNC_0("nonvirtual");break;
  case 133: FUNC_0("static");break;
  case 136: FUNC_0("dispatch");break;
  default: FUNC_0("unknown");break;
  }
  FUNC_0(")\n\tinvkind: %d (",VAR_0->invkind);
  switch (VAR_0->invkind) {
  case 131: FUNC_0("func");break;
  case 130: FUNC_0("property get");break;
  case 129: FUNC_0("property put");break;
  case 128: FUNC_0("property put ref");break;
  }
  FUNC_0(")\n\tcallconv: %d (",VAR_0->callconv);
  switch (VAR_0->callconv) {
  case 140: FUNC_0("cdecl");break;
  case 139: FUNC_0("pascal");break;
  case 138: FUNC_0("stdcall");break;
  case 137: FUNC_0("syscall");break;
  default:break;
  }
  FUNC_0(")\n\toVft: %d\n", VAR_0->oVft);
  FUNC_0("\tcParamsOpt: %d\n", VAR_0->cParamsOpt);
  FUNC_0("\twFlags: %x\n", VAR_0->wFuncFlags);

  FUNC_0("\telemdescFunc (return value type):\n");
  FUNC_1(&VAR_0->elemdescFunc);
}
