
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* lexical_function ) (int const) ;
typedef int WCHAR ;
struct TYPE_7__ {int ralf; int start; size_t base; int end; int blwf; int pref; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int *,int *,int const*,TYPE_1__*,int (*) (int const),scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int const*,TYPE_1__*,int (*) (int const),scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int const*,TYPE_1__*,int (*) (int const),scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int const*,TYPE_1__*,int (*) (int const)) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(HDC VAR_1, SCRIPT_ANALYSIS *VAR_2, ScriptCache *VAR_3,
        const WCHAR *VAR_4, IndicSyllable *VAR_5, lexical_function VAR_6, BOOL VAR_7)
{
    int VAR_8;
    BOOL VAR_9 = VAR_0;
    BOOL VAR_10 = VAR_0;


    if (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
    {
        VAR_5->ralf = VAR_5->start;
        VAR_5->start+=2;
    }


    if (!FUNC_4( VAR_6(VAR_4[VAR_5->base]) ))
    {
        for (VAR_8 = VAR_5->end; VAR_8 >= VAR_5->start; VAR_8--)
            if (FUNC_4( VAR_6(VAR_4[VAR_8]) ))
            {
                VAR_5->base = VAR_8;
                break;
            }
    }

    while ((VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) || FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) || (VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)))
    {
        if (VAR_9 && VAR_5->blwf == -1)
            VAR_5->blwf = VAR_5->base - 1;
        if (VAR_10 && VAR_5->pref == -1)
            VAR_5->pref = VAR_5->base - 1;

        for (VAR_8 = VAR_5->base-1; VAR_8 >= VAR_5->start; VAR_8--)
            if (FUNC_4( VAR_6(VAR_4[VAR_8]) ))
            {
                VAR_5->base = VAR_8;
                break;
            }
    }

    if (VAR_5->ralf >= 0)
        VAR_5->start = VAR_5->ralf;

    if (VAR_5->ralf == VAR_5->base)
        VAR_5->ralf = -1;

    return VAR_5->base;
}
