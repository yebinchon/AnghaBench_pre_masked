
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {float devicePxRatio; int fs; } ;
struct TYPE_12__ {int textAlign; scalar_t__ fontId; float fontSize; float letterSpacing; float fontBlur; float lineHeight; } ;
struct TYPE_11__ {float width; float minx; float maxx; char* next; } ;
typedef TYPE_1__ NVGtextRow ;
typedef TYPE_2__ NVGstate ;
typedef TYPE_3__ NVGcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,float*,float*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,float) ;
 int FUNC_6 (TYPE_3__*,char const*,char const*,float,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_3__*,int *,int *,float*) ;
 float FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*) ;
 float FUNC_10 (float,float) ;
 float FUNC_11 (float,float) ;

void FUNC_12(NVGcontext* VAR_8, float VAR_9, float VAR_10, float VAR_11, const char* VAR_12, const char* VAR_13, float* VAR_14)
{
 NVGstate* VAR_15 = FUNC_9(VAR_8);
 NVGtextRow VAR_16[2];
 float VAR_17 = FUNC_8(VAR_15) * VAR_8->devicePxRatio;
 float VAR_18 = 1.0f / VAR_17;
 int VAR_19 = 0, VAR_20;
 int VAR_21 = VAR_15->textAlign;
 int VAR_22 = VAR_15->textAlign & (VAR_4 | VAR_3 | VAR_6);
 int VAR_23 = VAR_15->textAlign & (VAR_7 | VAR_5 | VAR_2 | VAR_1);
 float VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 float VAR_27, VAR_28, VAR_29, VAR_30;

 if (VAR_15->fontId == VAR_0) {
  if (VAR_14 != ((void*)0))
   VAR_14[0] = VAR_14[1] = VAR_14[2] = VAR_14[3] = 0.0f;
  return;
 }

 FUNC_7(VAR_8, ((void*)0), ((void*)0), &VAR_24);

 VAR_15->textAlign = VAR_4 | VAR_23;

 VAR_27 = VAR_29 = VAR_9;
 VAR_28 = VAR_30 = VAR_10;

 FUNC_4(VAR_8->fs, VAR_15->fontSize*VAR_17);
 FUNC_5(VAR_8->fs, VAR_15->letterSpacing*VAR_17);
 FUNC_2(VAR_8->fs, VAR_15->fontBlur*VAR_17);
 FUNC_1(VAR_8->fs, VAR_15->textAlign);
 FUNC_3(VAR_8->fs, VAR_15->fontId);
 FUNC_0(VAR_8->fs, 0, &VAR_25, &VAR_26);
 VAR_25 *= VAR_18;
 VAR_26 *= VAR_18;

 while ((VAR_19 = FUNC_6(VAR_8, VAR_12, VAR_13, VAR_11, VAR_16, 2))) {
  for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
   NVGtextRow* VAR_31 = &VAR_16[VAR_20];
   float VAR_32, VAR_33, VAR_34 = 0;

   if (VAR_22 & VAR_4)
    VAR_34 = 0;
   else if (VAR_22 & VAR_3)
    VAR_34 = VAR_11*0.5f - VAR_31->width*0.5f;
   else if (VAR_22 & VAR_6)
    VAR_34 = VAR_11 - VAR_31->width;
   VAR_32 = VAR_9 + VAR_31->minx + VAR_34;
   VAR_33 = VAR_9 + VAR_31->maxx + VAR_34;
   VAR_27 = FUNC_11(VAR_27, VAR_32);
   VAR_29 = FUNC_10(VAR_29, VAR_33);

   VAR_28 = FUNC_11(VAR_28, VAR_10 + VAR_25);
   VAR_30 = FUNC_10(VAR_30, VAR_10 + VAR_26);

   VAR_10 += VAR_24 * VAR_15->lineHeight;
  }
  VAR_12 = VAR_16[VAR_19-1].next;
 }

 VAR_15->textAlign = VAR_21;

 if (VAR_14 != ((void*)0)) {
  VAR_14[0] = VAR_27;
  VAR_14[1] = VAR_28;
  VAR_14[2] = VAR_29;
  VAR_14[3] = VAR_30;
 }
}
