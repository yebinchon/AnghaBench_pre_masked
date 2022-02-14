
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float devicePxRatio; int fs; } ;
struct TYPE_7__ {scalar_t__ fontId; float fontSize; float letterSpacing; float fontBlur; int textAlign; } ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGcontext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,float*,float*,float*) ;
 float FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;

void FUNC_8(NVGcontext* VAR_1, float* VAR_2, float* VAR_3, float* VAR_4)
{
 NVGstate* VAR_5 = FUNC_7(VAR_1);
 float VAR_6 = FUNC_6(VAR_5) * VAR_1->devicePxRatio;
 float VAR_7 = 1.0f / VAR_6;

 if (VAR_5->fontId == VAR_0) return;

 FUNC_3(VAR_1->fs, VAR_5->fontSize*VAR_6);
 FUNC_4(VAR_1->fs, VAR_5->letterSpacing*VAR_6);
 FUNC_1(VAR_1->fs, VAR_5->fontBlur*VAR_6);
 FUNC_0(VAR_1->fs, VAR_5->textAlign);
 FUNC_2(VAR_1->fs, VAR_5->fontId);

 FUNC_5(VAR_1->fs, VAR_2, VAR_3, VAR_4);
 if (VAR_2 != ((void*)0))
  *VAR_2 *= VAR_7;
 if (VAR_3 != ((void*)0))
  *VAR_3 *= VAR_7;
 if (VAR_4 != ((void*)0))
  *VAR_4 *= VAR_7;
}
