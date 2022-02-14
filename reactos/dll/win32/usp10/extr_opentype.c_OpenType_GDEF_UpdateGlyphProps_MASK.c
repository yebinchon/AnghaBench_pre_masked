
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_10__ {int GlyphClassDef; } ;
struct TYPE_7__ {int fClusterStart; int fDiacritic; int fZeroWidth; } ;
struct TYPE_9__ {TYPE_1__ sva; } ;
struct TYPE_8__ {TYPE_4__* GDEF_Table; } ;
typedef TYPE_2__ ScriptCache ;
typedef TYPE_3__ SCRIPT_GLYPHPROP ;
typedef TYPE_4__ GDEF_Header ;
typedef int BYTE ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (void*,int const) ;
 int FUNC_3 (int*,int const,int) ;

void FUNC_4(ScriptCache *VAR_0, const WORD *VAR_1, const WORD VAR_2, WORD* VAR_3, const WORD VAR_4, SCRIPT_GLYPHPROP *VAR_5)
{
    int VAR_6;
    void *VAR_7 = ((void*)0);

    if (VAR_0->GDEF_Table)
    {
        const GDEF_Header *VAR_8 = VAR_0->GDEF_Table;
        WORD VAR_9 = FUNC_1( VAR_8->GlyphClassDef );
        if (VAR_9)
            VAR_7 = (BYTE *)VAR_0->GDEF_Table + VAR_9;
    }

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
        WORD VAR_10;
        int VAR_11 = 0;
        int VAR_12;

        VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_6);
        if (VAR_12 >= 0)
        {
            for (; VAR_12 < VAR_4 && VAR_3[VAR_12] == VAR_6; VAR_12++)
                VAR_11++;
        }

        VAR_10 = FUNC_2( VAR_7, VAR_1[VAR_6] );

        switch (VAR_10)
        {
            case 0:
            case 131:
                VAR_5[VAR_6].sva.fClusterStart = 1;
                VAR_5[VAR_6].sva.fDiacritic = 0;
                VAR_5[VAR_6].sva.fZeroWidth = 0;
                break;
            case 129:
                VAR_5[VAR_6].sva.fClusterStart = 1;
                VAR_5[VAR_6].sva.fDiacritic = 0;
                VAR_5[VAR_6].sva.fZeroWidth = 0;
                break;
            case 128:
                VAR_5[VAR_6].sva.fClusterStart = 0;
                VAR_5[VAR_6].sva.fDiacritic = 1;
                VAR_5[VAR_6].sva.fZeroWidth = 1;
                break;
            case 130:
                VAR_5[VAR_6].sva.fClusterStart = 0;
                VAR_5[VAR_6].sva.fDiacritic = 0;
                VAR_5[VAR_6].sva.fZeroWidth = 0;
                break;
            default:
                FUNC_0("Unknown glyph class %i\n",VAR_10);
                VAR_5[VAR_6].sva.fClusterStart = 1;
                VAR_5[VAR_6].sva.fDiacritic = 0;
                VAR_5[VAR_6].sva.fZeroWidth = 0;
        }

        if (VAR_11 == 0)
            VAR_5[VAR_6].sva.fClusterStart = 0;
    }
}
