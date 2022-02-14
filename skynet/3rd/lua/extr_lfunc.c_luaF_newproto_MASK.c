
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * source; scalar_t__ lastlinedefined; scalar_t__ linedefined; scalar_t__ sizelocvars; int * locvars; scalar_t__ maxstacksize; scalar_t__ is_vararg; scalar_t__ numparams; scalar_t__ sizeupvalues; int * upvalues; scalar_t__ sizelineinfo; int * lineinfo; scalar_t__ sizecode; int * code; scalar_t__ sizep; int * p; scalar_t__ sizek; int * k; } ;
typedef TYPE_1__ Proto ;
typedef int GCObject ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int) ;

Proto *FUNC_2 (lua_State *VAR_1) {
  GCObject *VAR_2 = FUNC_1(VAR_1, VAR_0, sizeof(Proto));
  Proto *VAR_3 = FUNC_0(VAR_2);
  VAR_3->k = ((void*)0);
  VAR_3->sizek = 0;
  VAR_3->p = ((void*)0);
  VAR_3->sizep = 0;
  VAR_3->code = ((void*)0);
  VAR_3->sizecode = 0;
  VAR_3->lineinfo = ((void*)0);
  VAR_3->sizelineinfo = 0;
  VAR_3->upvalues = ((void*)0);
  VAR_3->sizeupvalues = 0;
  VAR_3->numparams = 0;
  VAR_3->is_vararg = 0;
  VAR_3->maxstacksize = 0;
  VAR_3->locvars = ((void*)0);
  VAR_3->sizelocvars = 0;
  VAR_3->linedefined = 0;
  VAR_3->lastlinedefined = 0;
  VAR_3->source = ((void*)0);
  return VAR_3;
}
