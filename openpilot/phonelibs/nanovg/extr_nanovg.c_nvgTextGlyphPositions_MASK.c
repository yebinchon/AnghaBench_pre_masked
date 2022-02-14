
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int x1; int x0; } ;
struct TYPE_18__ {scalar_t__ prevGlyphIndex; float x; int nextx; int str; } ;
struct TYPE_17__ {float devicePxRatio; int fs; } ;
struct TYPE_16__ {float x; float minx; float maxx; int str; } ;
struct TYPE_15__ {scalar_t__ fontId; float fontSize; float letterSpacing; float fontBlur; int textAlign; } ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGglyphPosition ;
typedef TYPE_3__ NVGcontext ;
typedef TYPE_4__ FONStextIter ;
typedef TYPE_5__ FONSquad ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,float) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,TYPE_4__*,float,float,char const*,char const*) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 float FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 float FUNC_10 (int ,int ) ;
 float FUNC_11 (float,int ) ;
 int FUNC_12 (char const*) ;

int FUNC_13(NVGcontext* VAR_1, float VAR_2, float VAR_3, const char* VAR_4, const char* VAR_5, NVGglyphPosition* VAR_6, int VAR_7)
{
 NVGstate* VAR_8 = FUNC_9(VAR_1);
 float VAR_9 = FUNC_8(VAR_8) * VAR_1->devicePxRatio;
 float VAR_10 = 1.0f / VAR_9;
 FONStextIter VAR_11, VAR_12;
 FONSquad VAR_13;
 int VAR_14 = 0;

 if (VAR_8->fontId == VAR_0) return 0;

 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_4 + FUNC_12(VAR_4);

 if (VAR_4 == VAR_5)
  return 0;

 FUNC_3(VAR_1->fs, VAR_8->fontSize*VAR_9);
 FUNC_4(VAR_1->fs, VAR_8->letterSpacing*VAR_9);
 FUNC_1(VAR_1->fs, VAR_8->fontBlur*VAR_9);
 FUNC_0(VAR_1->fs, VAR_8->textAlign);
 FUNC_2(VAR_1->fs, VAR_8->fontId);

 FUNC_5(VAR_1->fs, &VAR_11, VAR_2*VAR_9, VAR_3*VAR_9, VAR_4, VAR_5);
 VAR_12 = VAR_11;
 while (FUNC_6(VAR_1->fs, &VAR_11, &VAR_13)) {
  if (VAR_11.prevGlyphIndex < 0 && FUNC_7(VAR_1)) {
   VAR_11 = VAR_12;
   FUNC_6(VAR_1->fs, &VAR_11, &VAR_13);
  }
  VAR_12 = VAR_11;
  VAR_6[VAR_14].str = VAR_11.str;
  VAR_6[VAR_14].x = VAR_11.x * VAR_10;
  VAR_6[VAR_14].minx = FUNC_11(VAR_11.x, VAR_13.x0) * VAR_10;
  VAR_6[VAR_14].maxx = FUNC_10(VAR_11.nextx, VAR_13.x1) * VAR_10;
  VAR_14++;
  if (VAR_14 >= VAR_7)
   break;
 }

 return VAR_14;
}
