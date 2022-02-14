
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_8__ {int Coverage; int DeltaGlyphID; int SubstFormat; } ;
struct TYPE_7__ {int * Substitute; int GlyphCount; } ;
struct TYPE_6__ {int SubTableCount; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef size_t INT ;
typedef TYPE_2__ GSUB_SingleSubstFormat2 ;
typedef TYPE_3__ GSUB_SingleSubstFormat1 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int) ;
 int FUNC_2 (int const*,size_t) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static INT FUNC_4(const OT_LookupTable *VAR_1, WORD *VAR_2, INT VAR_3, INT VAR_4, INT *VAR_5)
{
    int VAR_6;
    FUNC_3("Single Substitution Subtable\n");

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1->SubTableCount); VAR_6++)
    {
        const GSUB_SingleSubstFormat1 *VAR_7 = (const GSUB_SingleSubstFormat1*)FUNC_1(VAR_1, VAR_6);
        if (FUNC_0(VAR_7->SubstFormat) == 1)
        {
            int VAR_8 = FUNC_0(VAR_7->Coverage);
            FUNC_3("  subtype 1, delta %i\n", FUNC_0(VAR_7->DeltaGlyphID));
            if (FUNC_2((const BYTE*)VAR_7+VAR_8, VAR_2[VAR_3]) != -1)
            {
                FUNC_3("  Glyph 0x%x ->",VAR_2[VAR_3]);
                VAR_2[VAR_3] = VAR_2[VAR_3] + FUNC_0(VAR_7->DeltaGlyphID);
                FUNC_3(" 0x%x\n",VAR_2[VAR_3]);
                return VAR_3 + VAR_4;
            }
        }
        else
        {
            const GSUB_SingleSubstFormat2 *VAR_9;
            INT VAR_10;
            INT VAR_11;

            VAR_9 = (const GSUB_SingleSubstFormat2 *)VAR_7;
            VAR_11 = FUNC_0(VAR_7->Coverage);
            FUNC_3("  subtype 2,  glyph count %i\n", FUNC_0(VAR_9->GlyphCount));
            VAR_10 = FUNC_2((const BYTE*)VAR_9+VAR_11, VAR_2[VAR_3]);
            FUNC_3("  Coverage index %i\n",VAR_10);
            if (VAR_10 != -1)
            {
                if (VAR_2[VAR_3] == FUNC_0(VAR_9->Substitute[VAR_10]))
                    return VAR_0;

                FUNC_3("    Glyph is 0x%x ->",VAR_2[VAR_3]);
                VAR_2[VAR_3] = FUNC_0(VAR_9->Substitute[VAR_10]);
                FUNC_3("0x%x\n",VAR_2[VAR_3]);
                return VAR_3 + VAR_4;
            }
        }
    }
    return VAR_0;
}
