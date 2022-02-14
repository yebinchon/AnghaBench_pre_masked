
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {unsigned int glyph_count; int scale; TYPE_3__* glyph_pos; } ;
typedef TYPE_4__ string_walker ;
typedef int hb_buffer_t ;
struct TYPE_14__ {int bidi_level; scalar_t__ w; TYPE_2__* box; int markup_lang; int script; int h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_5__ fz_html_flow ;
typedef int fz_context ;
struct TYPE_12__ {scalar_t__ x_advance; } ;
struct TYPE_11__ {float em; TYPE_1__* style; } ;
struct TYPE_10__ {int small_caps; int font; int line_height; } ;


 int FUNC_0 (int ,float) ;
 char* FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_4__*,int *,int,int ,int ,int ,int ,char const*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_0, fz_html_flow *VAR_1, hb_buffer_t *VAR_2)
{
 string_walker VAR_3;
 unsigned int VAR_4;
 const char *VAR_5;
 float VAR_6;

 VAR_6 = VAR_1->box->em;
 VAR_1->x = 0;
 VAR_1->y = 0;
 VAR_1->w = 0;
 VAR_1->h = FUNC_0(VAR_1->box->style->line_height, VAR_6);

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, &VAR_3, VAR_2, VAR_1->bidi_level & 1, VAR_1->box->style->font, VAR_1->script, VAR_1->markup_lang, VAR_1->box->style->small_caps, VAR_5);
 while (FUNC_3(&VAR_3))
 {
  int VAR_7 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3.glyph_count; VAR_4++)
   VAR_7 += VAR_3.glyph_pos[VAR_4].x_advance;
  VAR_1->w += VAR_7 * VAR_6 / VAR_3.scale;
 }
}
