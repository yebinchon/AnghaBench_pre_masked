
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct glyph_info {int dummy; } ;
struct ft2_source {scalar_t__ texbuf_x; scalar_t__ texbuf_y; scalar_t__ max_h; int * texbuf; int * tex; TYPE_7__* font_face; } ;
typedef scalar_t__ int32_t ;
typedef int gs_texture_t ;
struct TYPE_13__ {TYPE_3__* glyph; } ;
struct TYPE_12__ {float u; float u2; float v; float v2; int xadv; int xoff; int yoff; scalar_t__ h; scalar_t__ w; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ rows; int * buffer; } ;
struct TYPE_9__ {int x; } ;
struct TYPE_11__ {TYPE_2__ bitmap; TYPE_1__ advance; int bitmap_left; int bitmap_top; } ;
typedef int FT_UInt ;
typedef TYPE_3__* FT_GlyphSlot ;


 int FUNC_0 (TYPE_7__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 size_t VAR_4 ;
 TYPE_4__* FUNC_4 (int) ;
 size_t VAR_5 ;
 int * FUNC_5 (scalar_t__,scalar_t__,int ,int,int const**,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_4__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_9 (int *) ;

void FUNC_10(struct ft2_source *VAR_9, wchar_t *VAR_10)
{
 FT_GlyphSlot VAR_11;
 FT_UInt VAR_12 = 0;

 if (!VAR_9->font_face || !VAR_10)
  return;

 VAR_11 = VAR_9->font_face->glyph;

 uint32_t VAR_13 = VAR_9->texbuf_x, VAR_14 = VAR_9->texbuf_y;

 int32_t VAR_15 = 0;
 size_t VAR_16 = FUNC_9(VAR_10);

 for (size_t VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_12 =
   FUNC_0(VAR_9->font_face, VAR_10[VAR_17]);

  if (VAR_6 != ((void*)0))
   goto skip_glyph;

  FUNC_1(VAR_9->font_face, VAR_12, VAR_0);
  FUNC_2(VAR_11, VAR_1);

  uint32_t VAR_18 = VAR_11->bitmap.width;
  uint32_t VAR_19 = VAR_11->bitmap.rows;

  if (VAR_9->max_h < VAR_19)
   VAR_9->max_h = VAR_19;

  if (VAR_13 + VAR_18 >= VAR_8) {
   VAR_13 = 0;
   VAR_14 += VAR_9->max_h + 1;
  }

  if (VAR_14 + VAR_19 >= VAR_7) {
   FUNC_3(VAR_3,
        "Out of space trying to render glyphs");
   break;
  }

  VAR_6 = FUNC_4(sizeof(struct glyph_info));
  VAR_6->u = (float)VAR_13 / (float)VAR_8;
  VAR_6->u2 = (float)(VAR_13 + VAR_18) / (float)VAR_8;
  VAR_6->v = (float)VAR_14 / (float)VAR_7;
  VAR_6->v2 = (float)(VAR_14 + VAR_19) / (float)VAR_7;
  VAR_6->w = VAR_18;
  VAR_6->h = VAR_19;
  VAR_6->yoff = VAR_11->bitmap_top;
  VAR_6->xoff = VAR_11->bitmap_left;
  VAR_6->xadv = VAR_11->advance.x >> 6;

  for (uint32_t VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
   for (uint32_t VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
    VAR_9->texbuf[VAR_4] =
     VAR_11->bitmap.buffer[VAR_5];
  }

  VAR_13 += (VAR_18 + 1);
  if (VAR_13 >= VAR_8) {
   VAR_13 = 0;
   VAR_14 += VAR_9->max_h;
  }

  VAR_15++;
 skip_glyph:;
 }

 VAR_9->texbuf_x = VAR_13;
 VAR_9->texbuf_y = VAR_14;

 if (VAR_15 > 0) {

  FUNC_7();

  if (VAR_9->tex != ((void*)0)) {
   gs_texture_t *VAR_22 = ((void*)0);
   VAR_22 = VAR_9->tex;
   VAR_9->tex = ((void*)0);
   FUNC_6(VAR_22);
  }

  VAR_9->tex = FUNC_5(
   VAR_8, VAR_7, VAR_2, 1,
   (const uint8_t **)&VAR_9->texbuf, 0);

  FUNC_8();
 }
}
