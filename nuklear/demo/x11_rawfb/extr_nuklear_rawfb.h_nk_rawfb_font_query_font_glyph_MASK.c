
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float const height; } ;
struct nk_user_font_glyph {float width; float height; float xadvance; void** uv; void* offset; TYPE_1__ info; struct nk_user_font_glyph* glyphs; } ;
struct nk_font_glyph {float x1; float x0; float y1; float y0; float xadvance; float u0; float v0; float u1; float v1; } ;
struct nk_font {float width; float height; float xadvance; void** uv; void* offset; TYPE_1__ info; struct nk_font* glyphs; } ;
typedef int nk_rune ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_2__ nk_handle ;


 int FUNC_0 (struct nk_user_font_glyph*) ;
 int FUNC_1 (int const) ;
 struct nk_font_glyph* FUNC_2 (struct nk_user_font_glyph*,int const) ;
 void* FUNC_3 (float,float) ;

__attribute__((used)) static void
FUNC_4(nk_handle VAR_0, const float VAR_1,
    struct nk_user_font_glyph *VAR_2, const nk_rune VAR_3,
    const nk_rune VAR_4)
{
    float VAR_5;
    const struct nk_font_glyph *VAR_6;
    struct nk_font *VAR_7;
    FUNC_0(VAR_2);
    FUNC_1(VAR_4);

    VAR_7 = (struct nk_font*)VAR_0.ptr;
    FUNC_0(VAR_7);
    FUNC_0(VAR_7->glyphs);
    if (!VAR_7 || !VAR_2)
        return;

    VAR_5 = VAR_1/VAR_7->info.height;
    VAR_6 = FUNC_2(VAR_7, VAR_3);
    VAR_2->width = (VAR_6->x1 - VAR_6->x0) * VAR_5;
    VAR_2->height = (VAR_6->y1 - VAR_6->y0) * VAR_5;
    VAR_2->offset = FUNC_3(VAR_6->x0 * VAR_5, VAR_6->y0 * VAR_5);
    VAR_2->xadvance = (VAR_6->xadvance * VAR_5);
    VAR_2->uv[0] = FUNC_3(VAR_6->u0, VAR_6->v0);
    VAR_2->uv[1] = FUNC_3(VAR_6->u1, VAR_6->v1);
}
