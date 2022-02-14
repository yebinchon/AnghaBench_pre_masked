
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr; } ;
struct TYPE_4__ {int* used; int * widths; int fontdef; int encoder; } ;
typedef int HPDF_UNICODE ;
typedef int HPDF_INT ;
typedef TYPE_1__* HPDF_FontAttr ;
typedef TYPE_2__* HPDF_Font ;
typedef size_t HPDF_BYTE ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static HPDF_INT
FUNC_2 (HPDF_Font VAR_0,
           HPDF_BYTE VAR_1)
{
    HPDF_FontAttr VAR_2 = (HPDF_FontAttr)VAR_0->attr;

    if (VAR_2->used[VAR_1] == 0) {
        HPDF_UNICODE VAR_3 = FUNC_0 (VAR_2->encoder, VAR_1);

        VAR_2->used[VAR_1] = 1;
        VAR_2->widths[VAR_1] = FUNC_1(VAR_2->fontdef,
                VAR_3);
    }

    return VAR_2->widths[VAR_1];
}
