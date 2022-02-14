
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int userPtr; int (* renderDelete ) (int ) ;} ;
struct TYPE_7__ {int nfonts; struct TYPE_7__* scratch; struct TYPE_7__* texData; struct TYPE_7__* fonts; scalar_t__ atlas; TYPE_1__ params; } ;
typedef TYPE_2__ FONScontext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(FONScontext* VAR_0)
{
 int VAR_1;
 if (VAR_0 == ((void*)0)) return;

 if (VAR_0->params.renderDelete)
  VAR_0->params.renderDelete(VAR_0->params.userPtr);

 for (VAR_1 = 0; VAR_1 < VAR_0->nfonts; ++VAR_1)
  FUNC_1(VAR_0->fonts[VAR_1]);

 if (VAR_0->atlas) FUNC_0(VAR_0->atlas);
 if (VAR_0->fonts) FUNC_2(VAR_0->fonts);
 if (VAR_0->texData) FUNC_2(VAR_0->texData);
 if (VAR_0->scratch) FUNC_2(VAR_0->scratch);
 FUNC_2(VAR_0);
}
