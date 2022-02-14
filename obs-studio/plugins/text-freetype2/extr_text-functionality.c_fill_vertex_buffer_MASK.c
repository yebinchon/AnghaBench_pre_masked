
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vec2 {int dummy; } ;
struct gs_vb_data {scalar_t__ points; scalar_t__ colors; TYPE_1__* tvarray; } ;
struct ft2_source {int* text; int max_h; int* colorbuf; int custom_width; int cy; int * color; int font_face; int vbuf; } ;
struct TYPE_4__ {int xadv; int yoff; int h; int v2; int u2; int v; int u; scalar_t__ w; scalar_t__ xoff; } ;
struct TYPE_3__ {scalar_t__ array; } ;
typedef int FT_UInt ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 struct gs_vb_data* FUNC_3 (int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (struct vec2*,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,float,float,float,float) ;
 TYPE_2__* VAR_0 ;
 size_t FUNC_7 (int*) ;

void FUNC_8(struct ft2_source *VAR_1)
{
 struct gs_vb_data *VAR_2 = FUNC_3(VAR_1->vbuf);
 if (VAR_2 == ((void*)0) || !VAR_1->text)
  return;

 struct vec2 *VAR_3 = (struct vec2 *)VAR_2->tvarray[0].array;
 uint32_t *VAR_4 = (uint32_t *)VAR_2->colors;

 FT_UInt VAR_5 = 0;

 uint32_t VAR_6 = 0, VAR_7 = VAR_1->max_h, VAR_8 = VAR_7;
 uint32_t VAR_9 = 0;
 size_t VAR_10 = FUNC_7(VAR_1->text);

 if (VAR_1->colorbuf != ((void*)0)) {
  FUNC_1(VAR_1->colorbuf);
  VAR_1->colorbuf = ((void*)0);
 }
 VAR_1->colorbuf =
  FUNC_2(sizeof(uint32_t) * FUNC_7(VAR_1->text) * 6);
 for (size_t VAR_11 = 0; VAR_11 < VAR_10 * 6; VAR_11++) {
  VAR_1->colorbuf[VAR_11] = 0xFF000000;
 }

 for (size_t VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
 add_linebreak:;
  if (VAR_1->text[VAR_12] != L'\n')
   goto draw_glyph;
  VAR_6 = 0;
  VAR_12++;
  VAR_7 += VAR_1->max_h + 4;
  if (VAR_12 == FUNC_7(VAR_1->text))
   goto skip_glyph;
  if (VAR_1->text[VAR_12] == L'\n')
   goto add_linebreak;
 draw_glyph:;

  if (VAR_1->text[VAR_12] == L'\r')
   goto skip_glyph;

  VAR_5 =
   FUNC_0(VAR_1->font_face, VAR_1->text[VAR_12]);
  if (VAR_0 == ((void*)0))
   goto skip_glyph;

  if (VAR_1->custom_width < 100)
   goto skip_custom_width;

  if (VAR_6 + VAR_0->xadv > VAR_1->custom_width) {
   VAR_6 = 0;
   VAR_7 += VAR_1->max_h + 4;
  }

 skip_custom_width:;

  FUNC_6(VAR_2->points + (VAR_9 * 6),
       (float)VAR_6 + (float)VAR_0->xoff,
       (float)VAR_7 - (float)VAR_0->yoff,
       (float)VAR_0->w, (float)VAR_0->h);
  FUNC_5(VAR_3 + (VAR_9 * 6), VAR_0->u, VAR_0->v,
     VAR_0->u2, VAR_0->v2);
  FUNC_4(VAR_4 + (VAR_9 * 6), VAR_1->color[0],
     VAR_1->color[1]);
  VAR_6 += VAR_0->xadv;
  if (VAR_7 - (float)VAR_0->yoff + VAR_0->h > VAR_8)
   VAR_8 = VAR_7 - VAR_0->yoff + VAR_0->h;
  VAR_9++;
 skip_glyph:;
 }

 VAR_1->cy = VAR_8;
}
