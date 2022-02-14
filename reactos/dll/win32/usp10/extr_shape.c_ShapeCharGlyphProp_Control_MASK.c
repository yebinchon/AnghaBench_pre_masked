
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
struct TYPE_8__ {int fClusterStart; int fZeroWidth; int uJustification; scalar_t__ fDiacritic; } ;
struct TYPE_10__ {TYPE_2__ sva; } ;
struct TYPE_7__ {scalar_t__ const wgDefault; } ;
struct TYPE_9__ {TYPE_1__ sfp; } ;
typedef TYPE_3__ ScriptCache ;
typedef TYPE_4__ SCRIPT_GLYPHPROP ;
typedef int SCRIPT_CHARPROP ;
typedef int SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, const WCHAR* VAR_4, const INT VAR_5, const WORD* VAR_6, const INT VAR_7, WORD *VAR_8, SCRIPT_CHARPROP *VAR_9, SCRIPT_GLYPHPROP *VAR_10 )
{
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
        VAR_10[VAR_11].sva.fClusterStart = 1;
        VAR_10[VAR_11].sva.fDiacritic = 0;
        VAR_10[VAR_11].sva.uJustification = VAR_0;

        if (VAR_6[VAR_11] == VAR_2->sfp.wgDefault)
            VAR_10[VAR_11].sva.fZeroWidth = 0;
        else
            VAR_10[VAR_11].sva.fZeroWidth = 1;
    }
}
