
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_6__ {int sizek; int sizeupvalues; int sizep; int sizelocvars; TYPE_1__* locvars; scalar_t__* p; scalar_t__* upvalues; int * k; scalar_t__ source; } ;
struct TYPE_5__ {scalar_t__ varname; } ;
typedef TYPE_2__ Proto ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4 (global_State *VAR_0, Proto *VAR_1) {
  int VAR_2;
  if (FUNC_0(VAR_1))
    return;
  if (VAR_1->source) FUNC_3(VAR_1->source);
  for (VAR_2=0; VAR_2<VAR_1->sizek; VAR_2++)
    FUNC_2(VAR_0, &VAR_1->k[VAR_2]);
  for (VAR_2=0; VAR_2<VAR_1->sizeupvalues; VAR_2++) {
    if (VAR_1->upvalues[VAR_2])
      FUNC_3(VAR_1->upvalues[VAR_2]);
  }
  for (VAR_2=0; VAR_2<VAR_1->sizep; VAR_2++) {
    if (VAR_1->p[VAR_2])
      FUNC_1(VAR_0, VAR_1->p[VAR_2]);
  }
  for (VAR_2=0; VAR_2<VAR_1->sizelocvars; VAR_2++) {
    if (VAR_1->locvars[VAR_2].varname)
      FUNC_3(VAR_1->locvars[VAR_2].varname);
  }
}
