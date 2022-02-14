
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_8__ {scalar_t__ fRTL; int fLogicalOrder; } ;
struct TYPE_7__ {int GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*,int *,int,int,int*,int ) ;
 int * VAR_5 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(HDC VAR_6, ScriptCache *VAR_7, SCRIPT_ANALYSIS *VAR_8, WCHAR* VAR_9, INT VAR_10, WORD* VAR_11, INT* VAR_12, INT VAR_13, WORD *VAR_14)
{
    INT *VAR_15;
    INT VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19;

    if (*VAR_12 != VAR_10)
    {
        FUNC_0("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    if (!VAR_8->fLogicalOrder && VAR_8->fRTL)
        VAR_16 = -1;
    else
        VAR_16 = 1;

    if (!VAR_7->GSUB_Table)
        return;

    VAR_15 = FUNC_3(VAR_10 * sizeof(*VAR_15));

    for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
    {
        if (VAR_17 == 0 || FUNC_5(VAR_9[VAR_17-1]))
        {
            if ((VAR_17 == VAR_10-1) || FUNC_5(VAR_9[VAR_17+1]))
                VAR_15[VAR_17] = VAR_3;
            else
                VAR_15[VAR_17] = VAR_1;
        }
        else
        {
            if ((VAR_17 == VAR_10-1) || FUNC_5(VAR_9[VAR_17+1]))
                VAR_15[VAR_17] = VAR_4;
            else
                VAR_15[VAR_17] = VAR_2;
        }
    }


    if (VAR_16 > 0)
        VAR_18 = VAR_19 = 0;
    else
        VAR_18 = VAR_19 = VAR_10-1;

    while(VAR_18 < VAR_10 && VAR_18 >= 0)
    {
        INT VAR_20;
        INT VAR_21 = *VAR_12;
        VAR_20 = FUNC_2(VAR_6, VAR_8, VAR_7, VAR_11, VAR_19, VAR_16, VAR_12, VAR_5[VAR_15[VAR_18]]);

        if (VAR_20 > VAR_0)
        {
            FUNC_1(VAR_20, *VAR_12 - VAR_21, VAR_16, VAR_10, VAR_14);
            VAR_19 = VAR_20;
            VAR_18 += VAR_16;
        }
        else
        {
            VAR_18 += VAR_16;
            VAR_19 += VAR_16;
        }
    }

    FUNC_4(VAR_15);
}
