
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int error; int attr; } ;
struct TYPE_7__ {scalar_t__* widths; } ;
struct TYPE_6__ {int numwords; int numspace; int width; int numchars; int member_3; int member_2; int member_1; int member_0; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__ HPDF_TextWidth ;
typedef TYPE_2__* HPDF_FontAttr ;
typedef TYPE_3__* HPDF_Font ;
typedef size_t HPDF_BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static HPDF_TextWidth
FUNC_3 (HPDF_Font VAR_1,
                      const HPDF_BYTE *VAR_2,
                      HPDF_UINT VAR_3)
{
    HPDF_FontAttr VAR_4 = (HPDF_FontAttr)VAR_1->attr;
    HPDF_TextWidth VAR_5 = {0, 0, 0, 0};
    HPDF_UINT VAR_6;
    HPDF_BYTE VAR_7 = 0;

    FUNC_1 ((" HPDF_Type1Font_TextWidth\n"));

    if (VAR_4->widths) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            VAR_7 = VAR_2[VAR_6];
            VAR_5.numchars++;
            VAR_5.width += VAR_4->widths[VAR_7];

            if (FUNC_0(VAR_7)) {
                VAR_5.numspace++;
                VAR_5.numwords++;
            }
        }
    } else
        FUNC_2 (VAR_1->error, VAR_0, 0);


    if (FUNC_0(VAR_7))
        ;
    else
        VAR_5.numwords++;

    return VAR_5;
}
