
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_16__ {scalar_t__ PosFormat; scalar_t__ Coverage; TYPE_1__* EntryExitRecord; } ;
struct TYPE_15__ {scalar_t__ SubTableCount; } ;
struct TYPE_14__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {int fLogicalOrder; scalar_t__ fRTL; } ;
struct TYPE_12__ {scalar_t__ ExitAnchor; scalar_t__ EntryAnchor; } ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef TYPE_3__ POINT ;
typedef TYPE_4__ OT_LookupTable ;
typedef TYPE_5__ GPOS_CursivePosFormat1 ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const*,TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*,int) ;
 int FUNC_4 (int const*,int const) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(const OT_LookupTable *VAR_0, const SCRIPT_ANALYSIS *VAR_1,
        const WORD *VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, POINT *VAR_6)
{
    int VAR_7;
    int VAR_8 = (VAR_1->fRTL && !VAR_1->fLogicalOrder) ? -1 : 1;

    if (VAR_3 + VAR_8 >= VAR_4)
        return;

    FUNC_5("Cursive Attachment Positioning Subtable\n");

    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_0->SubTableCount); VAR_7++)
    {
        const GPOS_CursivePosFormat1 *VAR_9 = (const GPOS_CursivePosFormat1 *)FUNC_3(VAR_0, VAR_7);
        if (FUNC_1(VAR_9->PosFormat) == 1)
        {
            int VAR_10, VAR_11;
            WORD VAR_12 = FUNC_1( VAR_9->Coverage );
            VAR_10 = FUNC_4((const BYTE*)VAR_9+VAR_12, VAR_2[VAR_3]);
            if (VAR_10 != -1 && VAR_9->EntryExitRecord[VAR_10].ExitAnchor!= 0)
            {
                VAR_11 = FUNC_4((const BYTE*)VAR_9+VAR_12, VAR_2[VAR_3+VAR_8]);
                if (VAR_11 != -1 && VAR_9->EntryExitRecord[VAR_11].EntryAnchor != 0)
                {
                    POINT VAR_13, VAR_14;
                    VAR_12 = FUNC_1(VAR_9->EntryExitRecord[VAR_10].ExitAnchor);
                    FUNC_2((const BYTE*)VAR_9 + VAR_12, &VAR_13, VAR_5);
                    VAR_12 = FUNC_1(VAR_9->EntryExitRecord[VAR_11].EntryAnchor);
                    FUNC_2((const BYTE*)VAR_9 + VAR_12, &VAR_14, VAR_5);
                    FUNC_5("Found linkage %x[%s] %x[%s]\n",VAR_2[VAR_3], FUNC_6(&VAR_13), VAR_2[VAR_3+VAR_8], FUNC_6(&VAR_14));
                    VAR_6->x = VAR_14.x - VAR_13.x;
                    VAR_6->y = VAR_14.y - VAR_13.y;
                    return;
                }
            }
        }
        else
            FUNC_0("Cursive Attachment Positioning: Format %i Unhandled\n",FUNC_1(VAR_9->PosFormat));
    }
    return;
}
