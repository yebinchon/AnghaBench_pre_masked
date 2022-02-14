
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_25__ {int GlyphClassDef; } ;
struct TYPE_24__ {int * BaseAnchor; } ;
struct TYPE_23__ {TYPE_5__* MarkRecord; int MarkCount; } ;
struct TYPE_22__ {int PosFormat; int BaseArray; int MarkArray; int ClassCount; int BaseCoverage; int MarkCoverage; } ;
struct TYPE_21__ {int MarkAnchor; int Class; } ;
struct TYPE_20__ {int SubTableCount; } ;
struct TYPE_19__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_18__ {int fLogicalOrder; scalar_t__ fRTL; } ;
struct TYPE_17__ {TYPE_9__* GDEF_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef TYPE_3__ POINT ;
typedef TYPE_4__ OT_LookupTable ;
typedef TYPE_5__ GPOS_MarkRecord ;
typedef TYPE_6__ GPOS_MarkBasePosFormat1 ;
typedef TYPE_7__ GPOS_MarkArray ;
typedef TYPE_8__ GPOS_BaseRecord ;
typedef int GPOS_BaseArray ;
typedef TYPE_9__ GDEF_Header ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_4__ const*,int) ;
 int FUNC_5 (int const*,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (void const*,int const) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(const ScriptCache *VAR_1, const OT_LookupTable *VAR_2,
        const SCRIPT_ANALYSIS *VAR_3, const WORD *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6, unsigned int VAR_7, POINT *VAR_8)
{
    int VAR_9;
    int VAR_10 = (VAR_3->fRTL && !VAR_3->fLogicalOrder) ? -1 : 1;
    const void *VAR_11 = ((void*)0);
    int VAR_12 = -1;

    if (VAR_1->GDEF_Table)
    {
        const GDEF_Header *VAR_13 = VAR_1->GDEF_Table;
        WORD VAR_14 = FUNC_2( VAR_13->GlyphClassDef );
        if (VAR_14)
            VAR_11 = (const BYTE *)VAR_1->GDEF_Table + VAR_14;
    }

    FUNC_7("MarkToBase Attachment Positioning Subtable\n");

    for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_2->SubTableCount); VAR_9++)
    {
        const GPOS_MarkBasePosFormat1 *VAR_15 = (const GPOS_MarkBasePosFormat1 *)FUNC_4(VAR_2, VAR_9);
        if (FUNC_2(VAR_15->PosFormat) == 1)
        {
            int VAR_16 = FUNC_2(VAR_15->MarkCoverage);
            int VAR_17;
            VAR_17 = FUNC_5((const BYTE*)VAR_15+VAR_16, VAR_4[VAR_5]);
            if (VAR_17 != -1)
            {
                int VAR_18;
                int VAR_19 = VAR_5 - VAR_10;

                if (VAR_11)
                {
                    while (FUNC_6(VAR_11, VAR_4[VAR_19]) == VAR_0 && VAR_19 > 0 && VAR_19 < VAR_6)
                        VAR_19 -= VAR_10;
                }

                VAR_16 = FUNC_2(VAR_15->BaseCoverage);
                VAR_18 = FUNC_5((const BYTE*)VAR_15+VAR_16, VAR_4[VAR_19]);
                if (VAR_18 != -1)
                {
                    const GPOS_MarkArray *VAR_20;
                    const GPOS_MarkRecord *VAR_21;
                    const GPOS_BaseArray *VAR_22;
                    const GPOS_BaseRecord *VAR_23;
                    int VAR_24;
                    int VAR_25 = FUNC_2(VAR_15->ClassCount);
                    int VAR_26;
                    POINT VAR_27;
                    POINT VAR_28;
                    FUNC_7("Mark %x(%i) and base %x(%i)\n",VAR_4[VAR_5], VAR_17, VAR_4[VAR_19], VAR_18);
                    VAR_16 = FUNC_2(VAR_15->MarkArray);
                    VAR_20 = (const GPOS_MarkArray*)((const BYTE*)VAR_15 + VAR_16);
                    if (VAR_17 > FUNC_2(VAR_20->MarkCount))
                    {
                        FUNC_0("Mark index exceeded mark count\n");
                        return -1;
                    }
                    VAR_21 = &VAR_20->MarkRecord[VAR_17];
                    VAR_24 = FUNC_2(VAR_21->Class);
                    FUNC_7("Mark Class %i total classes %i\n",VAR_24,VAR_25);
                    VAR_16 = FUNC_2(VAR_15->BaseArray);
                    VAR_22 = (const GPOS_BaseArray*)((const BYTE*)VAR_15 + VAR_16);
                    VAR_26 = VAR_25 * sizeof(WORD);
                    VAR_23 = (const GPOS_BaseRecord*)((const BYTE*)VAR_22 + sizeof(WORD) + (VAR_26 * VAR_18));
                    VAR_16 = FUNC_2(VAR_23->BaseAnchor[VAR_24]);
                    FUNC_3((const BYTE*)VAR_22 + VAR_16, &VAR_27, VAR_7);
                    VAR_16 = FUNC_2(VAR_21->MarkAnchor);
                    FUNC_3((const BYTE*)VAR_20 + VAR_16, &VAR_28, VAR_7);
                    FUNC_7("Offset on base is %s design units\n",FUNC_8(&VAR_27));
                    FUNC_7("Offset on mark is %s design units\n",FUNC_8(&VAR_28));
                    VAR_8->x += VAR_27.x - VAR_28.x;
                    VAR_8->y += VAR_27.y - VAR_28.y;
                    FUNC_7("Resulting cumulative offset is %s design units\n",FUNC_8(VAR_8));
                    VAR_12 = VAR_19;
                }
            }
        }
        else
            FUNC_1("Unhandled Mark To Base Format %i\n",FUNC_2(VAR_15->PosFormat));
    }
    return VAR_12;
}
