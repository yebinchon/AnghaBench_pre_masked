
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_13__ {scalar_t__ fRTL; int fLogicalOrder; } ;
struct TYPE_12__ {int fCanGlyphAlone; } ;
struct TYPE_10__ {void* uJustification; scalar_t__ fClusterStart; } ;
struct TYPE_11__ {TYPE_1__ sva; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;
typedef TYPE_3__ SCRIPT_CHARPROP ;
typedef TYPE_4__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int *,int const*,int const,int*,int const,TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int*,int const,int) ;
 int FUNC_2 (int const,int const,int*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( HDC VAR_2, ScriptCache *VAR_3, SCRIPT_ANALYSIS *VAR_4, const WCHAR* VAR_5, const INT VAR_6, const WORD* VAR_7, const INT VAR_8, WORD *VAR_9, SCRIPT_CHARPROP *VAR_10, SCRIPT_GLYPHPROP *VAR_11 )
{
    int VAR_12;
    int VAR_13;
    INT VAR_14;

    if (!VAR_4->fLogicalOrder && VAR_4->fRTL)
    {
        VAR_13 = 0;
        VAR_14 = -1;
    }
    else
    {
        VAR_13 = VAR_8-1;
        VAR_14 = 1;
    }

    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_11);

    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
    {
        int VAR_15;
        int VAR_16[20];
        int VAR_17 = 0;

        VAR_15 = FUNC_1(VAR_9, VAR_6, VAR_12);
        if (VAR_15>=0)
        {
            for (; VAR_15 < VAR_6 && VAR_9[VAR_15] == VAR_12; VAR_15++)
                VAR_16[VAR_17++] = VAR_15;
        }

        if (VAR_12 == VAR_13)
            VAR_11[VAR_12].sva.uJustification = VAR_1;
        else
            VAR_11[VAR_12].sva.uJustification = VAR_0;

        if (VAR_17 == 0)
            continue;

        if (VAR_17 ==1 && VAR_5[VAR_16[0]] == 0x0020)
            VAR_10[VAR_16[0]].fCanGlyphAlone = 1;


        if (VAR_17 == 1 && VAR_5[VAR_16[0]] == 0x0e33)
            VAR_11[VAR_12].sva.fClusterStart = 0;
    }

    FUNC_2(VAR_8, VAR_6, VAR_9, VAR_11);


    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
    {
        if (!VAR_11[VAR_12].sva.fClusterStart)
            VAR_11[VAR_12-VAR_14].sva.uJustification = VAR_1;
    }
}
