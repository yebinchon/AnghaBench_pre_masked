
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_8__ {int * Alternate; int GlyphCount; } ;
struct TYPE_7__ {int * AlternateSet; int Coverage; } ;
struct TYPE_6__ {int SubTableCount; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef size_t INT ;
typedef TYPE_2__ GSUB_AlternateSubstFormat1 ;
typedef TYPE_3__ GSUB_AlternateSet ;
typedef int BYTE ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int) ;
 size_t FUNC_3 (int const*,scalar_t__) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static INT FUNC_5(const OT_LookupTable *VAR_1, WORD *VAR_2, INT VAR_3, INT VAR_4, INT *VAR_5)
{
    int VAR_6;
    FUNC_4("Alternate Substitution Subtable\n");

    for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_1->SubTableCount); VAR_6++)
    {
        int VAR_7;
        const GSUB_AlternateSubstFormat1 *VAR_8;
        INT VAR_9;

        VAR_8 = (const GSUB_AlternateSubstFormat1*)FUNC_2(VAR_1, VAR_6);
        VAR_7 = FUNC_1(VAR_8->Coverage);

        VAR_9 = FUNC_3((const BYTE*)VAR_8+VAR_7, VAR_2[VAR_3]);
        if (VAR_9 != -1)
        {
            const GSUB_AlternateSet *VAR_10;
            VAR_7 = FUNC_1(VAR_8->AlternateSet[VAR_9]);
            VAR_10 = (const GSUB_AlternateSet*)((const BYTE*)VAR_8+VAR_7);
            FUNC_0("%i alternates, picking index 0\n",FUNC_1(VAR_10->GlyphCount));
            if (VAR_2[VAR_3] == FUNC_1(VAR_10->Alternate[0]))
                return VAR_0;

            FUNC_4("  Glyph 0x%x ->",VAR_2[VAR_3]);
            VAR_2[VAR_3] = FUNC_1(VAR_10->Alternate[0]);
            FUNC_4(" 0x%x\n",VAR_2[VAR_3]);
            return VAR_3 + VAR_4;
        }
    }
    return VAR_0;
}
