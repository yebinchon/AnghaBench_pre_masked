
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sizek; int sizeupvalues; int sizelocvars; int sizep; struct TYPE_8__** p; TYPE_2__* locvars; TYPE_1__* upvalues; int * k; int source; } ;
struct TYPE_7__ {int varname; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_3__ Proto ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4 (Proto *VAR_1) {
  int VAR_2;
  if (VAR_1 == ((void*)0))
    return;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->source);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizek; VAR_2++) {
    if (FUNC_3(&VAR_1->k[VAR_2]) == VAR_0)
      FUNC_0(FUNC_2(&VAR_1->k[VAR_2]));
  }
  for (VAR_2 = 0; VAR_2 < VAR_1->sizeupvalues; VAR_2++)
    FUNC_0(VAR_1->upvalues[VAR_2].name);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizelocvars; VAR_2++)
    FUNC_0(VAR_1->locvars[VAR_2].varname);
  for (VAR_2 = 0; VAR_2 < VAR_1->sizep; VAR_2++)
    FUNC_4(VAR_1->p[VAR_2]);
}
