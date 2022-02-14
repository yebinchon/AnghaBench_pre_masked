
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_18__ {int PosFormat; int * Coverage; int BacktrackGlyphCount; } ;
struct TYPE_17__ {int * Coverage; int InputGlyphCount; } ;
struct TYPE_16__ {int * Coverage; int LookaheadGlyphCount; } ;
struct TYPE_15__ {TYPE_1__* PosLookupRecord; int PosCount; } ;
struct TYPE_14__ {int SubTableCount; } ;
struct TYPE_13__ {int fLogicalOrder; scalar_t__ fRTL; } ;
struct TYPE_12__ {int SequenceIndex; int LookupListIndex; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef int OUTLINETEXTMETRICW ;
typedef TYPE_3__ OT_LookupTable ;
typedef int OT_LookupList ;
typedef int LOGFONTW ;
typedef TYPE_4__ GPOS_ChainContextPosFormat3_4 ;
typedef TYPE_5__ GPOS_ChainContextPosFormat3_3 ;
typedef TYPE_6__ GPOS_ChainContextPosFormat3_2 ;
typedef TYPE_7__ GPOS_ChainContextPosFormat3_1 ;
typedef int GOFFSET ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*,int const*,TYPE_2__ const*,int*,int const*,unsigned int,int const*,unsigned int,unsigned int,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*,int) ;
 int FUNC_4 (int const*,int const) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_7(const ScriptCache *VAR_0, const OUTLINETEXTMETRICW *VAR_1,
        const LOGFONTW *VAR_2, const SCRIPT_ANALYSIS *VAR_3, int *VAR_4, const OT_LookupList *VAR_5,
        const OT_LookupTable *VAR_6, const WORD *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        GOFFSET *VAR_10)
{
    int VAR_11;
    int VAR_12 = (VAR_3->fRTL && !VAR_3->fLogicalOrder) ? -1 : 1;

    FUNC_5("Chaining Contextual Positioning Subtable\n");

    for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6->SubTableCount); VAR_11++)
    {
        int VAR_13;
        const GPOS_ChainContextPosFormat3_1 *VAR_14 = (GPOS_ChainContextPosFormat3_1 *)FUNC_3(VAR_6, VAR_11);
        int VAR_15 = VAR_12;
        int VAR_16 = -1 * VAR_12;

        if (FUNC_1(VAR_14->PosFormat) == 1)
        {
            static int VAR_17;
            if (!VAR_17++)
                FUNC_0("  TODO: subtype 1 (Simple Chaining Context Glyph Positioning)\n");
            continue;
        }
        else if (FUNC_1(VAR_14->PosFormat) == 2)
        {
            static int VAR_18;
            if (!VAR_18++)
                FUNC_0("  TODO: subtype 2 (Class-based Chaining Context Glyph Positioning)\n");
            continue;
        }
        else if (FUNC_1(VAR_14->PosFormat) == 3)
        {
            WORD VAR_19, VAR_20, VAR_21, VAR_22;
            int VAR_23;
            const GPOS_ChainContextPosFormat3_2 *VAR_24;
            const GPOS_ChainContextPosFormat3_3 *VAR_25;
            const GPOS_ChainContextPosFormat3_4 *VAR_26;

            FUNC_5("  subtype 3 (Coverage-based Chaining Context Glyph Positioning)\n");

            VAR_19 = FUNC_1(VAR_14->BacktrackGlyphCount);
            VAR_23 = VAR_8 + VAR_16 * VAR_19;
            if (VAR_23 < 0 || VAR_23 >= VAR_9)
                continue;

            VAR_24 = (const GPOS_ChainContextPosFormat3_2 *)&VAR_14->Coverage[VAR_19];
            VAR_20 = FUNC_1(VAR_24->InputGlyphCount);
            VAR_23 = VAR_8 + VAR_12 * (VAR_20 - 1);
            if (VAR_23 < 0 || VAR_23 >= VAR_9)
                continue;

            VAR_25 = (const GPOS_ChainContextPosFormat3_3 *)&VAR_24->Coverage[VAR_20];
            VAR_21 = FUNC_1(VAR_25->LookaheadGlyphCount);
            VAR_23 = VAR_8 + VAR_15 * (VAR_20 + VAR_21 - 1);
            if (VAR_23 < 0 || VAR_23 >= VAR_9)
                continue;

            VAR_26 = (const GPOS_ChainContextPosFormat3_4 *)&VAR_25->Coverage[VAR_21];

            for (VAR_23 = 0; VAR_23 < VAR_19; ++VAR_23)
            {
                VAR_13 = FUNC_1(VAR_14->Coverage[VAR_23]);
                if (FUNC_4((const BYTE *)VAR_14 + VAR_13,
                        VAR_7[VAR_8 + (VAR_16 * (VAR_23 + 1))]) == -1)
                    break;
            }
            if (VAR_23 != VAR_19)
                continue;
            FUNC_5("Matched Backtrack\n");

            for (VAR_23 = 0; VAR_23 < VAR_20; ++VAR_23)
            {
                VAR_13 = FUNC_1(VAR_24->Coverage[VAR_23]);
                if (FUNC_4((const BYTE *)VAR_14 + VAR_13,
                        VAR_7[VAR_8 + (VAR_12 * VAR_23)]) == -1)
                    break;
            }
            if (VAR_23 != VAR_20)
                continue;
            FUNC_5("Matched IndexGlyphs\n");

            for (VAR_23 = 0; VAR_23 < VAR_21; ++VAR_23)
            {
                VAR_13 = FUNC_1(VAR_25->Coverage[VAR_23]);
                if (FUNC_4((const BYTE *)VAR_14 + VAR_13,
                        VAR_7[VAR_8 + (VAR_15 * (VAR_20 + VAR_23))]) == -1)
                    break;
            }
            if (VAR_23 != VAR_21)
                continue;
            FUNC_5("Matched LookAhead\n");

            if (!(VAR_22 = FUNC_1(VAR_26->PosCount)))
                return 1;

            for (VAR_23 = 0; VAR_23 < VAR_22; ++VAR_23)
            {
                unsigned int VAR_27 = FUNC_1(VAR_26->PosLookupRecord[VAR_23].LookupListIndex);
                unsigned int VAR_28 = FUNC_1(VAR_26->PosLookupRecord[VAR_23].SequenceIndex);
                unsigned int VAR_29 = VAR_8 + VAR_12 * VAR_28;

                if (VAR_29 >= VAR_9)
                {
                    FUNC_6("Skipping invalid sequence index %u (glyph index %u, write dir %d).\n",
                            VAR_28, VAR_8, VAR_12);
                    continue;
                }

                FUNC_5("Position: %u -> %u %u.\n", VAR_23, VAR_28, VAR_27);
                FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_27,
                        VAR_7, VAR_29, VAR_9, VAR_10);
            }
            return VAR_20 + VAR_21;
        }
        else
            FUNC_0("Unhandled Chaining Contextual Positioning Format %#x.\n", FUNC_1(VAR_14->PosFormat));
    }
    return 1;
}
