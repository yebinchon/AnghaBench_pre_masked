
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int ** upvals; int nupvalues; int * p; } ;
typedef TYPE_1__ LClosure ;
typedef int GCObject ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;

LClosure *FUNC_4 (lua_State *VAR_1, int VAR_2) {
  GCObject *VAR_3 = FUNC_2(VAR_1, VAR_0, FUNC_3(VAR_2));
  LClosure *VAR_4 = FUNC_1(VAR_3);
  VAR_4->p = ((void*)0);
  VAR_4->nupvalues = FUNC_0(VAR_2);
  while (VAR_2--) VAR_4->upvals[VAR_2] = ((void*)0);
  return VAR_4;
}
