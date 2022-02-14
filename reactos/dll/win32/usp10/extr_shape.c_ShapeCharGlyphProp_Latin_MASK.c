
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {int uJustification; scalar_t__ fZeroWidth; } ;
struct TYPE_6__ {TYPE_1__ sva; } ;
typedef int ScriptCache ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;
typedef int SCRIPT_CHARPROP ;
typedef int SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int const*,int const,int const*,int const,int *,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, const WCHAR* VAR_4, const INT VAR_5, const WORD* VAR_6, const INT VAR_7, WORD *VAR_8, SCRIPT_CHARPROP *VAR_9, SCRIPT_GLYPHPROP *VAR_10 )
{
    int VAR_11;

    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
        if (VAR_10[VAR_11].sva.fZeroWidth)
            VAR_10[VAR_11].sva.uJustification = VAR_0;
}
