
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
 int FUNC_0 (int ,float,float*,float*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,float) ;
 float FUNC_6 (int ,float,float,char const*,char const*,float*) ;
 float FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*) ;

float FUNC_9(NVGcontext* VAR_1, float VAR_2, float VAR_3, const char* VAR_4, const char* VAR_5, float* VAR_6)
{
 NVGstate* VAR_7 = FUNC_8(VAR_1);
 float VAR_8 = FUNC_7(VAR_7) * VAR_1->devicePxRatio;
 float VAR_9 = 1.0f / VAR_8;
 float VAR_10;

 if (VAR_7->fontId == VAR_0) return 0;

 FUNC_4(VAR_1->fs, VAR_7->fontSize*VAR_8);
 FUNC_5(VAR_1->fs, VAR_7->letterSpacing*VAR_8);
 FUNC_2(VAR_1->fs, VAR_7->fontBlur*VAR_8);
 FUNC_1(VAR_1->fs, VAR_7->textAlign);
 FUNC_3(VAR_1->fs, VAR_7->fontId);

 VAR_10 = FUNC_6(VAR_1->fs, VAR_2*VAR_8, VAR_3*VAR_8, VAR_4, VAR_5, VAR_6);
 if (VAR_6 != ((void*)0)) {

  FUNC_0(VAR_1->fs, VAR_3*VAR_8, &VAR_6[1], &VAR_6[3]);
  VAR_6[0] *= VAR_9;
  VAR_6[1] *= VAR_9;
  VAR_6[2] *= VAR_9;
  VAR_6[3] *= VAR_9;
 }
 return VAR_10 * VAR_9;
}
