
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int WORD ;
struct TYPE_24__ {int SubstCount; int * Class; int GlyphCount; } ;
struct TYPE_23__ {TYPE_1__* SubstLookupRecord; } ;
struct TYPE_22__ {int * SubClassRule; int SubClassRuleCnt; } ;
struct TYPE_21__ {int * SubRule; int SubRuleCount; } ;
struct TYPE_20__ {int SubstCount; int * Input; int GlyphCount; } ;
struct TYPE_19__ {TYPE_2__* SubstLookupRecord; } ;
struct TYPE_18__ {int SubTableCount; } ;
struct TYPE_17__ {int SequenceIndex; int LookupListIndex; } ;
struct TYPE_16__ {int SequenceIndex; int LookupListIndex; } ;
struct TYPE_15__ {int SubstFormat; int * SubRuleSet; int Coverage; } ;
struct TYPE_14__ {int * SubClassSet; int ClassDef; int Coverage; } ;
typedef TYPE_3__ OT_LookupTable ;
typedef int OT_LookupList ;
typedef size_t INT ;
typedef TYPE_4__ GSUB_SubRule_2 ;
typedef TYPE_5__ GSUB_SubRule_1 ;
typedef TYPE_6__ GSUB_SubRuleSet ;
typedef TYPE_7__ GSUB_SubClassSet ;
typedef TYPE_8__ GSUB_SubClassRule_2 ;
typedef TYPE_9__ GSUB_SubClassRule_1 ;
typedef TYPE_10__ GSUB_ContextSubstFormat2 ;
typedef TYPE_11__ GSUB_ContextSubstFormat1 ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int const*,unsigned int,int*,unsigned int,size_t,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (void const*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,unsigned int,size_t,size_t) ;

__attribute__((used)) static INT FUNC_9(const OT_LookupList* VAR_1, const OT_LookupTable *VAR_2, WORD *VAR_3, INT VAR_4, INT VAR_5, INT *VAR_6)
{
    int VAR_7;
    FUNC_7("Context Substitution Subtable\n");
    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_2->SubTableCount); VAR_7++)
    {
        const GSUB_ContextSubstFormat1 *VAR_8;

        VAR_8 = (const GSUB_ContextSubstFormat1*)FUNC_4(VAR_2, VAR_7);
        if (FUNC_2(VAR_8->SubstFormat) == 1)
        {
            int VAR_9, VAR_10;
            FUNC_7("Context Substitution Subtable: Class 1\n");
            VAR_9 = FUNC_2(VAR_8->Coverage);
            VAR_10 = FUNC_5((const BYTE*)VAR_8+VAR_9, VAR_3[VAR_4]);
            FUNC_7("  Coverage index %i\n",VAR_10);
            if (VAR_10 != -1)
            {
                int VAR_11, VAR_12;
                const GSUB_SubRuleSet *VAR_13;
                VAR_9 = FUNC_2(VAR_8->SubRuleSet[VAR_10]);
                VAR_13 = (const GSUB_SubRuleSet*)((const BYTE*)VAR_8+VAR_9);
                VAR_12 = FUNC_2(VAR_13->SubRuleCount);
                FUNC_7("  SubRuleSet has %i members\n",VAR_12);
                for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                {
                    const GSUB_SubRule_1 *VAR_14;
                    const GSUB_SubRule_2 *VAR_15;
                    unsigned int VAR_16;
                    int VAR_17, VAR_18;
                    int VAR_19 = VAR_4;

                    VAR_9 = FUNC_2(VAR_13->SubRule[VAR_11]);
                    VAR_14 = (const GSUB_SubRule_1*)((const BYTE*)VAR_13+VAR_9);
                    VAR_17 = FUNC_2(VAR_14->GlyphCount);
                    FUNC_7("   SubRule has %i glyphs\n",VAR_17);

                    VAR_16 = VAR_4 + VAR_5 * (VAR_17 - 1);
                    if (VAR_16 >= *VAR_6)
                        continue;

                    for (VAR_18 = 0; VAR_18 < VAR_17-1; VAR_18++)
                        if (VAR_3[VAR_4 + (VAR_5 * (VAR_18+1))] != FUNC_2(VAR_14->Input[VAR_18])) break;

                    if (VAR_18 < VAR_17-1)
                    {
                        FUNC_7("   Rule does not match\n");
                        continue;
                    }

                    FUNC_7("   Rule matches\n");
                    VAR_15 = (const GSUB_SubRule_2 *)&VAR_14->Input[VAR_17 - 1];

                    for (VAR_18 = 0; VAR_18 < FUNC_2(VAR_14->SubstCount); VAR_18++)
                    {
                        unsigned int VAR_20 = FUNC_2(VAR_15->SubstLookupRecord[VAR_18].LookupListIndex);
                        unsigned int VAR_21 = FUNC_2(VAR_15->SubstLookupRecord[VAR_18].SequenceIndex);

                        VAR_16 = VAR_4 + VAR_5 * VAR_21;
                        if (VAR_16 >= *VAR_6)
                        {
                            FUNC_8("Invalid sequence index %u (glyph index %u, write dir %d).\n",
                                    VAR_21, VAR_4, VAR_5);
                            continue;
                        }

                        FUNC_7("   SUBST: %u -> %u %u.\n", VAR_18, VAR_21, VAR_20);
                        VAR_19 = FUNC_3(VAR_1, VAR_20, VAR_3, VAR_16, VAR_5, VAR_6);
                        if (VAR_19 == VAR_0)
                        {
                            FUNC_0("   Chain failed to generate a glyph\n");
                            continue;
                        }
                    }
                    return VAR_19;
                }
            }
        }
        else if (FUNC_2(VAR_8->SubstFormat) == 2)
        {
            const GSUB_ContextSubstFormat2 *VAR_22;
            const void *VAR_23;
            int VAR_24, VAR_25;

            VAR_22 = (const GSUB_ContextSubstFormat2*)VAR_8;
            FUNC_7("Context Substitution Subtable: Class 2\n");
            VAR_24 = FUNC_2(VAR_22->Coverage);
            VAR_25 = FUNC_5((const BYTE*)VAR_22+VAR_24, VAR_3[VAR_4]);
            FUNC_7("  Coverage index %i\n",VAR_25);
            if (VAR_25 != -1)
            {
                int VAR_26, VAR_27, VAR_28;
                const GSUB_SubClassSet *VAR_29;

                VAR_24 = FUNC_2(VAR_22->ClassDef);
                VAR_23 = (const BYTE *)VAR_22 + VAR_24;

                VAR_28 = FUNC_6(VAR_23,VAR_3[VAR_4]);

                VAR_24 = FUNC_2(VAR_22->SubClassSet[VAR_28]);
                if (VAR_24 == 0)
                {
                    FUNC_7("  No class rule table for class %i\n",VAR_28);
                    continue;
                }
                VAR_29 = (const GSUB_SubClassSet*)((const BYTE*)VAR_22+VAR_24);
                VAR_27 = FUNC_2(VAR_29->SubClassRuleCnt);
                FUNC_7("  SubClassSet has %i members\n",VAR_27);
                for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++)
                {
                    const GSUB_SubClassRule_1 *VAR_30;
                    const GSUB_SubClassRule_2 *VAR_31;
                    unsigned int VAR_32;
                    int VAR_33, VAR_34;
                    int VAR_35 = VAR_4;

                    VAR_24 = FUNC_2(VAR_29->SubClassRule[VAR_26]);
                    VAR_30 = (const GSUB_SubClassRule_1*)((const BYTE*)VAR_29+VAR_24);
                    VAR_33 = FUNC_2(VAR_30->GlyphCount);
                    FUNC_7("   SubClassRule has %i glyphs classes\n",VAR_33);

                    VAR_32 = VAR_4 + VAR_5 * (VAR_33 - 1);
                    if (VAR_32 >= *VAR_6)
                        continue;

                    for (VAR_34 = 0; VAR_34 < VAR_33-1; VAR_34++)
                    {
                        int VAR_36 = FUNC_6(VAR_23, VAR_3[VAR_4 + (VAR_5 * (VAR_34+1))]);
                        if (VAR_36 != FUNC_2(VAR_30->Class[VAR_34])) break;
                    }

                    if (VAR_34 < VAR_33-1)
                    {
                        FUNC_7("   Rule does not match\n");
                        continue;
                    }

                    FUNC_7("   Rule matches\n");
                    VAR_31 = (const GSUB_SubClassRule_2 *)&VAR_30->Class[VAR_33 - 1];

                    for (VAR_34 = 0; VAR_34 < FUNC_2(VAR_30->SubstCount); VAR_34++)
                    {
                        unsigned int VAR_37 = FUNC_2(VAR_31->SubstLookupRecord[VAR_34].LookupListIndex);
                        unsigned int VAR_38 = FUNC_2(VAR_31->SubstLookupRecord[VAR_34].SequenceIndex);

                        VAR_32 = VAR_4 + VAR_5 * VAR_38;
                        if (VAR_32 >= *VAR_6)
                        {
                            FUNC_8("Invalid sequence index %u (glyph index %u, write dir %d).\n",
                                    VAR_38, VAR_4, VAR_5);
                            continue;
                        }

                        FUNC_7("   SUBST: %u -> %u %u.\n", VAR_34, VAR_38, VAR_37);
                        VAR_35 = FUNC_3(VAR_1, VAR_37, VAR_3, VAR_32, VAR_5, VAR_6);
                        if (VAR_35 == VAR_0)
                        {
                            FUNC_0("   Chain failed to generate a glyph\n");
                            continue;
                        }
                    }
                    return VAR_35;
                }
            }
        }
        else
            FUNC_1("Unhandled Context Substitution Format %i\n", FUNC_2(VAR_8->SubstFormat));
    }
    return VAR_0;
}
