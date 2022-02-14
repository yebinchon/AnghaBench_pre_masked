
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {float x0; float y0; float x1; float y1; int t1; int s1; int s0; int t0; } ;
struct TYPE_18__ {int prevGlyphIndex; float x; } ;
struct TYPE_17__ {float devicePxRatio; int fs; } ;
struct TYPE_16__ {scalar_t__ fontId; float fontSize; float letterSpacing; float fontBlur; int xform; int textAlign; } ;
typedef int NVGvertex ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGcontext ;
typedef TYPE_3__ FONStextIter ;
typedef TYPE_4__ FONSquad ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,TYPE_3__*,float,float,char const*,char const*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (float*,float*,int ,float,float) ;
 int * FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 float FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (TYPE_2__*,int *,int) ;
 int FUNC_15 (int *,float,float,int ,int ) ;
 int FUNC_16 (char const*) ;

float FUNC_17(NVGcontext* VAR_1, float VAR_2, float VAR_3, const char* VAR_4, const char* VAR_5)
{
 NVGstate* VAR_6 = FUNC_12(VAR_1);
 FONStextIter VAR_7, VAR_8;
 FONSquad VAR_9;
 NVGvertex* VAR_10;
 float VAR_11 = FUNC_11(VAR_6) * VAR_1->devicePxRatio;
 float VAR_12 = 1.0f / VAR_11;
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_4 + FUNC_16(VAR_4);

 if (VAR_6->fontId == VAR_0) return VAR_2;

 FUNC_3(VAR_1->fs, VAR_6->fontSize*VAR_11);
 FUNC_4(VAR_1->fs, VAR_6->letterSpacing*VAR_11);
 FUNC_1(VAR_1->fs, VAR_6->fontBlur*VAR_11);
 FUNC_0(VAR_1->fs, VAR_6->textAlign);
 FUNC_2(VAR_1->fs, VAR_6->fontId);

 VAR_13 = FUNC_13(2, (int)(VAR_5 - VAR_4)) * 6;
 VAR_10 = FUNC_8(VAR_1, VAR_13);
 if (VAR_10 == ((void*)0)) return VAR_2;

 FUNC_5(VAR_1->fs, &VAR_7, VAR_2*VAR_11, VAR_3*VAR_11, VAR_4, VAR_5);
 VAR_8 = VAR_7;
 while (FUNC_6(VAR_1->fs, &VAR_7, &VAR_9)) {
  float VAR_15[4*2];
  if (VAR_7.prevGlyphIndex == -1) {
   if (!FUNC_9(VAR_1))
    break;
   if (VAR_14 != 0) {
    FUNC_14(VAR_1, VAR_10, VAR_14);
    VAR_14 = 0;
   }
   VAR_7 = VAR_8;
   FUNC_6(VAR_1->fs, &VAR_7, &VAR_9);
   if (VAR_7.prevGlyphIndex == -1)
    break;
  }
  VAR_8 = VAR_7;

  FUNC_7(&VAR_15[0],&VAR_15[1], VAR_6->xform, VAR_9.x0*VAR_12, VAR_9.y0*VAR_12);
  FUNC_7(&VAR_15[2],&VAR_15[3], VAR_6->xform, VAR_9.x1*VAR_12, VAR_9.y0*VAR_12);
  FUNC_7(&VAR_15[4],&VAR_15[5], VAR_6->xform, VAR_9.x1*VAR_12, VAR_9.y1*VAR_12);
  FUNC_7(&VAR_15[6],&VAR_15[7], VAR_6->xform, VAR_9.x0*VAR_12, VAR_9.y1*VAR_12);

  if (VAR_14+6 <= VAR_13) {
   FUNC_15(&VAR_10[VAR_14], VAR_15[0], VAR_15[1], VAR_9.s0, VAR_9.t0); VAR_14++;
   FUNC_15(&VAR_10[VAR_14], VAR_15[4], VAR_15[5], VAR_9.s1, VAR_9.t1); VAR_14++;
   FUNC_15(&VAR_10[VAR_14], VAR_15[2], VAR_15[3], VAR_9.s1, VAR_9.t0); VAR_14++;
   FUNC_15(&VAR_10[VAR_14], VAR_15[0], VAR_15[1], VAR_9.s0, VAR_9.t0); VAR_14++;
   FUNC_15(&VAR_10[VAR_14], VAR_15[6], VAR_15[7], VAR_9.s0, VAR_9.t1); VAR_14++;
   FUNC_15(&VAR_10[VAR_14], VAR_15[4], VAR_15[5], VAR_9.s1, VAR_9.t1); VAR_14++;
  }
 }


 FUNC_10(VAR_1);

 FUNC_14(VAR_1, VAR_10, VAR_14);

 return VAR_7.x;
}
