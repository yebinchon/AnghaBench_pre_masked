
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_13__ {scalar_t__ fRTL; } ;
struct TYPE_18__ {TYPE_1__ a; } ;
struct TYPE_17__ {size_t eScript; int fRTL; int fLogicalOrder; } ;
struct TYPE_16__ {int GSUB_Table; } ;
struct TYPE_15__ {int cotfRecords; TYPE_2__* potfRecords; } ;
struct TYPE_14__ {scalar_t__ lParameter; int tagFeature; } ;
typedef TYPE_3__ TEXTRANGE_PROPERTIES ;
typedef TYPE_4__ ScriptCache ;
typedef TYPE_5__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_5__*,TYPE_4__*,int *,int,int*,int,char const*,int *) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 TYPE_6__* VAR_0 ;

__attribute__((used)) static void FUNC_2(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WORD* VAR_4, INT* VAR_5, INT VAR_6, INT VAR_7, const TEXTRANGE_PROPERTIES *VAR_8, WORD *VAR_9)
{
    int VAR_10;
    INT VAR_11;

    if (!VAR_8)
        return;

    FUNC_1(VAR_1, VAR_2);

    if (!VAR_2->GSUB_Table)
        return;

    if (VAR_0[VAR_3->eScript].a.fRTL && (!VAR_3->fLogicalOrder || !VAR_3->fRTL))
        VAR_11 = -1;
    else
        VAR_11 = 1;

    for (VAR_10 = 0; VAR_10 < VAR_8->cotfRecords; VAR_10++)
    {
        if (VAR_8->potfRecords[VAR_10].lParameter > 0)
        FUNC_0(VAR_1, VAR_3, VAR_2, VAR_4, VAR_11, VAR_5, VAR_7, (const char*)&VAR_8->potfRecords[VAR_10].tagFeature, VAR_9);
    }
}
