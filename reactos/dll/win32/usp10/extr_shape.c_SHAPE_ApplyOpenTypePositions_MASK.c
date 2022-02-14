
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_14__ {int cotfRecords; TYPE_1__* potfRecords; } ;
struct TYPE_17__ {TYPE_2__ defaultGPOSTextRange; } ;
struct TYPE_16__ {size_t eScript; } ;
struct TYPE_15__ {int lf; int otm; int GPOS_Table; } ;
struct TYPE_13__ {scalar_t__ lParameter; int tagFeature; } ;
typedef TYPE_2__ TEXTRANGE_PROPERTIES ;
typedef TYPE_3__ ScriptCache ;
typedef TYPE_4__ SCRIPT_ANALYSIS ;
typedef int LoadedFeature ;
typedef int INT ;
typedef int HDC ;
typedef int GOFFSET ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int *,TYPE_4__*,int*,int *,int const*,int ,int *) ;
 TYPE_8__* VAR_1 ;
 int * FUNC_1 (int ,TYPE_4__*,TYPE_3__*,int ,char const*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3(HDC VAR_2, ScriptCache *VAR_3, SCRIPT_ANALYSIS *VAR_4, const WORD* VAR_5, INT VAR_6, int *VAR_7, GOFFSET *VAR_8 )
{
    const TEXTRANGE_PROPERTIES *VAR_9 = &VAR_1[VAR_4->eScript].defaultGPOSTextRange;
    int VAR_10;

    FUNC_2(VAR_2, VAR_3);

    if (!VAR_3->GPOS_Table || !VAR_3->otm)
        return;

    for (VAR_10 = 0; VAR_10 < VAR_9->cotfRecords; VAR_10++)
    {
        if (VAR_9->potfRecords[VAR_10].lParameter > 0)
        {
            LoadedFeature *VAR_11;

            VAR_11 = FUNC_1(VAR_2, VAR_4, VAR_3, VAR_0, (const char*)&VAR_9->potfRecords[VAR_10].tagFeature);
            if (!VAR_11)
                continue;

            FUNC_0(VAR_3, VAR_3->otm, &VAR_3->lf, VAR_4, VAR_7, VAR_11, VAR_5, VAR_6, VAR_8);
        }
    }
}
