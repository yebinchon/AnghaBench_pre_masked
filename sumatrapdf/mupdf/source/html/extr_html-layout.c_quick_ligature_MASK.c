
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int glyph_count; TYPE_1__* glyph_info; int font; } ;
typedef TYPE_2__ string_walker ;
typedef int fz_context ;
struct TYPE_8__ {int is_mono; } ;
struct TYPE_6__ {float codepoint; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_0, string_walker *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->glyph_info[VAR_2].codepoint == 'f' && VAR_2 + 1 < VAR_1->glyph_count && !FUNC_1(VAR_1->font)->is_mono)
 {
  if (VAR_1->glyph_info[VAR_2+1].codepoint == 'f')
  {
   if (VAR_2 + 2 < VAR_1->glyph_count && VAR_1->glyph_info[VAR_2+2].codepoint == 'i')
   {
    if (FUNC_0(VAR_0, VAR_1->font, 0xFB03))
     return FUNC_2(VAR_0, VAR_1, VAR_2, 2, 0xFB03);
   }
   if (VAR_2 + 2 < VAR_1->glyph_count && VAR_1->glyph_info[VAR_2+2].codepoint == 'l')
   {
    if (FUNC_0(VAR_0, VAR_1->font, 0xFB04))
     return FUNC_2(VAR_0, VAR_1, VAR_2, 2, 0xFB04);
   }
   if (FUNC_0(VAR_0, VAR_1->font, 0xFB00))
    return FUNC_2(VAR_0, VAR_1, VAR_2, 1, 0xFB00);
  }
  if (VAR_1->glyph_info[VAR_2+1].codepoint == 'i')
  {
   if (FUNC_0(VAR_0, VAR_1->font, 0xFB01))
    return FUNC_2(VAR_0, VAR_1, VAR_2, 1, 0xFB01);
  }
  if (VAR_1->glyph_info[VAR_2+1].codepoint == 'l')
  {
   if (FUNC_0(VAR_0, VAR_1->font, 0xFB02))
    return FUNC_2(VAR_0, VAR_1, VAR_2, 1, 0xFB02);
  }
 }
 return VAR_1->glyph_info[VAR_2].codepoint;
}
