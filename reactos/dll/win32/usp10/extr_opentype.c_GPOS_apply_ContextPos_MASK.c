
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
struct TYPE_18__ {int PosFormat; int * PosClassSet; int ClassDef; int Coverage; } ;
struct TYPE_17__ {int PosCount; int * Class; int GlyphCount; } ;
struct TYPE_16__ {TYPE_1__* PosLookupRecord; } ;
struct TYPE_15__ {int * PosClassRule; int PosClassRuleCnt; } ;
struct TYPE_14__ {int SubTableCount; } ;
struct TYPE_13__ {int fLogicalOrder; scalar_t__ fRTL; } ;
struct TYPE_12__ {int SequenceIndex; int LookupListIndex; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef int OUTLINETEXTMETRICW ;
typedef TYPE_3__ OT_LookupTable ;
typedef int OT_LookupList ;
typedef int LOGFONTW ;
typedef TYPE_4__ GPOS_PosClassSet ;
typedef TYPE_5__ GPOS_PosClassRule_2 ;
typedef TYPE_6__ GPOS_PosClassRule_1 ;
typedef TYPE_7__ GPOS_ContextPosFormat2 ;
typedef int GOFFSET ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*,int const*,TYPE_2__ const*,int*,int const*,unsigned int,int const*,unsigned int,unsigned int,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*,int) ;
 int FUNC_4 (int const*,int const) ;
 int FUNC_5 (void const*,int const) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_8(const ScriptCache *VAR_0, const OUTLINETEXTMETRICW *VAR_1,
        const LOGFONTW *VAR_2, const SCRIPT_ANALYSIS *VAR_3, int *VAR_4, const OT_LookupList *VAR_5,
        const OT_LookupTable *VAR_6, const WORD *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        GOFFSET *VAR_10)
{
    int VAR_11;
    int VAR_12 = (VAR_3->fRTL && !VAR_3->fLogicalOrder) ? -1 : 1;

    FUNC_6("Contextual Positioning Subtable\n");

    for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6->SubTableCount); VAR_11++)
    {
        const GPOS_ContextPosFormat2 *VAR_13 = (GPOS_ContextPosFormat2*)FUNC_3(VAR_6, VAR_11);

        if (FUNC_1(VAR_13->PosFormat) == 1)
        {
            static int VAR_14;
            if (!VAR_14++)
                FUNC_0("  TODO: subtype 1\n");
            continue;
        }
        else if (FUNC_1(VAR_13->PosFormat) == 2)
        {
            WORD VAR_15 = FUNC_1(VAR_13->Coverage);
            int VAR_16;

            FUNC_6("Contextual Positioning Subtable: Format 2\n");

            VAR_16 = FUNC_4((const BYTE*)VAR_13+VAR_15, VAR_7[VAR_8]);
            FUNC_6("Coverage index %i\n",VAR_16);
            if (VAR_16 != -1)
            {
                int VAR_17, VAR_18, VAR_19;
                const GPOS_PosClassSet *VAR_20;
                const void *VAR_21 = ((void*)0);

                VAR_15 = FUNC_1(VAR_13->ClassDef);
                VAR_21 = (const BYTE *)VAR_13 + VAR_15;

                VAR_19 = FUNC_5(VAR_21,VAR_7[VAR_8]);

                VAR_15 = FUNC_1(VAR_13->PosClassSet[VAR_19]);
                if (VAR_15 == 0)
                {
                    FUNC_6("No class rule table for class %i\n",VAR_19);
                    continue;
                }
                VAR_20 = (const GPOS_PosClassSet*)((const BYTE*)VAR_13+VAR_15);
                VAR_18 = FUNC_1(VAR_20->PosClassRuleCnt);
                FUNC_6("PosClassSet has %i members\n",VAR_18);
                for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
                {
                    const GPOS_PosClassRule_1 *VAR_22;
                    const GPOS_PosClassRule_2 *VAR_23;
                    unsigned int VAR_24;
                    int VAR_25, VAR_26;

                    VAR_15 = FUNC_1(VAR_20->PosClassRule[VAR_17]);
                    VAR_22 = (const GPOS_PosClassRule_1*)((const BYTE*)VAR_20+VAR_15);
                    VAR_25 = FUNC_1(VAR_22->GlyphCount);
                    FUNC_6("PosClassRule has %i glyphs classes\n",VAR_25);

                    VAR_24 = VAR_8 + VAR_12 * (VAR_25 - 1);
                    if (VAR_24 >= VAR_9)
                        continue;

                    for (VAR_26 = 0; VAR_26 < VAR_25-1; VAR_26++)
                    {
                        int VAR_27 = FUNC_5(VAR_21, VAR_7[VAR_8 + (VAR_12 * (VAR_26+1))]);
                        if (VAR_27 != FUNC_1(VAR_22->Class[VAR_26])) break;
                    }

                    if (VAR_26 < VAR_25-1)
                    {
                        FUNC_6("Rule does not match\n");
                        continue;
                    }

                    FUNC_6("Rule matches\n");
                    VAR_23 = (const GPOS_PosClassRule_2 *)&VAR_22->Class[VAR_25 - 1];

                    for (VAR_26 = 0; VAR_26 < FUNC_1(VAR_22->PosCount); VAR_26++)
                    {
                        unsigned int VAR_28 = FUNC_1(VAR_23->PosLookupRecord[VAR_26].LookupListIndex);
                        unsigned int VAR_29 = FUNC_1(VAR_23->PosLookupRecord[VAR_26].SequenceIndex);

                        VAR_24 = VAR_8 + VAR_12 * VAR_29;
                        if (VAR_24 >= VAR_9)
                        {
                            FUNC_7("Invalid sequence index %u (glyph index %u, write dir %d).\n",
                                    VAR_29, VAR_8, VAR_12);
                            continue;
                        }

                        FUNC_6("Position: %u -> %u %u.\n", VAR_26, VAR_29, VAR_28);

                        FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
                                VAR_5, VAR_28, VAR_7, VAR_24, VAR_9, VAR_10);
                    }
                    return 1;
                }
            }

            FUNC_6("Not covered\n");
            continue;
        }
        else if (FUNC_1(VAR_13->PosFormat) == 3)
        {
            static int VAR_30;
            if (!VAR_30++)
                FUNC_0("  TODO: subtype 3\n");
            continue;
        }
        else
            FUNC_0("Unhandled Contextual Positioning Format %i\n",FUNC_1(VAR_13->PosFormat));
    }
    return 1;
}
