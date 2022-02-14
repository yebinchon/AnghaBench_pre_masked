
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ fRTL; int fLogicalOrder; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef scalar_t__ INT ;
typedef int HDC ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,scalar_t__,int *,scalar_t__*,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_2(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, WORD* VAR_6, INT* VAR_7, INT VAR_8, WORD *VAR_9)
{
    INT VAR_10;

    if (*VAR_7 != VAR_5)
    {
        FUNC_0("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    if (!VAR_3->fLogicalOrder && VAR_3->fRTL)
        VAR_10 = -1;
    else
        VAR_10 = 1;

    FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_9, VAR_0);
}
