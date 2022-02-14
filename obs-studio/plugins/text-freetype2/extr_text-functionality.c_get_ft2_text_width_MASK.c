
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ uint32_t ;
struct ft2_source {TYPE_3__* font_face; } ;
struct TYPE_7__ {TYPE_2__* glyph; } ;
struct TYPE_5__ {int x; } ;
struct TYPE_6__ {TYPE_1__ advance; } ;
typedef int FT_UInt ;
typedef TYPE_2__* FT_GlyphSlot ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 size_t FUNC_2 (int*) ;

uint32_t FUNC_3(wchar_t *VAR_1, struct ft2_source *VAR_2)
{
 FT_GlyphSlot VAR_3 = VAR_2->font_face->glyph;
 FT_UInt VAR_4 = 0;
 uint32_t VAR_5 = 0, VAR_6 = 0;
 size_t VAR_7;

 if (!VAR_1)
  return 0;

 VAR_7 = FUNC_2(VAR_1);
 for (size_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4 = FUNC_0(VAR_2->font_face, VAR_1[VAR_8]);
  FUNC_1(VAR_2->font_face, VAR_4, VAR_0);

  if (VAR_1[VAR_8] == L'\n')
   VAR_5 = 0;
  else {
   VAR_5 += VAR_3->advance.x >> 6;
   if (VAR_5 > VAR_6)
    VAR_6 = VAR_5;
  }
 }

 return VAR_6;
}
