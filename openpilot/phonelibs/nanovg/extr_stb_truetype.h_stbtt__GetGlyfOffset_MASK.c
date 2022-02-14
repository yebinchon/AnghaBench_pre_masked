
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numGlyphs; int indexToLocFormat; int glyf; scalar_t__ loca; scalar_t__ data; } ;
typedef TYPE_1__ stbtt_fontinfo ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(const stbtt_fontinfo *VAR_0, int VAR_1)
{
   int VAR_2,VAR_3;

   if (VAR_1 >= VAR_0->numGlyphs) return -1;
   if (VAR_0->indexToLocFormat >= 2) return -1;

   if (VAR_0->indexToLocFormat == 0) {
      VAR_2 = VAR_0->glyf + FUNC_1(VAR_0->data + VAR_0->loca + VAR_1 * 2) * 2;
      VAR_3 = VAR_0->glyf + FUNC_1(VAR_0->data + VAR_0->loca + VAR_1 * 2 + 2) * 2;
   } else {
      VAR_2 = VAR_0->glyf + FUNC_0 (VAR_0->data + VAR_0->loca + VAR_1 * 4);
      VAR_3 = VAR_0->glyf + FUNC_0 (VAR_0->data + VAR_0->loca + VAR_1 * 4 + 4);
   }

   return VAR_2==VAR_3 ? -1 : VAR_2;
}
