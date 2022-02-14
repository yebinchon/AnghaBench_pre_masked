
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int userPtr; int (* renderViewport ) (int ,int,int,float) ;} ;
struct TYPE_8__ {scalar_t__ textTriCount; scalar_t__ strokeTriCount; scalar_t__ fillTriCount; scalar_t__ drawCallCount; TYPE_1__ params; scalar_t__ nstates; } ;
typedef TYPE_2__ NVGcontext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,float) ;
 int FUNC_3 (int ,int,int,float) ;

void FUNC_4(NVGcontext* VAR_0, int VAR_1, int VAR_2, float VAR_3)
{




 VAR_0->nstates = 0;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_3);

 VAR_0->params.renderViewport(VAR_0->params.userPtr, VAR_1, VAR_2, VAR_3);

 VAR_0->drawCallCount = 0;
 VAR_0->fillTriCount = 0;
 VAR_0->strokeTriCount = 0;
 VAR_0->textTriCount = 0;
}
