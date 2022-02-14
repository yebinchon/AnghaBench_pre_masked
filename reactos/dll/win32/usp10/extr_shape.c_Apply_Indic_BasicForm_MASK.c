
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_8__ {int start; int end; } ;
struct TYPE_7__ {int GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int LoadedFeature ;
typedef TYPE_2__ IndicSyllable ;
typedef int INT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int,int,int*) ;
 int FUNC_1 (int,int,int,int,int *) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_3(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, IndicSyllable *VAR_6, WORD *VAR_7, INT* VAR_8, WORD *VAR_9, lexical_function VAR_10, IndicSyllable *VAR_11, LoadedFeature *VAR_12 )
{
    int VAR_13 = VAR_11->start;

    if (!VAR_12)
        return;

    while(VAR_13 <= VAR_11->end)
    {
            INT VAR_14;
            INT VAR_15 = *VAR_8;
            VAR_14 = FUNC_0(VAR_2->GSUB_Table, VAR_12, VAR_7, VAR_13, 1, VAR_8);
            if (VAR_14 > VAR_0)
            {
                FUNC_1(VAR_14, *VAR_8 - VAR_15, 1, VAR_5, VAR_9);
                FUNC_2(VAR_11,VAR_13,*VAR_8 - VAR_15);
                VAR_13 = VAR_14;
            }
            else
                VAR_13++;
    }
}
