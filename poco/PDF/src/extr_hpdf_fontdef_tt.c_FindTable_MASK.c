
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int * tag; } ;
struct TYPE_7__ {scalar_t__ num_tables; TYPE_3__* table; } ;
struct TYPE_8__ {TYPE_1__ offset_tbl; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTFTable ;
typedef TYPE_4__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static HPDF_TTFTable*
FUNC_2 (HPDF_FontDef VAR_0,
           const char *VAR_1)
{
    HPDF_TTFontDefAttr VAR_2 = (HPDF_TTFontDefAttr)VAR_0->attr;
    HPDF_TTFTable* VAR_3 = VAR_2->offset_tbl.table;
    HPDF_UINT VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->offset_tbl.num_tables; VAR_4++, VAR_3++) {
        if (FUNC_0 ((HPDF_BYTE *)VAR_3->tag, (HPDF_BYTE *)VAR_1, 4) == 0) {
            FUNC_1((" FindTable find table[%c%c%c%c]\n",
                        VAR_3->tag[0], VAR_3->tag[1], VAR_3->tag[2], VAR_3->tag[3]));
            return VAR_3;
        }
    }

    return ((void*)0);
}
