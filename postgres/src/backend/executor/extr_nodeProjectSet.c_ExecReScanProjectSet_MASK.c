
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * chgParam; } ;
struct TYPE_5__ {TYPE_4__* lefttree; } ;
struct TYPE_6__ {int pending_srf_tuples; TYPE_1__ ps; } ;
typedef TYPE_2__ ProjectSetState ;


 int FUNC_0 (TYPE_4__*) ;

void
FUNC_1(ProjectSetState *VAR_0)
{

 VAR_0->pending_srf_tuples = 0;





 if (VAR_0->ps.lefttree->chgParam == ((void*)0))
  FUNC_0(VAR_0->ps.lefttree);
}
