
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int sizeupvalues; int upvalues; int sizelocvars; int locvars; int sizelineinfo; int lineinfo; int sizek; int k; int sizep; int p; int sizecode; int code; } ;
typedef TYPE_1__ Proto ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2 (lua_State *VAR_0, Proto *VAR_1) {
  FUNC_1(VAR_0, VAR_1->code, VAR_1->sizecode);
  FUNC_1(VAR_0, VAR_1->p, VAR_1->sizep);
  FUNC_1(VAR_0, VAR_1->k, VAR_1->sizek);
  FUNC_1(VAR_0, VAR_1->lineinfo, VAR_1->sizelineinfo);
  FUNC_1(VAR_0, VAR_1->locvars, VAR_1->sizelocvars);
  FUNC_1(VAR_0, VAR_1->upvalues, VAR_1->sizeupvalues);
  FUNC_0(VAR_0, VAR_1);
}
