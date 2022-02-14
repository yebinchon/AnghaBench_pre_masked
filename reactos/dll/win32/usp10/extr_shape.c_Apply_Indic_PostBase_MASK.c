
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {size_t ralf; size_t end; size_t base; scalar_t__ start; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef size_t INT ;
typedef int HDC ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t,int,size_t,int *) ;
 size_t FUNC_1 (int ,int *,int *,int *,size_t,int,size_t*,char const*) ;
 size_t FUNC_2 (int *,size_t,size_t,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_4(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, IndicSyllable *VAR_6, WORD *VAR_7, INT* VAR_8, WORD *VAR_9, lexical_function VAR_10, IndicSyllable *VAR_11, BOOL VAR_12, const char* VAR_13)
{
    INT VAR_14, VAR_15;
    INT VAR_16, VAR_17=0;
    INT VAR_18 = VAR_6->ralf;

    VAR_16 = VAR_6->end - VAR_6->base;

    VAR_14 = FUNC_2(&VAR_4[VAR_6->base], 0, VAR_16, VAR_10);

    while (VAR_14 >= 0)
    {
        INT VAR_19 = *VAR_8;
        if (VAR_18 >=0 && VAR_18 < VAR_14)
        {
            VAR_17--;
            VAR_18 = -1;
        }

        if (!VAR_12)
        {
            WORD VAR_20 = VAR_7[VAR_14+VAR_11->base+VAR_17];
            VAR_7[VAR_14+VAR_11->base+VAR_17] = VAR_7[VAR_14+VAR_11->base+VAR_17+1];
            VAR_7[VAR_14+VAR_11->base+VAR_17+1] = VAR_20;
        }

        VAR_15 = FUNC_1(VAR_1, VAR_3, VAR_2, VAR_7, VAR_14+VAR_11->base+VAR_17, 1, VAR_8, VAR_13);
        if (VAR_15 > VAR_0)
        {
            FUNC_0(VAR_15, *VAR_8 - VAR_19, 1, VAR_5, VAR_9);
            FUNC_3(VAR_11,VAR_14+VAR_11->start+VAR_17, (*VAR_8 - VAR_19));
            VAR_17 += (*VAR_8 - VAR_19);
        }
        else if (!VAR_12)
        {
            WORD VAR_21 = VAR_7[VAR_14+VAR_11->base+VAR_17];
            VAR_7[VAR_14+VAR_11->base+VAR_17] = VAR_7[VAR_14+VAR_11->base+VAR_17+1];
            VAR_7[VAR_14+VAR_11->base+VAR_17+1] = VAR_21;
        }

        VAR_14+=2;
        VAR_14 = FUNC_2(&VAR_4[VAR_6->base], VAR_14, VAR_16, VAR_10);
    }
}
