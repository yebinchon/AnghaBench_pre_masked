
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef scalar_t__ WCHAR ;
struct TYPE_9__ {scalar_t__ fRTL; int fLogicalOrder; } ;
struct TYPE_8__ {int GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef TYPE_2__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;
typedef int BOOL ;


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
 int FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int,int,scalar_t__*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_7(HDC VAR_9, ScriptCache *VAR_10, SCRIPT_ANALYSIS *VAR_11, WCHAR* VAR_12, INT VAR_13, WORD* VAR_14, INT* VAR_15, INT VAR_16, WORD *VAR_17)
{
    INT *VAR_18;
    INT VAR_19, VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23;

    if (*VAR_15 != VAR_13)
    {
        FUNC_0("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    if (!VAR_11->fLogicalOrder && VAR_11->fRTL)
    {
        VAR_19 = 1;
        VAR_20 = -1;
    }
    else
    {
        VAR_19 = -1;
        VAR_20 = 1;
    }

    FUNC_5(VAR_9, VAR_10);

    if (!VAR_10->GSUB_Table)
        return;

    VAR_18 = FUNC_3(VAR_13 * sizeof(*VAR_18));

    for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++)
    {
        if (VAR_12[VAR_21] >= VAR_8 && VAR_12[VAR_21] <= VAR_7)
        {
            WCHAR VAR_24 = FUNC_6(VAR_21,VAR_19,VAR_12,VAR_13);
            WCHAR VAR_25 = FUNC_6(VAR_21,VAR_20,VAR_12,VAR_13);
            BOOL VAR_26 = (VAR_24 != VAR_6 && VAR_24 >= VAR_8 && VAR_24 <= VAR_7);
            BOOL VAR_27 = (VAR_25 != VAR_6 && VAR_25 >= VAR_8 && VAR_25 <= VAR_7);

            if (VAR_26 && VAR_27)
                VAR_18[VAR_21] = VAR_2;
            else if (VAR_26)
                VAR_18[VAR_21] = VAR_4;
            else if (VAR_27)
                VAR_18[VAR_21] = VAR_1;
            else
                VAR_18[VAR_21] = VAR_3;
        }
        else
            VAR_18[VAR_21] = -1;
    }


    if (VAR_20 > 0)
        VAR_22 = VAR_23 = 0;
    else
        VAR_22 = VAR_23 = VAR_13-1;

    while(VAR_22 < VAR_13 && VAR_22 >= 0)
    {
        if (VAR_18[VAR_22] >= 0)
        {
            INT VAR_28;
            INT VAR_29 = *VAR_15;
            VAR_28 = FUNC_2(VAR_9, VAR_11, VAR_10, VAR_14, VAR_23, VAR_20, VAR_15, VAR_5[VAR_18[VAR_22]]);

            if (VAR_28 > VAR_0)
            {
                FUNC_1(VAR_28, *VAR_15 - VAR_29, VAR_20, VAR_13, VAR_17);
                VAR_23 = VAR_28;
                VAR_22 += VAR_20;
            }
            else
            {
                VAR_22 += VAR_20;
                VAR_23 += VAR_20;
            }
        }
        else
        {
            VAR_22 += VAR_20;
            VAR_23 += VAR_20;
        }
    }

    FUNC_4(VAR_18);
}
