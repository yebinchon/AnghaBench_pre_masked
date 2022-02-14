
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
struct TYPE_13__ {scalar_t__ fRTL; scalar_t__ fLogicalOrder; } ;
struct TYPE_12__ {int fCanGlyphAlone; } ;
struct TYPE_10__ {void* uJustification; } ;
struct TYPE_11__ {TYPE_1__ sva; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;
typedef TYPE_3__ SCRIPT_CHARPROP ;
typedef TYPE_4__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int *,int const*,int const,int*,int const,TYPE_2__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (int*,int const,int) ;
 int FUNC_2 (int const,int const,int*,TYPE_2__*) ;
 int* FUNC_3 (int const) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int ,int const) ;

__attribute__((used)) static void FUNC_6( HDC VAR_11, ScriptCache *VAR_12, SCRIPT_ANALYSIS *VAR_13, const WCHAR* VAR_14, const INT VAR_15, const WORD* VAR_16, const INT VAR_17, WORD *VAR_18, SCRIPT_CHARPROP *VAR_19, SCRIPT_GLYPHPROP *VAR_20 )
{
    int VAR_21,VAR_22;
    int VAR_23, VAR_24;
    INT VAR_25, VAR_26;
    BYTE *VAR_27;

    VAR_27 = FUNC_3(VAR_17);
    FUNC_5(VAR_27,0,VAR_17);

    if (VAR_13->fLogicalOrder && VAR_13->fRTL)
    {
        VAR_23 = 0;
        VAR_24 = VAR_17-1;
        VAR_25 = -1;
        VAR_26 = 1;
    }
    else
    {
        VAR_23 = VAR_17-1;
        VAR_24 = 0;
        VAR_25 = 1;
        VAR_26 = -1;
    }

    for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
    {
        for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++)
            if (VAR_18[VAR_22] == VAR_21)
            {
                if (VAR_14[VAR_22] == 0x0020)
                    VAR_27[VAR_21] = 1;
            }
    }

    for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
    {
        int VAR_28[20];
        int VAR_29 = 0;
        BOOL VAR_30, VAR_31;

        VAR_22 = FUNC_1(VAR_18, VAR_15, VAR_21);
        if (VAR_22>=0)
        {
            for (; VAR_22 < VAR_15 && VAR_18[VAR_22] == VAR_21; VAR_22++)
                VAR_28[VAR_29++] = VAR_22;
        }

        VAR_30 = (VAR_21 == VAR_23 || (VAR_21+VAR_25 > 0 && VAR_21+VAR_25 < VAR_17 && VAR_27[VAR_21+VAR_25]));
        VAR_31 = (VAR_21 == VAR_24 || (VAR_21+VAR_26 > 0 && VAR_21+VAR_26 < VAR_17 && VAR_27[VAR_21+VAR_26]));

        if (VAR_29 == 0)
            continue;

        if (VAR_29 == 1)
        {
            if (VAR_14[VAR_28[0]] == 0x0020)
            {
                VAR_20[VAR_21].sva.uJustification = VAR_3;
                VAR_19[VAR_28[0]].fCanGlyphAlone = 1;
            }
            else if (VAR_14[VAR_28[0]] == 0x0640)
                VAR_20[VAR_21].sva.uJustification = VAR_5;
            else if (VAR_14[VAR_28[0]] == 0x0633)
            {
                if (!VAR_30 && !VAR_31)
                    VAR_20[VAR_21].sva.uJustification = VAR_9;
                else if (VAR_30)
                    VAR_20[VAR_21].sva.uJustification = VAR_8;
                else
                    VAR_20[VAR_21].sva.uJustification = VAR_10;
            }
            else if (!VAR_30)
            {
                if (VAR_14[VAR_28[0]] == 0x0628 )
                    VAR_20[VAR_21].sva.uJustification = VAR_1;
                else if (VAR_14[VAR_28[0]] == 0x0631 )
                    VAR_20[VAR_21].sva.uJustification = VAR_7;
                else if (VAR_14[VAR_28[0]] == 0x0647 )
                    VAR_20[VAR_21].sva.uJustification = VAR_4;
                else if ((VAR_14[VAR_28[0]] == 0x0627 || VAR_14[VAR_28[0]] == 0x0625 || VAR_14[VAR_28[0]] == 0x0623 || VAR_14[VAR_28[0]] == 0x0622) )
                    VAR_20[VAR_21].sva.uJustification = VAR_0;
                else
                    VAR_20[VAR_21].sva.uJustification = VAR_10;
            }
            else if (!VAR_30 && !VAR_31)
                VAR_20[VAR_21].sva.uJustification = VAR_6;
            else
                VAR_20[VAR_21].sva.uJustification = VAR_10;
        }
        else if (VAR_29 == 2)
        {
            if ((VAR_14[VAR_28[0]] == 0x0628 && VAR_14[VAR_28[1]]== 0x0631) || (VAR_14[VAR_28[0]] == 0x0631 && VAR_14[VAR_28[1]]== 0x0628))
                VAR_20[VAR_21].sva.uJustification = VAR_2;
            else if (!VAR_30)
                VAR_20[VAR_21].sva.uJustification = VAR_6;
            else
                VAR_20[VAR_21].sva.uJustification = VAR_10;
        }
        else if (!VAR_30 && !VAR_31)
            VAR_20[VAR_21].sva.uJustification = VAR_6;
        else
            VAR_20[VAR_21].sva.uJustification = VAR_10;
    }

    FUNC_0(VAR_12, VAR_16, VAR_17, VAR_18, VAR_15, VAR_20);
    FUNC_2(VAR_17, VAR_15, VAR_18, VAR_20);
    FUNC_4(VAR_27);
}
