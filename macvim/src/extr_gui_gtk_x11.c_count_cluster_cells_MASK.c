
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_14__ {int num_glyphs; int* log_clusters; TYPE_4__* glyphs; } ;
struct TYPE_11__ {int font; } ;
struct TYPE_13__ {int offset; int length; TYPE_3__ analysis; } ;
struct TYPE_10__ {int width; } ;
struct TYPE_9__ {scalar_t__ is_cluster_start; } ;
struct TYPE_12__ {int glyph; TYPE_2__ geometry; TYPE_1__ attr; } ;
typedef int PangoRectangle ;
typedef TYPE_5__ PangoItem ;
typedef TYPE_6__ PangoGlyphString ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(char_u *VAR_0, PangoItem *VAR_1,
      PangoGlyphString* VAR_2, int VAR_3,
      int *VAR_4,
      int *VAR_5)
{
    char_u *VAR_6;
    int VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12 = 0;

    VAR_10 = VAR_2->glyphs[VAR_3].geometry.width;

    for (VAR_7 = VAR_3 + 1; VAR_7 < VAR_2->num_glyphs; ++VAR_7)
    {
 if (VAR_2->glyphs[VAR_7].attr.is_cluster_start)
     break;
 else if (VAR_2->glyphs[VAR_7].geometry.width > VAR_10)
     VAR_10 = VAR_2->glyphs[VAR_7].geometry.width;
    }

    VAR_8 = VAR_1->offset + VAR_2->log_clusters[VAR_3];
    VAR_9 = VAR_1->offset + ((VAR_7 < VAR_2->num_glyphs) ?
       VAR_2->log_clusters[VAR_7] : VAR_1->length);

    for (VAR_6 = VAR_0 + VAR_8; VAR_6 < VAR_0 + VAR_9; VAR_6 += FUNC_2(*VAR_6))
    {
 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11 < 0x80)
     ++VAR_12;
 else if (!FUNC_4(VAR_11))
     VAR_12 += FUNC_3(VAR_11);
    }

    if (VAR_5 != ((void*)0)
     && VAR_12 > 0 && VAR_7 == VAR_2->num_glyphs)
    {
 PangoRectangle VAR_13;





 FUNC_1(VAR_1->analysis.font,
         VAR_2->glyphs[VAR_3].glyph,
         &VAR_13, ((void*)0));

 if (FUNC_0(VAR_13) > 0)
     *VAR_5 = FUNC_0(VAR_13);
    }

    if (VAR_12 > 0)
 *VAR_4 = VAR_10;

    return VAR_12;
}
