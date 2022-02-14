
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;
struct TYPE_7__ {int start; unsigned int base; int ralf; int blwf; int pref; int end; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *,int const*,TYPE_1__*,scalar_t__ (*) (int const),int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,TYPE_1__*,int) ;
 int FUNC_4 (int const*,unsigned int,int ,unsigned int*,int,scalar_t__ (*) (int const)) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int const*,unsigned int,scalar_t__ (*) (int const)) ;
 TYPE_1__* FUNC_7 (int) ;
 scalar_t__ VAR_0 ;

void FUNC_8(HDC VAR_1, SCRIPT_ANALYSIS *VAR_2, ScriptCache *VAR_3, const WCHAR *VAR_4, unsigned int VAR_5,
        IndicSyllable **VAR_6, int *VAR_7, lexical_function VAR_8, BOOL VAR_9)
{
    unsigned int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;

    *VAR_7 = 0;

    if (!VAR_8)
    {
        FUNC_0("Failure to have required functions\n");
        return;
    }

    FUNC_6(VAR_4, VAR_5, VAR_8);
    while (VAR_12 != -1)
    {
        while((VAR_12 < VAR_5) && VAR_8(VAR_4[VAR_12]) == VAR_0)
            VAR_12++;
        VAR_11 = VAR_12;
        if (VAR_12 >= VAR_5)
            break;
        VAR_12 = FUNC_4(VAR_4, VAR_5, 0, &VAR_10, VAR_11, VAR_8);
        if (VAR_12 != -1)
        {
            if (*VAR_7)
                *VAR_6 = FUNC_3(FUNC_2(),0,*VAR_6, sizeof(IndicSyllable)*(*VAR_7+1));
            else
                *VAR_6 = FUNC_7(sizeof(**VAR_6));
            (*VAR_6)[*VAR_7].start = VAR_11;
            (*VAR_6)[*VAR_7].base = VAR_10;
            (*VAR_6)[*VAR_7].ralf = -1;
            (*VAR_6)[*VAR_7].blwf = -1;
            (*VAR_6)[*VAR_7].pref = -1;
            (*VAR_6)[*VAR_7].end = VAR_12-1;
            FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &(*VAR_6)[*VAR_7], VAR_8, VAR_9);
            VAR_11 = VAR_12;
            *VAR_7 = (*VAR_7)+1;
        }
        else if (VAR_11 < VAR_5)
        {
            FUNC_5("Processing failed at %i\n",VAR_11);
            VAR_12 = ++VAR_11;
        }
    }
    FUNC_5("Processed %i of %i characters into %i syllables\n",VAR_11,VAR_5,*VAR_7);
}
