
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_10__ {int LigGlyph; int * Component; int CompCount; } ;
struct TYPE_9__ {int * Ligature; int LigatureCount; } ;
struct TYPE_8__ {int * LigatureSet; int Coverage; } ;
struct TYPE_7__ {int SubTableCount; } ;
typedef TYPE_1__ OT_LookupTable ;
typedef size_t INT ;
typedef TYPE_2__ GSUB_LigatureSubstFormat1 ;
typedef TYPE_3__ GSUB_LigatureSet ;
typedef TYPE_4__ GSUB_Ligature ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int*,int*,size_t) ;

__attribute__((used)) static INT FUNC_5(const OT_LookupTable *VAR_1, WORD *VAR_2, INT VAR_3, INT VAR_4, INT *VAR_5)
{
    int VAR_6;

    FUNC_3("Ligature Substitution Subtable\n");
    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1->SubTableCount); VAR_6++)
    {
        const GSUB_LigatureSubstFormat1 *VAR_7;
        int VAR_8,VAR_9;

        VAR_7 = (const GSUB_LigatureSubstFormat1*)FUNC_1(VAR_1, VAR_6);
        VAR_8 = FUNC_0(VAR_7->Coverage);
        VAR_9 = FUNC_2((const BYTE*)VAR_7+VAR_8, VAR_2[VAR_3]);
        FUNC_3("  Coverage index %i\n",VAR_9);
        if (VAR_9 != -1)
        {
            const GSUB_LigatureSet *VAR_10;
            int VAR_11, VAR_12;

            VAR_8 = FUNC_0(VAR_7->LigatureSet[VAR_9]);
            VAR_10 = (const GSUB_LigatureSet*)((const BYTE*)VAR_7+VAR_8);
            VAR_12 = FUNC_0(VAR_10->LigatureCount);
            FUNC_3("  LigatureSet has %i members\n",VAR_12);
            for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
            {
                const GSUB_Ligature *VAR_13;
                int VAR_14,VAR_15,VAR_16;

                VAR_8 = FUNC_0(VAR_10->Ligature[VAR_11]);
                VAR_13 = (const GSUB_Ligature*)((const BYTE*)VAR_10+VAR_8);
                VAR_14 = FUNC_0(VAR_13->CompCount) - 1;
                VAR_16 = VAR_3+VAR_4;
                for (VAR_15 = 0; VAR_15 < VAR_14 && VAR_16 >= 0 && VAR_16 < *VAR_5; VAR_15++)
                {
                    int VAR_17;
                    VAR_17 = FUNC_0(VAR_13->Component[VAR_15]);
                    if (VAR_17 != VAR_2[VAR_16])
                        break;
                    VAR_16 += VAR_4;
                }
                if (VAR_15 == VAR_14)
                {
                    int VAR_18 = VAR_3;
                    if (VAR_4 < 0)
                        VAR_18 = VAR_3 - VAR_14;

                    FUNC_3("    Glyph is 0x%x (+%i) ->",VAR_2[VAR_3],VAR_14);
                    VAR_2[VAR_18] = FUNC_0(VAR_13->LigGlyph);
                    FUNC_3("0x%x\n",VAR_2[VAR_18]);
                    if (VAR_14 > 0)
                    {
                        unsigned int VAR_19 = VAR_18 + 1;
                        FUNC_4(&VAR_2[VAR_19], &VAR_2[VAR_19 + VAR_14], (*VAR_5 - VAR_19) * sizeof(*VAR_2));
                        *VAR_5 = *VAR_5 - VAR_14;
                    }
                    return VAR_18 + VAR_4;
                }
            }
        }
    }
    return VAR_0;
}
