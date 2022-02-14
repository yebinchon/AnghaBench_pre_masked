
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* extent; } ;
struct TYPE_6__ {float strokeWidth; float miterLimit; float alpha; float fontSize; float letterSpacing; float lineHeight; float fontBlur; int textAlign; scalar_t__ fontId; TYPE_1__ scissor; int xform; int lineJoin; int lineCap; int compositeOperation; int stroke; int fill; } ;
typedef TYPE_2__ NVGstate ;
typedef int NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(NVGcontext* VAR_5)
{
 NVGstate* VAR_6 = FUNC_4(VAR_5);
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 FUNC_5(&VAR_6->fill, FUNC_1(255,255,255,255));
 FUNC_5(&VAR_6->stroke, FUNC_1(0,0,0,255));
 VAR_6->compositeOperation = FUNC_3(VAR_4);
 VAR_6->strokeWidth = 1.0f;
 VAR_6->miterLimit = 10.0f;
 VAR_6->lineCap = VAR_2;
 VAR_6->lineJoin = VAR_3;
 VAR_6->alpha = 1.0f;
 FUNC_2(VAR_6->xform);

 VAR_6->scissor.extent[0] = -1.0f;
 VAR_6->scissor.extent[1] = -1.0f;

 VAR_6->fontSize = 16.0f;
 VAR_6->letterSpacing = 0.0f;
 VAR_6->lineHeight = 1.0f;
 VAR_6->fontBlur = 0.0f;
 VAR_6->textAlign = VAR_1 | VAR_0;
 VAR_6->fontId = 0;
}
