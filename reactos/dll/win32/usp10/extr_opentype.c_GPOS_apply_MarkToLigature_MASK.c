
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


typedef int WORD ;
struct TYPE_24__ {int * LigatureAnchor; } ;
struct TYPE_23__ {int * LigatureAttach; int LigatureCount; } ;
struct TYPE_22__ {scalar_t__ ComponentRecord; int ComponentCount; } ;
struct TYPE_21__ {TYPE_4__* MarkRecord; int MarkCount; } ;
struct TYPE_20__ {int PosFormat; int LigatureArray; int MarkArray; int ClassCount; int LigatureCoverage; int MarkCoverage; } ;
struct TYPE_19__ {int MarkAnchor; int Class; } ;
struct TYPE_18__ {int SubTableCount; } ;
struct TYPE_17__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_16__ {int fLogicalOrder; scalar_t__ fRTL; } ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ OT_LookupTable ;
typedef TYPE_4__ GPOS_MarkRecord ;
typedef TYPE_5__ GPOS_MarkLigPosFormat1 ;
typedef TYPE_6__ GPOS_MarkArray ;
typedef TYPE_7__ GPOS_LigatureAttach ;
typedef TYPE_8__ GPOS_LigatureArray ;
typedef TYPE_9__ GPOS_ComponentRecord ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int) ;
 int FUNC_5 (int const*,int const) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(const OT_LookupTable *VAR_0, const SCRIPT_ANALYSIS *VAR_1,
        const WORD *VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, POINT *VAR_6)
{
    int VAR_7;
    int VAR_8 = (VAR_1->fRTL && !VAR_1->fLogicalOrder) ? -1 : 1;

    FUNC_6("MarkToLigature Attachment Positioning Subtable\n");

    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_0->SubTableCount); VAR_7++)
    {
        const GPOS_MarkLigPosFormat1 *VAR_9 = (const GPOS_MarkLigPosFormat1 *)FUNC_4(VAR_0, VAR_7);
        if (FUNC_2(VAR_9->PosFormat) == 1)
        {
            int VAR_10 = FUNC_2(VAR_9->MarkCoverage);
            int VAR_11;
            VAR_11 = FUNC_5((const BYTE*)VAR_9+VAR_10, VAR_2[VAR_3]);
            if (VAR_11 != -1)
            {
                int VAR_12;
                VAR_10 = FUNC_2(VAR_9->LigatureCoverage);
                VAR_12 = FUNC_5((const BYTE*)VAR_9+VAR_10, VAR_2[VAR_3 - VAR_8]);
                if (VAR_12 != -1)
                {
                    const GPOS_MarkArray *VAR_13;
                    const GPOS_MarkRecord *VAR_14;

                    const GPOS_LigatureArray *VAR_15;
                    const GPOS_LigatureAttach *VAR_16;
                    int VAR_17;
                    int VAR_18 = FUNC_2(VAR_9->ClassCount);
                    int VAR_19;
                    int VAR_20;
                    int VAR_21;
                    POINT VAR_22;
                    POINT VAR_23;

                    FUNC_6("Mark %x(%i) and ligature %x(%i)\n",VAR_2[VAR_3], VAR_11, VAR_2[VAR_3 - VAR_8], VAR_12);
                    VAR_10 = FUNC_2(VAR_9->MarkArray);
                    VAR_13 = (const GPOS_MarkArray*)((const BYTE*)VAR_9 + VAR_10);
                    if (VAR_11 > FUNC_2(VAR_13->MarkCount))
                    {
                        FUNC_0("Mark index exceeded mark count\n");
                        return;
                    }
                    VAR_14 = &VAR_13->MarkRecord[VAR_11];
                    VAR_17 = FUNC_2(VAR_14->Class);
                    FUNC_6("Mark Class %i total classes %i\n",VAR_17,VAR_18);
                    VAR_10 = FUNC_2(VAR_9->LigatureArray);
                    VAR_15 = (const GPOS_LigatureArray*)((const BYTE*)VAR_9 + VAR_10);
                    if (VAR_12 > FUNC_2(VAR_15->LigatureCount))
                    {
                        FUNC_0("Ligature index exceeded ligature count\n");
                        return;
                    }
                    VAR_10 = FUNC_2(VAR_15->LigatureAttach[VAR_12]);
                    VAR_16 = (const GPOS_LigatureAttach*)((const BYTE*)VAR_15 + VAR_10);

                    VAR_19 = FUNC_2(VAR_16->ComponentCount);
                    VAR_20 = VAR_18 * sizeof(WORD);
                    VAR_10 = 0;
                    for (VAR_21 = 0; VAR_21 < VAR_19 && !VAR_10; VAR_21++)
                    {
                        int VAR_24;
                        const GPOS_ComponentRecord *VAR_25 = (const GPOS_ComponentRecord*)((const BYTE*)VAR_16->ComponentRecord + (VAR_20 * VAR_21));
                        for (VAR_24 = 0; VAR_24 < VAR_18 && !VAR_10; VAR_24++)
                            VAR_10 = FUNC_2(VAR_25->LigatureAnchor[VAR_24]);
                        VAR_25 = (const GPOS_ComponentRecord*)((const BYTE*)VAR_25 + VAR_20);
                    }
                    if (!VAR_10)
                    {
                        FUNC_0("Failed to find available ligature connection point\n");
                        return;
                    }

                    FUNC_3((const BYTE*)VAR_16 + VAR_10, &VAR_22, VAR_5);
                    VAR_10 = FUNC_2(VAR_14->MarkAnchor);
                    FUNC_3((const BYTE*)VAR_13 + VAR_10, &VAR_23, VAR_5);
                    FUNC_6("Offset on ligature is %s design units\n",FUNC_7(&VAR_22));
                    FUNC_6("Offset on mark is %s design units\n",FUNC_7(&VAR_23));
                    VAR_6->x += VAR_22.x - VAR_23.x;
                    VAR_6->y += VAR_22.y - VAR_23.y;
                    FUNC_6("Resulting cumulative offset is %s design units\n",FUNC_7(VAR_6));
                }
            }
        }
        else
            FUNC_1("Unhandled Mark To Ligature Format %i\n",FUNC_2(VAR_9->PosFormat));
    }
}
