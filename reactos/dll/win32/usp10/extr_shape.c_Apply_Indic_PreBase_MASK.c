
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ base; size_t start; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef scalar_t__ INT ;
typedef int HDC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *,scalar_t__,int,scalar_t__*,char const*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, IndicSyllable *VAR_6, WORD *VAR_7, INT* VAR_8, WORD *VAR_9, lexical_function VAR_10, IndicSyllable *VAR_11, const char* VAR_12)
{
    INT VAR_13, VAR_14;
    INT VAR_15,VAR_16;

    VAR_15 = VAR_6->base - VAR_6->start;

    VAR_16 = 0;
    VAR_13 = FUNC_2(&VAR_4[VAR_6->start], 0, VAR_15, VAR_10);
    while (VAR_13 >= 0 && VAR_13 + VAR_16 < (VAR_11->base - VAR_11->start))
    {
        INT VAR_17 = *VAR_8;
        VAR_14 = FUNC_1(VAR_1, VAR_3, VAR_2, VAR_7, VAR_13+VAR_11->start+VAR_16, 1, VAR_8, VAR_12);
        if (VAR_14 > VAR_0)
        {
            FUNC_0(VAR_14, *VAR_8 - VAR_17, 1, VAR_5, VAR_9);
            FUNC_3(VAR_11, VAR_13 + VAR_11->start + VAR_16, (*VAR_8 - VAR_17));
            VAR_16 += (*VAR_8 - VAR_17);
        }

        VAR_13+=2;
        VAR_13 = FUNC_2(&VAR_4[VAR_6->start], VAR_13, VAR_15, VAR_10);
    }
}
