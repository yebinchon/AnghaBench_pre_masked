
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int x_offset; scalar_t__ y_offset; int width; } ;
struct TYPE_16__ {TYPE_2__ geometry; int glyph; } ;
struct TYPE_12__ {int font; } ;
struct TYPE_15__ {TYPE_1__ analysis; } ;
struct TYPE_14__ {scalar_t__ x; int width; scalar_t__ height; } ;
struct TYPE_11__ {int char_width; int char_height; } ;
typedef TYPE_3__ PangoRectangle ;
typedef TYPE_4__ PangoItem ;
typedef TYPE_5__ PangoGlyphInfo ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_10__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(PangoItem *VAR_3, PangoGlyphInfo *VAR_4,
    int VAR_5, int VAR_6,
    int VAR_7)
{
    PangoRectangle VAR_8;
    PangoRectangle VAR_9;
    int VAR_10;

    VAR_10 = VAR_5 * VAR_1.char_width * VAR_0;
    VAR_4->geometry.x_offset = -VAR_10 + FUNC_0(0, VAR_10 - VAR_6) / 2;
    VAR_4->geometry.width = 0;

    FUNC_1(VAR_3->analysis.font,
     VAR_4->glyph,
     &VAR_8, &VAR_9);
    if (VAR_8.x < 0)
    {
 VAR_4->geometry.x_offset += VAR_7;
 VAR_4->geometry.y_offset = VAR_9.height
  - (VAR_1.char_height - VAR_2) * VAR_0;
    }
    else


 VAR_4->geometry.x_offset = -VAR_10 + FUNC_0(0, VAR_10 - VAR_8.width) / 2;
}
