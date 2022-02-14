
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_9__ {int nGroups; int groups; } ;
struct TYPE_8__ {int startGlyphID; int startCharCode; } ;
struct TYPE_7__ {scalar_t__ CMAP_format12_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int HDC ;
typedef int DWORD ;
typedef TYPE_2__ CMAP_SegmentedCoverage_group ;
typedef TYPE_3__ CMAP_SegmentedCoverage ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int,int*,int) ;
 TYPE_2__* FUNC_2 (int*,int ,int,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

DWORD FUNC_4(HDC VAR_2, ScriptCache *VAR_3, DWORD VAR_4, WORD *VAR_5, DWORD VAR_6)
{

    if (VAR_4 < 0x10000)
    {
        WCHAR VAR_7 = VAR_4;
        return FUNC_1(VAR_2, &VAR_7, 1, VAR_5, VAR_6);
    }

    if (!VAR_3->CMAP_format12_Table)
        VAR_3->CMAP_format12_Table = FUNC_3(VAR_2, VAR_3);

    if (VAR_6 & VAR_0)
        *VAR_5 = 0xffffu;
    else
        *VAR_5 = 0u;

    if (VAR_3->CMAP_format12_Table)
    {
        CMAP_SegmentedCoverage *VAR_8 = ((void*)0);
        CMAP_SegmentedCoverage_group *VAR_9 = ((void*)0);

        VAR_8 = (CMAP_SegmentedCoverage *)VAR_3->CMAP_format12_Table;

        VAR_9 = FUNC_2(&VAR_4, VAR_8->groups, FUNC_0(VAR_8->nGroups),
                        sizeof(CMAP_SegmentedCoverage_group), VAR_1);

        if (VAR_9)
        {
            DWORD VAR_10 = VAR_4 - FUNC_0(VAR_9->startCharCode);
            *VAR_5 = FUNC_0(VAR_9->startGlyphID) + VAR_10;
            return 0;
        }
    }
    return 0;
}
