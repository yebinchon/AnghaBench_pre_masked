
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int glyph_count; int * glyph_pos; int * glyph_info; } ;
typedef TYPE_1__ string_walker ;
typedef int fz_context ;



__attribute__((used)) static int FUNC_0(fz_context *VAR_0, string_walker *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 for (VAR_5 = VAR_2 + VAR_3 + 1; VAR_5 < VAR_1->glyph_count; ++VAR_5)
 {
  VAR_1->glyph_info[VAR_5-VAR_3] = VAR_1->glyph_info[VAR_5];
  VAR_1->glyph_pos[VAR_5-VAR_3] = VAR_1->glyph_pos[VAR_5];
 }
 VAR_1->glyph_count -= VAR_3;
 return VAR_4;
}
