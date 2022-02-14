
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_20__ {int * Mark2Anchor; } ;
struct TYPE_19__ {TYPE_4__* MarkRecord; int MarkCount; } ;
struct TYPE_18__ {int PosFormat; int Mark2Array; int Mark1Array; int ClassCount; int Mark2Coverage; int Mark1Coverage; } ;
struct TYPE_17__ {int MarkAnchor; int Class; } ;
struct TYPE_16__ {int SubTableCount; } ;
struct TYPE_15__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {int fLogicalOrder; scalar_t__ fRTL; } ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ OT_LookupTable ;
typedef TYPE_4__ GPOS_MarkRecord ;
typedef TYPE_5__ GPOS_MarkMarkPosFormat1 ;
typedef TYPE_6__ GPOS_MarkArray ;
typedef TYPE_7__ GPOS_Mark2Record ;
typedef int GPOS_Mark2Array ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int) ;
 int FUNC_5 (int const*,int const) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static BOOL FUNC_8(const OT_LookupTable *VAR_2, const SCRIPT_ANALYSIS *VAR_3,
        const WORD *VAR_4, unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7, POINT *VAR_8)
{
    int VAR_9;
    BOOL VAR_10 = VAR_0;
    int VAR_11 = (VAR_3->fRTL && !VAR_3->fLogicalOrder) ? -1 : 1;

    FUNC_6("MarkToMark Attachment Positioning Subtable\n");

    for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_2->SubTableCount); VAR_9++)
    {
        const GPOS_MarkMarkPosFormat1 *VAR_12 = (const GPOS_MarkMarkPosFormat1 *)FUNC_4(VAR_2, VAR_9);
        if (FUNC_2(VAR_12->PosFormat) == 1)
        {
            int VAR_13 = FUNC_2(VAR_12->Mark1Coverage);
            int VAR_14;
            VAR_14 = FUNC_5((const BYTE*)VAR_12+VAR_13, VAR_4[VAR_5]);
            if (VAR_14 != -1)
            {
                int VAR_15;
                VAR_13 = FUNC_2(VAR_12->Mark2Coverage);
                VAR_15 = FUNC_5((const BYTE*)VAR_12+VAR_13, VAR_4[VAR_5 - VAR_11]);
                if (VAR_15 != -1)
                {
                    const GPOS_MarkArray *VAR_16;
                    const GPOS_MarkRecord *VAR_17;
                    const GPOS_Mark2Array *VAR_18;
                    const GPOS_Mark2Record *VAR_19;
                    int VAR_20;
                    int VAR_21 = FUNC_2(VAR_12->ClassCount);
                    int VAR_22;
                    POINT VAR_23;
                    POINT VAR_24;
                    FUNC_6("Mark %x(%i) and Mark2 %x(%i)\n",VAR_4[VAR_5], VAR_14, VAR_4[VAR_5 - VAR_11], VAR_15);
                    VAR_13 = FUNC_2(VAR_12->Mark1Array);
                    VAR_16 = (const GPOS_MarkArray*)((const BYTE*)VAR_12 + VAR_13);
                    if (VAR_14 > FUNC_2(VAR_16->MarkCount))
                    {
                        FUNC_0("Mark index exceeded mark count\n");
                        return VAR_0;
                    }
                    VAR_17 = &VAR_16->MarkRecord[VAR_14];
                    VAR_20 = FUNC_2(VAR_17->Class);
                    FUNC_6("Mark Class %i total classes %i\n",VAR_20,VAR_21);
                    VAR_13 = FUNC_2(VAR_12->Mark2Array);
                    VAR_18 = (const GPOS_Mark2Array*)((const BYTE*)VAR_12 + VAR_13);
                    VAR_22 = VAR_21 * sizeof(WORD);
                    VAR_19 = (const GPOS_Mark2Record*)((const BYTE*)VAR_18 + sizeof(WORD) + (VAR_22 * VAR_15));
                    VAR_13 = FUNC_2(VAR_19->Mark2Anchor[VAR_20]);
                    FUNC_3((const BYTE*)VAR_18 + VAR_13, &VAR_23, VAR_7);
                    VAR_13 = FUNC_2(VAR_17->MarkAnchor);
                    FUNC_3((const BYTE*)VAR_16 + VAR_13, &VAR_24, VAR_7);
                    FUNC_6("Offset on mark2 is %s design units\n",FUNC_7(&VAR_23));
                    FUNC_6("Offset on mark is %s design units\n",FUNC_7(&VAR_24));
                    VAR_8->x += VAR_23.x - VAR_24.x;
                    VAR_8->y += VAR_23.y - VAR_24.y;
                    FUNC_6("Resulting cumulative offset is %s design units\n",FUNC_7(VAR_8));
                    VAR_10 = VAR_1;
                }
            }
        }
        else
            FUNC_1("Unhandled Mark To Mark Format %i\n",FUNC_2(VAR_12->PosFormat));
    }
    return VAR_10;
}
