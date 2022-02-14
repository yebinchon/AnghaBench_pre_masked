
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_10__ {int fCanGlyphAlone; } ;
struct TYPE_8__ {int uJustification; } ;
struct TYPE_9__ {TYPE_1__ sva; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;
typedef TYPE_3__ SCRIPT_CHARPROP ;
typedef int SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int *,int const*,int const,int*,int const,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int const,int) ;
 int FUNC_2 (int const,int const,int*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( HDC VAR_2, ScriptCache* VAR_3, SCRIPT_ANALYSIS* VAR_4, const WCHAR* VAR_5, const INT VAR_6, const WORD* VAR_7, const INT VAR_8, WORD* VAR_9, SCRIPT_CHARPROP* VAR_10, SCRIPT_GLYPHPROP* VAR_11)
{
    int VAR_12,VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
    {
        int VAR_14[20];
        int VAR_15 = 0;

        VAR_13 = FUNC_1(VAR_9, VAR_6, VAR_12);
        if (VAR_13>=0)
        {
            for (; VAR_13 < VAR_6 && VAR_9[VAR_13] == VAR_12; VAR_13++)
                VAR_14[VAR_15++] = VAR_13;
        }

        if (VAR_15 == 0)
            continue;

        if (VAR_15 ==1 && VAR_5[VAR_14[0]] == 0x0020)
        {
            VAR_11[VAR_12].sva.uJustification = VAR_0;
            VAR_10[VAR_14[0]].fCanGlyphAlone = 1;
        }
        else
            VAR_11[VAR_12].sva.uJustification = VAR_1;
    }
    FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6, VAR_11);
    FUNC_2(VAR_8, VAR_6, VAR_9, VAR_11);
}
