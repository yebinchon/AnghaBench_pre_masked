
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


struct TYPE_18__ {int userPtr; int (* renderStroke ) (int ,TYPE_7__*,int *,float,float,TYPE_6__*,int) ;scalar_t__ edgeAntiAlias; } ;
struct TYPE_23__ {float fringeWidth; int drawCallCount; int strokeTriCount; TYPE_4__* cache; TYPE_3__ params; } ;
struct TYPE_17__ {float a; } ;
struct TYPE_16__ {float a; } ;
struct TYPE_22__ {TYPE_2__ outerColor; TYPE_1__ innerColor; } ;
struct TYPE_21__ {int nstroke; } ;
struct TYPE_20__ {float strokeWidth; float alpha; int scissor; int miterLimit; int lineJoin; int lineCap; TYPE_7__ stroke; int xform; } ;
struct TYPE_19__ {int npaths; TYPE_6__* paths; } ;
typedef TYPE_5__ NVGstate ;
typedef TYPE_6__ NVGpath ;
typedef TYPE_7__ NVGpaint ;
typedef TYPE_8__ NVGcontext ;


 float FUNC_0 (float,float,float) ;
 int FUNC_1 (TYPE_8__*,float,int ,int ,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 float FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int ,TYPE_7__*,int *,float,float,TYPE_6__*,int) ;

void FUNC_6(NVGcontext* VAR_0)
{
 NVGstate* VAR_1 = FUNC_4(VAR_0);
 float VAR_2 = FUNC_3(VAR_1->xform);
 float VAR_3 = FUNC_0(VAR_1->strokeWidth * VAR_2, 0.0f, 200.0f);
 NVGpaint VAR_4 = VAR_1->stroke;
 const NVGpath* VAR_5;
 int VAR_6;

 if (VAR_3 < VAR_0->fringeWidth) {


  float VAR_7 = FUNC_0(VAR_3 / VAR_0->fringeWidth, 0.0f, 1.0f);
  VAR_4.innerColor.a *= VAR_7*VAR_7;
  VAR_4.outerColor.a *= VAR_7*VAR_7;
  VAR_3 = VAR_0->fringeWidth;
 }


 VAR_4.innerColor.a *= VAR_1->alpha;
 VAR_4.outerColor.a *= VAR_1->alpha;

 FUNC_2(VAR_0);

 if (VAR_0->params.edgeAntiAlias)
  FUNC_1(VAR_0, VAR_3*0.5f + VAR_0->fringeWidth*0.5f, VAR_1->lineCap, VAR_1->lineJoin, VAR_1->miterLimit);
 else
  FUNC_1(VAR_0, VAR_3*0.5f, VAR_1->lineCap, VAR_1->lineJoin, VAR_1->miterLimit);

 VAR_0->params.renderStroke(VAR_0->params.userPtr, &VAR_4, &VAR_1->scissor, VAR_0->fringeWidth,
        VAR_3, VAR_0->cache->paths, VAR_0->cache->npaths);


 for (VAR_6 = 0; VAR_6 < VAR_0->cache->npaths; VAR_6++) {
  VAR_5 = &VAR_0->cache->paths[VAR_6];
  VAR_0->strokeTriCount += VAR_5->nstroke-2;
  VAR_0->drawCallCount++;
 }
}
