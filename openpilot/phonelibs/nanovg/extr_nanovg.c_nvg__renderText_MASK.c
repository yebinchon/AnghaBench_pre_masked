
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int userPtr; int (* renderTriangles ) (int ,TYPE_5__*,int *,int *,int) ;} ;
struct TYPE_16__ {size_t fontImageIdx; int textTriCount; int drawCallCount; TYPE_3__ params; int * fontImages; } ;
struct TYPE_12__ {int a; } ;
struct TYPE_11__ {int a; } ;
struct TYPE_15__ {TYPE_2__ outerColor; TYPE_1__ innerColor; int image; } ;
struct TYPE_14__ {int scissor; int alpha; TYPE_5__ fill; } ;
typedef int NVGvertex ;
typedef TYPE_4__ NVGstate ;
typedef TYPE_5__ NVGpaint ;
typedef TYPE_6__ NVGcontext ;


 TYPE_4__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_5__*,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(NVGcontext* VAR_0, NVGvertex* VAR_1, int VAR_2)
{
 NVGstate* VAR_3 = FUNC_0(VAR_0);
 NVGpaint VAR_4 = VAR_3->fill;


 VAR_4.image = VAR_0->fontImages[VAR_0->fontImageIdx];


 VAR_4.innerColor.a *= VAR_3->alpha;
 VAR_4.outerColor.a *= VAR_3->alpha;

 VAR_0->params.renderTriangles(VAR_0->params.userPtr, &VAR_4, &VAR_3->scissor, VAR_1, VAR_2);

 VAR_0->drawCallCount++;
 VAR_0->textTriCount += VAR_2/3;
}
