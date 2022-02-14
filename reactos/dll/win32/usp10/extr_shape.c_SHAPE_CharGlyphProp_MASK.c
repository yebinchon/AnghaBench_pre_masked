
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_7__ {int (* charGlyphPropProc ) (int ,int *,TYPE_1__*,int const*,int const,int const*,int const,int *,int *,int *) ;} ;
struct TYPE_6__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef int SCRIPT_GLYPHPROP ;
typedef int SCRIPT_CHARPROP ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int *,TYPE_1__*,int const*,int const,int const*,int const,int *,int *,int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_1__*,int const*,int const,int const*,int const,int *,int *,int *) ;

void FUNC_3(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, const WCHAR* VAR_4, const INT VAR_5, const WORD* VAR_6, const INT VAR_7, WORD *VAR_8, SCRIPT_CHARPROP *VAR_9, SCRIPT_GLYPHPROP *VAR_10)
{
    FUNC_1(VAR_1, VAR_2);

    if (VAR_0[VAR_3->eScript].charGlyphPropProc)
        VAR_0[VAR_3->eScript].charGlyphPropProc(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    else
        FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
