
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ a; } ;
struct osd_style_opts {double font_size; double border_size; double shadow_offset; double spacing; double margin_x; double margin_y; int align_y; int italic; int bold; int blur; int justify; scalar_t__ align_x; TYPE_3__ shadow_color; TYPE_3__ back_color; TYPE_3__ border_color; TYPE_3__ color; scalar_t__ font; } ;
struct TYPE_4__ {double FontSize; int BorderStyle; double Outline; double Shadow; double Spacing; double MarginL; double MarginR; double MarginV; int ScaleX; int ScaleY; int Italic; int Bold; int Blur; int Justify; scalar_t__ Alignment; void* BackColour; void* OutlineColour; void* PrimaryColour; void* SecondaryColour; scalar_t__ FontName; } ;
typedef TYPE_1__ ASS_Style ;


 void* FUNC_0 (TYPE_3__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4(ASS_Style *VAR_0, double VAR_1,
                      const struct osd_style_opts *VAR_2)
{
    if (!VAR_0)
        return;

    if (VAR_2->font) {
        if (!VAR_0->FontName || FUNC_2(VAR_0->FontName, VAR_2->font) != 0) {
            FUNC_1(VAR_0->FontName);
            VAR_0->FontName = FUNC_3(VAR_2->font);
        }
    }



    double VAR_3 = VAR_1 / 720.0;

    VAR_0->FontSize = VAR_2->font_size * VAR_3;
    VAR_0->PrimaryColour = FUNC_0(VAR_2->color);
    VAR_0->SecondaryColour = VAR_0->PrimaryColour;
    VAR_0->OutlineColour = FUNC_0(VAR_2->border_color);
    if (VAR_2->back_color.a) {
        VAR_0->BackColour = FUNC_0(VAR_2->back_color);
        VAR_0->BorderStyle = 4;
    } else {
        VAR_0->BackColour = FUNC_0(VAR_2->shadow_color);
        VAR_0->BorderStyle = 1;
    }
    VAR_0->Outline = VAR_2->border_size * VAR_3;
    VAR_0->Shadow = VAR_2->shadow_offset * VAR_3;
    VAR_0->Spacing = VAR_2->spacing * VAR_3;
    VAR_0->MarginL = VAR_2->margin_x * VAR_3;
    VAR_0->MarginR = VAR_0->MarginL;
    VAR_0->MarginV = VAR_2->margin_y * VAR_3;
    VAR_0->ScaleX = 1.;
    VAR_0->ScaleY = 1.;
    VAR_0->Alignment = 1 + (VAR_2->align_x + 1) + (VAR_2->align_y + 2) % 3 * 4;



    VAR_0->Blur = VAR_2->blur;
    VAR_0->Bold = VAR_2->bold;
    VAR_0->Italic = VAR_2->italic;
}
