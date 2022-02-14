
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int userPtr; int (* renderFill ) (int ,TYPE_7__*,int *,float,int ,TYPE_6__*,int) ;scalar_t__ edgeAntiAlias; } ;
struct TYPE_23__ {float fringeWidth; int drawCallCount; int fillTriCount; TYPE_4__* cache; TYPE_3__ params; } ;
struct TYPE_17__ {int a; } ;
struct TYPE_16__ {int a; } ;
struct TYPE_22__ {TYPE_2__ outerColor; TYPE_1__ innerColor; } ;
struct TYPE_21__ {int nfill; int nstroke; } ;
struct TYPE_20__ {int scissor; int alpha; TYPE_7__ fill; } ;
struct TYPE_19__ {int npaths; TYPE_6__* paths; int bounds; } ;
typedef TYPE_5__ NVGstate ;
typedef TYPE_6__ NVGpath ;
typedef TYPE_7__ NVGpaint ;
typedef TYPE_8__ NVGcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,float,int ,float) ;
 int FUNC_1 (TYPE_8__*) ;
 TYPE_5__* FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,TYPE_7__*,int *,float,int ,TYPE_6__*,int) ;

void FUNC_4(NVGcontext* VAR_1)
{
 NVGstate* VAR_2 = FUNC_2(VAR_1);
 const NVGpath* VAR_3;
 NVGpaint VAR_4 = VAR_2->fill;
 int VAR_5;

 FUNC_1(VAR_1);
 if (VAR_1->params.edgeAntiAlias)
  FUNC_0(VAR_1, VAR_1->fringeWidth, VAR_0, 2.4f);
 else
  FUNC_0(VAR_1, 0.0f, VAR_0, 2.4f);


 VAR_4.innerColor.a *= VAR_2->alpha;
 VAR_4.outerColor.a *= VAR_2->alpha;

 VAR_1->params.renderFill(VAR_1->params.userPtr, &VAR_4, &VAR_2->scissor, VAR_1->fringeWidth,
         VAR_1->cache->bounds, VAR_1->cache->paths, VAR_1->cache->npaths);


 for (VAR_5 = 0; VAR_5 < VAR_1->cache->npaths; VAR_5++) {
  VAR_3 = &VAR_1->cache->paths[VAR_5];
  VAR_1->fillTriCount += VAR_3->nfill-2;
  VAR_1->fillTriCount += VAR_3->nstroke-2;
  VAR_1->drawCallCount += 2;
 }
}
