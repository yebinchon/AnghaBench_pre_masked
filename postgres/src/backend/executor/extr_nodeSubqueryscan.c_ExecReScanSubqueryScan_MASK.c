
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * chgParam; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_9__ {int * chgParam; } ;
struct TYPE_8__ {TYPE_3__* subplan; TYPE_4__ ss; } ;
typedef TYPE_2__ SubqueryScanState ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

void
FUNC_3(SubqueryScanState *VAR_0)
{
 FUNC_1(&VAR_0->ss);






 if (VAR_0->ss.ps.chgParam != ((void*)0))
  FUNC_2(VAR_0->subplan, VAR_0->ss.ps.chgParam);





 if (VAR_0->subplan->chgParam == ((void*)0))
  FUNC_0(VAR_0->subplan);
}
