
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int * Sequence; int Coverage; } ;
struct TYPE_7__ {int * Substitute; int GlyphCount; } ;
struct TYPE_6__ {int SubTableCount; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef size_t INT ;
typedef TYPE_2__ GSUB_Sequence ;
typedef TYPE_3__ GSUB_MultipleSubstFormat1 ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static INT FUNC_5(const OT_LookupTable *VAR_2, WORD *VAR_3, INT VAR_4, INT VAR_5, INT *VAR_6)
{
    int VAR_7;
    FUNC_3("Multiple Substitution Subtable\n");

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->SubTableCount); VAR_7++)
    {
        int VAR_8, VAR_9;
        const GSUB_MultipleSubstFormat1 *VAR_10;
        VAR_10 = (const GSUB_MultipleSubstFormat1*)FUNC_1(VAR_2, VAR_7);

        VAR_8 = FUNC_0(VAR_10->Coverage);
        VAR_9 = FUNC_2((const BYTE*)VAR_10+VAR_8, VAR_3[VAR_4]);
        if (VAR_9 != -1)
        {
            const GSUB_Sequence *VAR_11;
            int VAR_12;
            int VAR_13;
            VAR_8 = FUNC_0(VAR_10->Sequence[VAR_9]);
            VAR_11 = (const GSUB_Sequence*)((const BYTE*)VAR_10+VAR_8);
            VAR_12 = FUNC_0(VAR_11->GlyphCount);
            FUNC_3("  Glyph 0x%x (+%i)->",VAR_3[VAR_4],(VAR_12-1));

            for (VAR_13 = (*VAR_6)+(VAR_12-1); VAR_13 > VAR_4; VAR_13--)
                    VAR_3[VAR_13] =VAR_3[VAR_13-(VAR_12-1)];

            for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
                    if (VAR_5 < 0)
                        VAR_3[VAR_4 + (VAR_12-1) - VAR_13] = FUNC_0(VAR_11->Substitute[VAR_13]);
                    else
                        VAR_3[VAR_4 + VAR_13] = FUNC_0(VAR_11->Substitute[VAR_13]);

            *VAR_6 = *VAR_6 + (VAR_12 - 1);

            if (FUNC_4(VAR_1))
            {
                for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
                    FUNC_3(" 0x%x",VAR_3[VAR_4+VAR_13]);
                FUNC_3("\n");
            }

            if (VAR_5 > 0)
                return VAR_4 + VAR_12;
            else
                return VAR_4 - 1;
        }
    }
    return VAR_0;
}
